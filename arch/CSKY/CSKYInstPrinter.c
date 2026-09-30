/* Capstone Disassembly Engine, http://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2022, */
/*    Rot127 <unisono@quyllur.org> 2022-2023 */
/* Automatically translated source file from LLVM. */

/* LLVM-commit: <commit> */
/* LLVM-tag: <tag> */

/* Only small edits allowed. */
/* For multiple similar edits, please create a Patch for the translator. */

/* Capstone's C++ file translator: */
/* https://github.com/capstone-engine/capstone/tree/next/suite/int64_t-sync */

//===-- CSKYInstPrinter.cpp - Convert CSKY MCInst to asm syntax ---------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This class prints an CSKY MCInst to a .s file.
//
//===----------------------------------------------------------------------===//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <capstone/platform.h>

#include "CSKYMapping.h"
#include "../../MathExtras.h"
#include "CSKYInstPrinter.h"
#include "CSKYLinkage.h"
#include "CSKYDisassemblerExtension.h"

#define GET_SUBTARGETINFO_ENUM
#include "CSKYGenSubtargetInfo.inc"

#define GET_INSTRINFO_ENUM
#include "CSKYGenInstrInfo.inc"

#define GET_REGINFO_ENUM
#include "CSKYGenRegisterInfo.inc"

#define CONCAT(a, b) CONCAT_(a, b)
#define CONCAT_(a, b) a##_##b

#define CONCAT(a, b) CONCAT_(a, b)
#define CONCAT_(a, b) a##_##b

#define DEBUG_TYPE "csky-asm-printer"

// LLVM exposes these as llvm-mc command line options. Capstone has no such
// options, so they are fixed here:
//   - branch targets are printed as absolute addresses (like objdump),
//   - registers use their ABI names (sp, lr, ...) rather than rN.
static const bool PrintBranchImmAsAddress = true;
static const bool ABIRegNames = true;
static const bool ArchRegNames = false;

// Include the int64_t-generated portion of the assembly writer.
#define PRINT_ALIAS_INSTR
#include "CSKYGenAsmWriter.inc"

void printInst(MCInst *MI, uint64_t Address, const char *Annot, SStream *O)
{
	bool useAliasDetails = map_use_alias_details(MI);
	map_set_fill_detail_ops(MI, useAliasDetails);

	bool isAlias = printAliasInstr(MI, Address, O);

	MCInst_setIsAlias(MI, isAlias);
	if (!isAlias || !useAliasDetails) {
		map_set_fill_detail_ops(MI, !(isAlias && useAliasDetails));
		if (isAlias)
			SStream_Close(O);
		printInstruction(MI, Address, O);
		if (isAlias)
			SStream_Open(O);
	}
}

void printRegName(SStream *O, unsigned Reg)
{
	SStream_concat0(O, getRegisterName(Reg, ABIRegNames ?
							CSKY_ABIRegAltName :
							CSKY_NoRegAltName));
}

void printFPRRegName(SStream *O, unsigned RegNo)
{
	SStream_concat0(O, getRegisterName(RegNo, CSKY_NoRegAltName));
}

void printOperand(MCInst *MI, unsigned OpNo, SStream *O)
{
	MCOperand *MO = MCInst_getOperand(MI, (OpNo));

	if (MCOperand_isReg(MO)) {
		unsigned Reg = MCOperand_getReg(MO);
		bool useABIName = false;
		if (PrintBranchImmAsAddress)
			useABIName = ABIRegNames;
		else
			useABIName = !ArchRegNames;

		if (Reg == CSKY_C)
			SStream_concat0(O, "");
		else if (CSKY_getFeatureBits(MI->csh->mode, CSKY_FeatureJAVA)) {
			if (Reg == CSKY_R23)
				SStream_concat0(O, (useABIName ? "fp" : "r23"));
			else if (Reg == CSKY_R24)
				SStream_concat0(O,
						(useABIName ? "top" : "r24"));
			else if (Reg == CSKY_R25)
				SStream_concat0(O,
						(useABIName ? "bsp" : "r25"));
			else
				printRegName(O, Reg);
		} else
			printRegName(O, Reg);

		return;
	}

	if (MCOperand_isImm(MO)) {
		// LLVM consults MCInstrDesc::TSFlags here to decide whether the
		// immediate is an address. Capstone's MCInstrDesc carries no
		// TSFlags, so immediates are printed as hex throughout.
		printInt64(O, MCOperand_getImm(MO));
		return;
	}

	// Capstone has no MCExpr printing; symbolic operands cannot occur
	// when disassembling raw bytes.
	CS_ASSERT(MCOperand_isExpr(MO) &&
		  "Unknown operand kind in printOperand");
}

void printDataSymbol(MCInst *MI, unsigned OpNo, SStream *O)
{
	MCOperand *MO = MCInst_getOperand(MI, (OpNo));

	SStream_concat0(O, "[");
	if (MCOperand_isImm(MO))
		printInt64(O, MCOperand_getImm(MO));
	SStream_concat0(O, "]");
}

void printConstpool(MCInst *MI, uint64_t Address, unsigned OpNo, SStream *O)
{
	MCOperand *MO = MCInst_getOperand(MI, (OpNo));

	if (MCOperand_isImm(MO)) {
		uint64_t Target = Address + MCOperand_getImm(MO);
		Target &= 0xfffffffc;
		SStream_concat0(O, "[");
		printUInt64(O, Target);
		SStream_concat0(O, "]");
		return;
	}

	CS_ASSERT(MCOperand_isExpr(MO) &&
		  "Unknown operand kind in printConstpool");
}

void printCSKYSymbolOperand(MCInst *MI, uint64_t Address, unsigned OpNo,
			    SStream *O)
{
	MCOperand *MO = MCInst_getOperand(MI, (OpNo));
	if (!MCOperand_isImm(MO)) {
		return printOperand(MI, OpNo, O);
	}

	uint64_t Target = Address + MCOperand_getImm(MO);
	Target &= 0xffffffff;
	printUInt64(O, Target);
}

void printPSRFlag(MCInst *MI, unsigned OpNo, SStream *O)
{
	int64_t V = MCOperand_getImm(MCInst_getOperand(MI, (OpNo)));

	bool First = true;

	if ((V >> 3) & 0x1) {
		SStream_concat0(O, "ee");
		First = false;
	}
	if ((V >> 2) & 0x1) {
		if (!First)
			SStream_concat0(O, ", ");
		SStream_concat0(O, "ie");
		First = false;
	}
	if ((V >> 1) & 0x1) {
		if (!First)
			SStream_concat0(O, ", ");
		SStream_concat0(O, "fe");
		First = false;
	}
	if ((V >> 0) & 0x1) {
		if (!First)
			SStream_concat0(O, ", ");
		SStream_concat0(O, "af");
	}
}

void printRegisterSeq(MCInst *MI, unsigned OpNum, SStream *O)
{
	printRegName(O, MCOperand_getReg(MCInst_getOperand(MI, (OpNum))));
	SStream_concat0(O, "-");
	printRegName(O, MCOperand_getReg(MCInst_getOperand(MI, (OpNum + 1))));
}

void printRegisterList(MCInst *MI, unsigned OpNum, SStream *O)
{
	int64_t V = MCOperand_getImm(MCInst_getOperand(MI, (OpNum)));
	bool First = true;

	if (V & 0xf) {
		First = false;
		printRegName(O, CSKY_R4);
		int64_t Offset = (V & 0xf) - 1;
		if (Offset) {
			SStream_concat0(O, "-");
			printRegName(O, CSKY_R4 + Offset);
		}
	}

	if ((V >> 4) & 0x1) {
		if (!First)
			SStream_concat0(O, ", ");
		First = false;
		printRegName(O, CSKY_R15);
	}

	if ((V >> 5) & 0x7) {
		if (!First)
			SStream_concat0(O, ", ");
		First = false;
		printRegName(O, CSKY_R16);

		int64_t Offset = ((V >> 5) & 0x7) - 1;

		if (Offset) {
			SStream_concat0(O, "-");
			printRegName(O, CSKY_R16 + Offset);
		}
	}

	if ((V >> 8) & 0x1) {
		if (!First)
			SStream_concat0(O, ", ");
		First = false;
		printRegName(O, CSKY_R28);
	}
}



void printFPR(MCInst *MI, unsigned OpNo, SStream *O)
{
	MCOperand *MO = MCInst_getOperand(MI, (OpNo));
	CS_ASSERT(MCOperand_isReg(MO));

	printFPRRegName(O, MCOperand_getReg(MO));
}

void CSKY_LLVM_printInst(MCInst *MI, uint64_t Address, const char *Annot,
			 SStream *O)
{
	printInst(MI, Address, Annot, O);
}

const char *CSKY_LLVM_getRegisterName(unsigned RegNo, unsigned AltIdx)
{
	return getRegisterName(RegNo, AltIdx);
}
