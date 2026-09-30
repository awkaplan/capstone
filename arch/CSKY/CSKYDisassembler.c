/* Capstone Disassembly Engine, http://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2022, */
/*    Rot127 <unisono@quyllur.org> 2022-2023 */
/* Automatically translated source file from LLVM. */

/* LLVM-commit: <commit> */
/* LLVM-tag: <tag> */

/* Only small edits allowed. */
/* For multiple similar edits, please create a Patch for the translator. */

/* Capstone's C++ file translator: */
/* https://github.com/capstone-engine/capstone/tree/next/suite/uint64_t-sync */

//===-- CSKYDisassembler.cpp - Disassembler for CSKY ----------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file implements the CSKYDisassembler class.
//
//===----------------------------------------------------------------------===//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <capstone/platform.h>

#include "../../MCInst.h"
#include "../../MathExtras.h"
#include "../../MCInstPrinter.h"
#include "../../MCDisassembler.h"
#include "../../MCFixedLenDisassembler.h"
#include "../../cs_priv.h"
#include "../../utils.h"
#include "CSKYDisassemblerExtension.h"
#include "CSKYLinkage.h"
#define GET_SUBTARGETINFO_ENUM
#include "CSKYGenSubtargetInfo.inc"

#define GET_INSTRINFO_ENUM
#include "CSKYGenInstrInfo.inc"

#define GET_REGINFO_ENUM
#include "CSKYGenRegisterInfo.inc"

#define CONCAT(a, b) CONCAT_(a, b)
#define CONCAT_(a, b) a##_##b

#define DEBUG_TYPE "csky-disassembler"

static const uint16_t GPRDecoderTable[] = {
	CSKY_R0,  CSKY_R1,  CSKY_R2,  CSKY_R3,	CSKY_R4,  CSKY_R5,  CSKY_R6,
	CSKY_R7,  CSKY_R8,  CSKY_R9,  CSKY_R10, CSKY_R11, CSKY_R12, CSKY_R13,
	CSKY_R14, CSKY_R15, CSKY_R16, CSKY_R17, CSKY_R18, CSKY_R19, CSKY_R20,
	CSKY_R21, CSKY_R22, CSKY_R23, CSKY_R24, CSKY_R25, CSKY_R26, CSKY_R27,
	CSKY_R28, CSKY_R29, CSKY_R30, CSKY_R31
};

static const uint16_t GPRPairDecoderTable[] = {
	CSKY_R0_R1,   CSKY_R1_R2,   CSKY_R2_R3,	  CSKY_R3_R4,	CSKY_R4_R5,
	CSKY_R5_R6,   CSKY_R6_R7,   CSKY_R7_R8,	  CSKY_R8_R9,	CSKY_R9_R10,
	CSKY_R10_R11, CSKY_R11_R12, CSKY_R12_R13, CSKY_R13_R14, CSKY_R14_R15,
	CSKY_R15_R16, CSKY_R16_R17, CSKY_R17_R18, CSKY_R18_R19, CSKY_R19_R20,
	CSKY_R20_R21, CSKY_R21_R22, CSKY_R22_R23, CSKY_R23_R24, CSKY_R24_R25,
	CSKY_R25_R26, CSKY_R26_R27, CSKY_R27_R28, CSKY_R28_R29, CSKY_R29_R30,
	CSKY_R30_R31, CSKY_R31_R32
};

static const uint16_t FPR32DecoderTable[] = {
	CSKY_F0_32,  CSKY_F1_32,  CSKY_F2_32,  CSKY_F3_32,  CSKY_F4_32,
	CSKY_F5_32,  CSKY_F6_32,  CSKY_F7_32,  CSKY_F8_32,  CSKY_F9_32,
	CSKY_F10_32, CSKY_F11_32, CSKY_F12_32, CSKY_F13_32, CSKY_F14_32,
	CSKY_F15_32, CSKY_F16_32, CSKY_F17_32, CSKY_F18_32, CSKY_F19_32,
	CSKY_F20_32, CSKY_F21_32, CSKY_F22_32, CSKY_F23_32, CSKY_F24_32,
	CSKY_F25_32, CSKY_F26_32, CSKY_F27_32, CSKY_F28_32, CSKY_F29_32,
	CSKY_F30_32, CSKY_F31_32
};

static const uint16_t FPR64DecoderTable[] = {
	CSKY_F0_64,  CSKY_F1_64,  CSKY_F2_64,  CSKY_F3_64,  CSKY_F4_64,
	CSKY_F5_64,  CSKY_F6_64,  CSKY_F7_64,  CSKY_F8_64,  CSKY_F9_64,
	CSKY_F10_64, CSKY_F11_64, CSKY_F12_64, CSKY_F13_64, CSKY_F14_64,
	CSKY_F15_64, CSKY_F16_64, CSKY_F17_64, CSKY_F18_64, CSKY_F19_64,
	CSKY_F20_64, CSKY_F21_64, CSKY_F22_64, CSKY_F23_64, CSKY_F24_64,
	CSKY_F25_64, CSKY_F26_64, CSKY_F27_64, CSKY_F28_64, CSKY_F29_64,
	CSKY_F30_64, CSKY_F31_64
};

static DecodeStatus DecodeGPRRegisterClass(MCInst *Inst, uint64_t RegNo,
					   uint64_t Address,
					   const void *Decoder)
{
	if (RegNo >= 32)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (GPRDecoderTable[RegNo]));
	return MCDisassembler_Success;
}

static DecodeStatus DecodeFPR32RegisterClass(MCInst *Inst, uint64_t RegNo,
					     uint64_t Address,
					     const void *Decoder)
{
	if (RegNo >= 32)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (FPR32DecoderTable[RegNo]));
	return MCDisassembler_Success;
}

static DecodeStatus DecodesFPR32RegisterClass(MCInst *Inst, uint64_t RegNo,
					      uint64_t Address,
					      const void *Decoder)
{
	if (RegNo >= 16)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (FPR32DecoderTable[RegNo]));
	return MCDisassembler_Success;
}

static DecodeStatus DecodesFPR64RegisterClass(MCInst *Inst, uint64_t RegNo,
					      uint64_t Address,
					      const void *Decoder)
{
	if (RegNo >= 16)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (FPR64DecoderTable[RegNo]));
	return MCDisassembler_Success;
}

static DecodeStatus DecodesFPR64_VRegisterClass(MCInst *Inst, uint64_t RegNo,
						uint64_t Address,
						const void *Decoder)
{
	if (RegNo >= 16)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (FPR64DecoderTable[RegNo]));
	return MCDisassembler_Success;
}

static DecodeStatus DecodeFPR64RegisterClass(MCInst *Inst, uint64_t RegNo,
					     uint64_t Address,
					     const void *Decoder)
{
	if (RegNo >= 32)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (FPR64DecoderTable[RegNo]));
	return MCDisassembler_Success;
}

static DecodeStatus DecodesGPRRegisterClass(MCInst *Inst, uint64_t RegNo,
					    uint64_t Address,
					    const void *Decoder)
{
	if (RegNo >= 16)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (GPRDecoderTable[RegNo]));
	return MCDisassembler_Success;
}

static DecodeStatus DecodemGPRRegisterClass(MCInst *Inst, uint64_t RegNo,
					    uint64_t Address,
					    const void *Decoder)
{
	if (RegNo >= 8)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (GPRDecoderTable[RegNo]));
	return MCDisassembler_Success;
}

static DecodeStatus DecodeGPRPairRegisterClass(MCInst *Inst, uint64_t RegNo,
					       uint64_t Address,
					       const void *Decoder)
{
	bool hasHighReg =
		CSKY_getFeatureBits(Inst->csh->mode, CSKY_FeatureHighreg);

	if (RegNo >= 32 || (!hasHighReg && RegNo >= 16))
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (GPRPairDecoderTable[RegNo]));
	return MCDisassembler_Success;
}

#define DEFINE_decodeUImmOperand(N, S) \
	static DecodeStatus CONCAT(decodeUImmOperand, CONCAT(N, S))( \
		MCInst * Inst, uint64_t Imm, int64_t Address, \
		const void *Decoder) \
	{ \
		CS_ASSERT(isUIntN(N, Imm) && "Invalid immediate"); \
		MCOperand_CreateImm0(Inst, (Imm << S)); \
		return MCDisassembler_Success; \
	}
DEFINE_decodeUImmOperand(7, 2);
DEFINE_decodeUImmOperand(8, 2);
DEFINE_decodeUImmOperand(8, 0);
DEFINE_decodeUImmOperand(5, 0);
DEFINE_decodeUImmOperand(5, 1);
DEFINE_decodeUImmOperand(5, 2);
DEFINE_decodeUImmOperand(4, 0);
DEFINE_decodeUImmOperand(2, 0);
DEFINE_decodeUImmOperand(18, 0);
DEFINE_decodeUImmOperand(18, 1);
DEFINE_decodeUImmOperand(18, 2);
DEFINE_decodeUImmOperand(12, 0);
DEFINE_decodeUImmOperand(12, 1);
DEFINE_decodeUImmOperand(12, 2);
DEFINE_decodeUImmOperand(16, 0);
DEFINE_decodeUImmOperand(16, 2);
DEFINE_decodeUImmOperand(8, 3);
DEFINE_decodeUImmOperand(20, 0);

#define DEFINE_decodeOImmOperand(N) \
	static DecodeStatus CONCAT(decodeOImmOperand, \
				   N)(MCInst * Inst, uint64_t Imm, \
				      int64_t Address, const void *Decoder) \
	{ \
		CS_ASSERT(isUIntN(N, Imm) && "Invalid immediate"); \
		MCOperand_CreateImm0(Inst, (Imm + 1)); \
		return MCDisassembler_Success; \
	}
DEFINE_decodeOImmOperand(8);
DEFINE_decodeOImmOperand(5);
DEFINE_decodeOImmOperand(3);
DEFINE_decodeOImmOperand(12);
DEFINE_decodeOImmOperand(16);

static DecodeStatus decodeLRW16Imm8(MCInst *Inst, uint64_t Imm, int64_t Address,
				    const void *Decoder)
{
	CS_ASSERT(isUIntN(8, Imm) && "Invalid immediate");
	if ((Imm >> 7) & 0x1) {
		MCOperand_CreateImm0(Inst, ((Imm & 0x7F) << 2));
	} else {
		uint64_t V = ((Imm ^ 0xFFFFFFFF) & 0xFF);
		MCOperand_CreateImm0(Inst, (V << 2));
	}

	return MCDisassembler_Success;
}

static DecodeStatus decodeJMPIXImmOperand(MCInst *Inst, uint64_t Imm,
					  int64_t Address, const void *Decoder)
{
	CS_ASSERT(isUIntN(2, Imm) && "Invalid immediate");

	if (Imm == 0)
		MCOperand_CreateImm0(Inst, (16));
	else if (Imm == 1)
		MCOperand_CreateImm0(Inst, (24));
	else if (Imm == 2)
		MCOperand_CreateImm0(Inst, (32));
	else if (Imm == 3)
		MCOperand_CreateImm0(Inst, (40));
	else
		return MCDisassembler_Fail;

	return MCDisassembler_Success;
}

static DecodeStatus DecodeRegSeqOperand(MCInst *Inst, uint64_t Imm,
					int64_t Address, const void *Decoder)
{
	CS_ASSERT(isUIntN(10, Imm) && "Invalid immediate");

	uint64_t Imm5 = Imm & 0x1f;
	uint64_t Ry = (Imm >> 5) & 0x1f;

	if (DecodeGPRRegisterClass(Inst, Ry, Address, Decoder) ==
	    MCDisassembler_Fail)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (GPRDecoderTable[Ry + Imm5]));

	return MCDisassembler_Success;
}

static DecodeStatus DecodeRegSeqOperandF1(MCInst *Inst, uint64_t Imm,
					  int64_t Address, const void *Decoder)
{
	CS_ASSERT(isUIntN(10, Imm) && "Invalid immediate");

	uint64_t Imm5 = Imm & 0x1f;
	uint64_t Ry = (Imm >> 5) & 0x1f;

	if (DecodesFPR32RegisterClass(Inst, Ry, Address, Decoder) ==
	    MCDisassembler_Fail)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (FPR32DecoderTable[Ry + Imm5]));

	return MCDisassembler_Success;
}

static DecodeStatus DecodeRegSeqOperandD1(MCInst *Inst, uint64_t Imm,
					  int64_t Address, const void *Decoder)
{
	CS_ASSERT(isUIntN(10, Imm) && "Invalid immediate");

	uint64_t Imm5 = Imm & 0x1f;
	uint64_t Ry = (Imm >> 5) & 0x1f;

	if (DecodesFPR64RegisterClass(Inst, Ry, Address, Decoder) ==
	    MCDisassembler_Fail)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (FPR64DecoderTable[Ry + Imm5]));

	return MCDisassembler_Success;
}

static DecodeStatus DecodeRegSeqOperandF2(MCInst *Inst, uint64_t Imm,
					  int64_t Address, const void *Decoder)
{
	CS_ASSERT(isUIntN(10, Imm) && "Invalid immediate");

	uint64_t Imm5 = Imm & 0x1f;
	uint64_t Ry = (Imm >> 5) & 0x1f;

	if (DecodeFPR32RegisterClass(Inst, Ry, Address, Decoder) ==
	    MCDisassembler_Fail)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (FPR32DecoderTable[Ry + Imm5]));

	return MCDisassembler_Success;
}

static DecodeStatus DecodeRegSeqOperandD2(MCInst *Inst, uint64_t Imm,
					  int64_t Address, const void *Decoder)
{
	CS_ASSERT(isUIntN(10, Imm) && "Invalid immediate");

	uint64_t Imm5 = Imm & 0x1f;
	uint64_t Ry = (Imm >> 5) & 0x1f;

	if (DecodeFPR64RegisterClass(Inst, Ry, Address, Decoder) ==
	    MCDisassembler_Fail)
		return MCDisassembler_Fail;

	MCOperand_CreateReg0(Inst, (FPR64DecoderTable[Ry + Imm5]));

	return MCDisassembler_Success;
}

static DecodeStatus decodeImmShiftOpValue(MCInst *Inst, uint64_t Imm,
					  int64_t Address, const void *Decoder)
{
	MCOperand_CreateImm0(Inst, (Log2_64(Imm)));
	return MCDisassembler_Success;
}

#define DEFINE_decodeSImmOperand(N, S) \
	static DecodeStatus CONCAT(decodeSImmOperand, CONCAT(N, S))( \
		MCInst * Inst, uint64_t Imm, int64_t Address, \
		const void *Decoder) \
	{ \
		CS_ASSERT(isUIntN(N, Imm) && "Invalid immediate"); \
\
		MCOperand_CreateImm0(Inst, (SignExtend64((Imm), N) << S)); \
		return MCDisassembler_Success; \
	}
DEFINE_decodeSImmOperand(10, 1);
DEFINE_decodeSImmOperand(18, 1);
DEFINE_decodeSImmOperand(26, 1);
DEFINE_decodeSImmOperand(16, 1);

#include "CSKYGenDisassemblerTables.inc"

DecodeStatus handleCROperand(MCInst *MI)
{
	// FIXME: To query instruction info from td file or a table inc file
	switch (MCInst_getOpcode(MI)) {
	default:
		return MCDisassembler_Success;
	case CSKY_LD16WSP:
	case CSKY_ST16WSP:
	case CSKY_ADDI16ZSP:
		MCInst_insert0(MI, 1, MCOperand_CreateReg1(MI, CSKY_R14));
		return MCDisassembler_Success;
	case CSKY_ADDI16SPSP:
	case CSKY_SUBI16SPSP:
		MCInst_insert0(MI, 0, MCOperand_CreateReg1(MI, CSKY_R14));
		MCInst_insert0(MI, 0, MCOperand_CreateReg1(MI, CSKY_R14));
		return MCDisassembler_Success;
	case CSKY_FCMPHS_S:
	case CSKY_FCMPHS_D:
	case CSKY_FCMPLT_S:
	case CSKY_FCMPLT_D:
	case CSKY_FCMPNE_S:
	case CSKY_FCMPNE_D:
	case CSKY_FCMPUO_S:
	case CSKY_FCMPUO_D:
	case CSKY_FCMPZHS_S:
	case CSKY_FCMPZHS_D:
	case CSKY_FCMPZLS_S:
	case CSKY_FCMPZLS_D:
	case CSKY_FCMPZNE_S:
	case CSKY_FCMPZNE_D:
	case CSKY_FCMPZUO_S:
	case CSKY_FCMPZUO_D:
	case CSKY_f2FCMPHS_S:
	case CSKY_f2FCMPHS_D:
	case CSKY_f2FCMPLT_S:
	case CSKY_f2FCMPLT_D:
	case CSKY_f2FCMPNE_S:
	case CSKY_f2FCMPNE_D:
	case CSKY_f2FCMPUO_S:
	case CSKY_f2FCMPUO_D:
	case CSKY_f2FCMPHSZ_S:
	case CSKY_f2FCMPHSZ_D:
	case CSKY_f2FCMPHZ_S:
	case CSKY_f2FCMPHZ_D:
	case CSKY_f2FCMPLSZ_S:
	case CSKY_f2FCMPLSZ_D:
	case CSKY_f2FCMPLTZ_S:
	case CSKY_f2FCMPLTZ_D:
	case CSKY_f2FCMPNEZ_S:
	case CSKY_f2FCMPNEZ_D:
	case CSKY_f2FCMPUOZ_S:
	case CSKY_f2FCMPUOZ_D:

	case CSKY_BT32:
	case CSKY_BF32:
	case CSKY_BT16:
	case CSKY_BF16:
	case CSKY_CMPNEI32:
	case CSKY_CMPNEI16:
	case CSKY_CMPNE32:
	case CSKY_CMPNE16:
	case CSKY_CMPHSI32:
	case CSKY_CMPHSI16:
	case CSKY_CMPHS32:
	case CSKY_CMPHS16:
	case CSKY_CMPLTI32:
	case CSKY_CMPLTI16:
	case CSKY_CMPLT32:
	case CSKY_CMPLT16:
	case CSKY_BTSTI32:
	case CSKY_BTSTI16:
	case CSKY_TSTNBZ32:
	case CSKY_TSTNBZ16:
	case CSKY_TST32:
	case CSKY_TST16:
		MCInst_insert0(MI, 0, MCOperand_CreateReg1(MI, CSKY_C));
		return MCDisassembler_Success;
	case CSKY_LSLC32:
	case CSKY_LSRC32:
	case CSKY_ASRC32:
		MCInst_insert0(MI, 1, MCOperand_CreateReg1(MI, CSKY_C));
		return MCDisassembler_Success;
	case CSKY_MOVF32:
	case CSKY_MOVT32:
	case CSKY_MVC32:
	case CSKY_MVCV32:
	case CSKY_MVCV16:
	case CSKY_INCT32:
	case CSKY_INCF32:
	case CSKY_DECT32:
	case CSKY_DECF32:
	case CSKY_DECGT32:
	case CSKY_DECLT32:
	case CSKY_DECNE32:
	case CSKY_CLRF32:
	case CSKY_CLRT32:
	case CSKY_f2FSEL_S:
	case CSKY_f2FSEL_D:
		MCInst_insert0(MI, 1, MCOperand_CreateReg1(MI, CSKY_C));
		return MCDisassembler_Success;
	case CSKY_ADDC32:
	case CSKY_ADDC16:
	case CSKY_SUBC32:
	case CSKY_SUBC16:
	case CSKY_XSR32:
		MCInst_insert0(MI, 1, MCOperand_CreateReg1(MI, CSKY_C));
		MCOperand_CreateReg0(MI, CSKY_C);
		return MCDisassembler_Success;
	case CSKY_INS32:
		MCOperand_setImm(
			MCInst_getOperand(MI, (3)),
			MCOperand_getImm(MCInst_getOperand(MI, (3))) +
				MCOperand_getImm(MCInst_getOperand(MI, (4))));
		return MCDisassembler_Success;
	}
}

static bool decodeFPUV3Instruction(MCInst *MI, uint32_t insn, uint64_t Address,
				   const void *Decoder)
{
	;
	if (!CSKY_getFeatureBits(MI->csh->mode, CSKY_FeatureFPUV3_HF) &&
	    !CSKY_getFeatureBits(MI->csh->mode, CSKY_FeatureFPUV3_SF) &&
	    !CSKY_getFeatureBits(MI->csh->mode, CSKY_FeatureFPUV3_DF))
		return false;

	DecodeStatus Result = decodeInstruction_4(DecoderTableFPUV332, MI, insn,
						  Address, NULL);

	if (Result == MCDisassembler_Fail) {
		MCInst_clear(MI);
		return false;
	}

	return true;
}

DecodeStatus getInstruction(MCInst *MI, uint64_t *Size, const uint8_t *Bytes,
			    size_t BytesLen, uint64_t Address, SStream *CS)
{
	uint32_t Insn;
	DecodeStatus Result = MCDisassembler_Fail;

	Insn = readBytes16(MI, Bytes);

	if ((Insn >> 14) == 0x3) {
		if (BytesLen < 4) {
			*Size = 0;
			return MCDisassembler_Fail;
		}
		Insn = (Insn << 16) | readBytes16(MI, &Bytes[2]);

		if (decodeFPUV3Instruction(MI, Insn, Address, NULL))
			Result = MCDisassembler_Success;
		else {
			;
			Result = decodeInstruction_4(DecoderTable32, MI, Insn,
						     Address, NULL);
		}

		*Size = 4;
	} else {
		if (BytesLen < 2) {
			*Size = 0;
			return MCDisassembler_Fail;
		};
		Result = decodeInstruction_2(DecoderTable16, MI, Insn, Address,
					     NULL);
		*Size = 2;
	}

	handleCROperand(MI);

	return Result;
}

DecodeStatus CSKY_LLVM_getInstruction(MCInst *MI, uint64_t *Size,
				      const uint8_t *Bytes, size_t BytesLen,
				      uint64_t Address, SStream *CS)
{
	return getInstruction(MI, Size, Bytes, BytesLen, Address, CS);
}
