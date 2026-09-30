/* Capstone Disassembly Engine */
/* By Alex Kaplan <awkaplan@gmail.com>, 2026 */

#ifndef CS_CSKY_MAPPING_H
#define CS_CSKY_MAPPING_H

#include "../../include/capstone/capstone.h"
#include "../../utils.h"
#include "../../Mapping.h"

typedef enum {
#include "CSKYGenCSOpGroup.inc"
} csky_op_group;

void CSKY_init_mri(MCRegisterInfo *MRI);

// return name of register in friendly string
const char *CSKY_reg_name(csh handle, unsigned int reg);

void CSKY_printer(MCInst *MI, SStream *O, void * /* MCRegisterInfo* */ info);

// given internal insn id, return public instruction ID
void CSKY_get_insn_id(cs_struct *h, cs_insn *insn, unsigned int id);

const char *CSKY_insn_name(csh handle, unsigned int id);

const char *CSKY_group_name(csh handle, unsigned int id);

void CSKY_reg_access(const cs_insn *insn, cs_regs regs_read,
		     uint8_t *regs_read_count, cs_regs regs_write,
		     uint8_t *regs_write_count);

bool CSKY_getInstruction(csh handle, const uint8_t *code, size_t code_len,
			 MCInst *instr, uint16_t *size, uint64_t address,
			 void *info);

// cs_detail related functions
void CSKY_init_cs_detail(MCInst *MI);
void CSKY_add_cs_detail_0(MCInst *MI, int /* csky_op_group */ op_group,
			  size_t op_num);

#endif // CS_CSKY_MAPPING_H
