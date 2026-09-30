/* Capstone Disassembly Engine */
/* By Alex Kaplan <awkaplan@gmail.com>, 2026 */

#include <capstone/csky.h>

#include "CSKYDisassemblerExtension.h"

#define GET_SUBTARGETINFO_ENUM
#include "CSKYGenSubtargetInfo.inc"

bool CSKY_getFeatureBits(unsigned int mode, unsigned int feature)
{
	// A disassembler should decode as much as it can, so optional
	// extensions are reported as available by default.
	//
	// The base ISA generations are cumulative (E1 < E2 < 2E3 < 3E7 <
	// 7E10 < 10E60). CK801/802 are the only cores narrow enough that
	// claiming the wider generations would mis-decode, so they are the
	// only ones filtered here.
	switch (feature) {
	default:
		break;
	case CSKY_Has2E3:
	case CSKY_Has3E7:
	case CSKY_Has7E10:
	case CSKY_Has10E60:
		if (mode & CS_MODE_CSKY_801 || mode & CS_MODE_CSKY_802)
			return false;
		break;
	}

	return true;
}
