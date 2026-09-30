/* Capstone Disassembly Engine */
/* By Alex Kaplan <awkaplan@gmail.com>, 2026 */

#ifndef CS_CSKY_LINKAGE_H
#define CS_CSKY_LINKAGE_H

// Function definitions to call static LLVM functions.

#include "../../MCDisassembler.h"
#include "../../MCInst.h"
#include "../../MCRegisterInfo.h"
#include "../../SStream.h"
#include "capstone/capstone.h"

const char *CSKY_LLVM_getRegisterName(unsigned RegNo, unsigned AltIdx);
void CSKY_LLVM_printInst(MCInst *MI, uint64_t Address, const char *Annot,
			 SStream *O);
DecodeStatus CSKY_LLVM_getInstruction(MCInst *MI, uint64_t *Size,
				      const uint8_t *Bytes, size_t BytesLen,
				      uint64_t Address, SStream *CS);

#endif // CS_CSKY_LINKAGE_H
