/* Capstone Disassembly Engine */
/* By Alex Kaplan <awkaplan@gmail.com>, 2026 */

#ifdef CAPSTONE_HAS_CSKY

#include <stdio.h>
#include <string.h>

#include <capstone/capstone.h>
#include <capstone/csky.h>

#include "../../Mapping.h"
#include "../../MCDisassembler.h"
#include "../../cs_priv.h"
#include "../../cs_simple_types.h"

#include "CSKYMapping.h"
#include "CSKYLinkage.h"

#define GET_REGINFO_ENUM
#define GET_REGINFO_MC_DESC
#include "CSKYGenRegisterInfo.inc"

#define GET_INSTRINFO_ENUM
#include "CSKYGenInstrInfo.inc"

void CSKY_init_mri(MCRegisterInfo *MRI)
{
	MCRegisterInfo_InitMCRegisterInfo(
		MRI, CSKYRegDesc, sizeof(CSKYRegDesc), 0, 0,
		CSKYMCRegisterClasses, ARR_SIZE(CSKYMCRegisterClasses), 0, 0,
		CSKYRegDiffLists, 0, CSKYSubRegIdxLists,
		ARR_SIZE(CSKYSubRegIdxLists), 0);
}

const char *CSKY_reg_name(csh handle, unsigned int reg)
{
	return CSKY_LLVM_getRegisterName(reg, CSKY_NoRegAltName);
}

void CSKY_get_insn_id(cs_struct *h, cs_insn *insn, unsigned int id)
{
	// Not used by CSKY. Information is set after disassembly.
}

static const char *const insn_name_maps[] = {
#include "CSKYGenCSMappingInsnName.inc"
};

#ifndef CAPSTONE_DIET
static const name_map insn_alias_mnem_map[] = {
#include "CSKYGenCSAliasMnemMap.inc"
	{ CSKY_INS_ALIAS_END, NULL },
};
#endif

const char *CSKY_insn_name(csh handle, unsigned int id)
{
#ifndef CAPSTONE_DIET
	if (id < CSKY_INS_ALIAS_END && id > CSKY_INS_ALIAS_BEGIN) {
		if (id - CSKY_INS_ALIAS_BEGIN >= ARR_SIZE(insn_alias_mnem_map))
			return NULL;

		return insn_alias_mnem_map[id - CSKY_INS_ALIAS_BEGIN - 1].name;
	}
	if (id >= CSKY_INS_ENDING)
		return NULL;

	if (id < ARR_SIZE(insn_name_maps))
		return insn_name_maps[id];
	// not found
	return NULL;
#else
	return NULL;
#endif
}

#ifndef CAPSTONE_DIET
static const name_map group_name_maps[] = {
	{ CSKY_GRP_INVALID, NULL },

	{ CSKY_GRP_JUMP, "jump" },
	{ CSKY_GRP_CALL, "call" },
	{ CSKY_GRP_RET, "return" },
	{ CSKY_GRP_INT, "int" },
	{ CSKY_GRP_IRET, "iret" },
	{ CSKY_GRP_PRIVILEGE, "privilege" },
	{ CSKY_GRP_BRANCH_RELATIVE, "branch_relative" },

// architecture-specific groups
#include "CSKYGenCSFeatureName.inc"
};
#endif

const char *CSKY_group_name(csh handle, unsigned int id)
{
#ifndef CAPSTONE_DIET
	return id2name(group_name_maps, ARR_SIZE(group_name_maps), id);
#else
	return NULL;
#endif
}

static const insn_map csky_insns[] = {
#include "CSKYGenCSMappingInsn.inc"
};

void CSKY_reg_access(const cs_insn *insn, cs_regs regs_read,
		     uint8_t *regs_read_count, cs_regs regs_write,
		     uint8_t *regs_write_count)
{
	uint8_t i;
	uint8_t read_count, write_count;
	cs_csky *csky = &(insn->detail->csky);

	read_count = insn->detail->regs_read_count;
	write_count = insn->detail->regs_write_count;

	// implicit registers
	memcpy(regs_read, insn->detail->regs_read,
	       read_count * sizeof(insn->detail->regs_read[0]));
	memcpy(regs_write, insn->detail->regs_write,
	       write_count * sizeof(insn->detail->regs_write[0]));

	// explicit registers
	for (i = 0; i < csky->op_count; i++) {
		const cs_csky_op *op = &(csky->operands[i]);
		switch (op->type) {
		case CSKY_OP_REG:
			if ((op->access & CS_AC_READ) &&
			    !arr_exist(regs_read, read_count, op->reg)) {
				regs_read[read_count] = (uint16_t)op->reg;
				read_count++;
			}
			if ((op->access & CS_AC_WRITE) &&
			    !arr_exist(regs_write, write_count, op->reg)) {
				regs_write[write_count] = (uint16_t)op->reg;
				write_count++;
			}
			break;
		case CSKY_OP_MEM:
			// registers appeared in memory references always being read
			if ((op->mem.base != CSKY_REG_INVALID) &&
			    !arr_exist(regs_read, read_count, op->mem.base)) {
				regs_read[read_count] = (uint16_t)op->mem.base;
				read_count++;
			}
			if ((op->mem.index != CSKY_REG_INVALID) &&
			    !arr_exist(regs_read, read_count, op->mem.index)) {
				regs_read[read_count] = (uint16_t)op->mem.index;
				read_count++;
			}
			if ((insn->detail->writeback) &&
			    (op->mem.base != CSKY_REG_INVALID) &&
			    !arr_exist(regs_write, write_count, op->mem.base)) {
				regs_write[write_count] = (uint16_t)op->mem.base;
				write_count++;
			}
			break;
		default:
			break;
		}
	}

	*regs_read_count = read_count;
	*regs_write_count = write_count;
}

void CSKY_set_instr_map_data(MCInst *MI)
{
	map_cs_id(MI, csky_insns, ARR_SIZE(csky_insns));
	map_implicit_reads(MI, csky_insns);
	map_implicit_writes(MI, csky_insns);
	map_groups(MI, csky_insns);
}

bool CSKY_getInstruction(csh handle, const uint8_t *code, size_t code_len,
			 MCInst *instr, uint16_t *size, uint64_t address,
			 void *info)
{
	uint64_t temp_size;
	CSKY_init_cs_detail(instr);
	DecodeStatus Result = CSKY_LLVM_getInstruction(
		instr, &temp_size, code, code_len, address, info);
	CSKY_set_instr_map_data(instr);
	*size = temp_size;
	if (Result == MCDisassembler_SoftFail) {
		MCInst_setSoftFail(instr);
	}
	return Result != MCDisassembler_Fail;
}

/// Adds groups to the instruction which are not defined in LLVM.
static void CSKY_add_cs_groups(MCInst *MI)
{
	if (!MI->flat_insn->detail)
		return;
	unsigned Opcode = MI->flat_insn->id;

	switch (Opcode) {
	default:
		return;
	// Subroutine calls: these write the link register (r15) and are
	// the CSKY equivalent of "call".
	case CSKY_INS_BSR32:
	case CSKY_INS_JSR16:
	case CSKY_INS_JSR32:
	case CSKY_INS_JSRI32:
	case CSKY_INS_JBSR32:
		add_group(MI, CSKY_GRP_CALL);
		break;
	// Unconditional/indirect jumps.
	case CSKY_INS_BR16:
	case CSKY_INS_BR32:
	case CSKY_INS_JMP16:
	case CSKY_INS_JMP32:
	case CSKY_INS_JMPI32:
	case CSKY_INS_JMPIX16:
		add_group(MI, CSKY_GRP_JUMP);
		break;
	// Return from interrupt/fast interrupt.
	case CSKY_INS_RFI32:
		add_group(MI, CSKY_GRP_IRET);
		add_group(MI, CSKY_GRP_PRIVILEGE);
		break;
	case CSKY_INS_TRAP32:
		add_group(MI, CSKY_GRP_INT);
		break;
	case CSKY_INS_STOP32:
	case CSKY_INS_WAIT32:
	case CSKY_INS_DOZE32:
		add_group(MI, CSKY_GRP_PRIVILEGE);
		break;
	}
}

void CSKY_printer(MCInst *MI, SStream *O, void * /* MCRegisterInfo* */ info)
{
	MCRegisterInfo *MRI = (MCRegisterInfo *)info;
	MI->MRI = MRI;
	MI->flat_insn->usesAliasDetails = map_use_alias_details(MI);
	CSKY_LLVM_printInst(MI, MI->address, "", O);

	CSKY_add_cs_groups(MI);
#ifndef CAPSTONE_DIET
	map_set_alias_id(MI, O, insn_alias_mnem_map,
			 ARR_SIZE(insn_alias_mnem_map));
#endif
}

void CSKY_setup_op(cs_csky_op *op)
{
	memset(op, 0, sizeof(cs_csky_op));
	op->type = CSKY_OP_INVALID;
}

void CSKY_init_cs_detail(MCInst *MI)
{
	if (detail_is_set(MI)) {
		unsigned int i;

		memset(get_detail(MI), 0,
		       offsetof(cs_detail, csky) + sizeof(cs_csky));

		for (i = 0; i < ARR_SIZE(CSKY_get_detail(MI)->operands); i++)
			CSKY_setup_op(&CSKY_get_detail(MI)->operands[i]);
	}
}

static const map_insn_ops insn_operands[] = {
#include "CSKYGenCSMappingInsnOp.inc"
};

void CSKY_set_detail_op_imm(MCInst *MI, unsigned OpNum, csky_op_type ImmType,
			    int64_t Imm)
{
	if (!detail_is_set(MI))
		return;
	CS_ASSERT_RET((map_get_op_type(MI, OpNum) & ~CS_OP_MEM) == CS_OP_IMM);
	CS_ASSERT_RET(ImmType == CSKY_OP_IMM);

	CSKY_get_detail_op(MI, 0)->type = ImmType;
	CSKY_get_detail_op(MI, 0)->imm = Imm;
	CSKY_get_detail_op(MI, 0)->access = map_get_op_access(MI, OpNum);
	CSKY_inc_op_count(MI);
}

void CSKY_set_detail_op_reg(MCInst *MI, unsigned OpNum, csky_reg Reg)
{
	if (!detail_is_set(MI))
		return;
	CS_ASSERT_RET((map_get_op_type(MI, OpNum) & ~CS_OP_MEM) == CS_OP_REG);

	CSKY_get_detail_op(MI, 0)->type = CSKY_OP_REG;
	CSKY_get_detail_op(MI, 0)->reg = Reg;
	CSKY_get_detail_op(MI, 0)->access = map_get_op_access(MI, OpNum);
	CSKY_inc_op_count(MI);
}

void CSKY_add_cs_detail_0(MCInst *MI, int /* csky_op_group */ op_group,
			  size_t OpNum)
{
	if (!detail_is_set(MI))
		return;

	// Handle memory operands later
	cs_op_type op_type = map_get_op_type(MI, OpNum) & ~CS_OP_MEM;

	// Fill cs_detail
	switch (op_group) {
	default:
		printf("ERROR: Operand group %d not handled!\n", op_group);
		CS_ASSERT_RET(0);
	case CSKY_OP_GROUP_Operand:
	case CSKY_OP_GROUP_Constpool:
	case CSKY_OP_GROUP_DataSymbol:
	case CSKY_OP_GROUP_CSKYSymbolOperand:
		if (op_type == CS_OP_IMM) {
			CSKY_set_detail_op_imm(MI, OpNum, CSKY_OP_IMM,
					       MCInst_getOpVal(MI, OpNum));
		} else if (op_type == CS_OP_REG) {
			CSKY_set_detail_op_reg(MI, OpNum,
					       MCInst_getOpVal(MI, OpNum));
		} else
			CS_ASSERT_RET(0 && "Op type not handled.");
		break;
	case CSKY_OP_GROUP_FPR:
	case CSKY_OP_GROUP_RegisterSeq:
	case CSKY_OP_GROUP_RegisterList:
		CS_ASSERT_RET(op_type == CS_OP_REG);
		CSKY_set_detail_op_reg(MI, OpNum, MCInst_getOpVal(MI, OpNum));
		break;
	}
}

#endif
