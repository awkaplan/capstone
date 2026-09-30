#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

enum {
  CSKY_NoRegister,
  CSKY_C = 1,
  CSKY_R0 = 2,
  CSKY_R1 = 3,
  CSKY_R2 = 4,
  CSKY_R3 = 5,
  CSKY_R4 = 6,
  CSKY_R5 = 7,
  CSKY_R6 = 8,
  CSKY_R7 = 9,
  CSKY_R8 = 10,
  CSKY_R9 = 11,
  CSKY_R10 = 12,
  CSKY_R11 = 13,
  CSKY_R12 = 14,
  CSKY_R13 = 15,
  CSKY_R14 = 16,
  CSKY_R15 = 17,
  CSKY_R16 = 18,
  CSKY_R17 = 19,
  CSKY_R18 = 20,
  CSKY_R19 = 21,
  CSKY_R20 = 22,
  CSKY_R21 = 23,
  CSKY_R22 = 24,
  CSKY_R23 = 25,
  CSKY_R24 = 26,
  CSKY_R25 = 27,
  CSKY_R26 = 28,
  CSKY_R27 = 29,
  CSKY_R28 = 30,
  CSKY_R29 = 31,
  CSKY_R30 = 32,
  CSKY_R31 = 33,
  CSKY_R32 = 34,
  CSKY_F0_32 = 35,
  CSKY_F0_64 = 36,
  CSKY_F0_128 = 37,
  CSKY_F1_32 = 38,
  CSKY_F1_64 = 39,
  CSKY_F1_128 = 40,
  CSKY_F2_32 = 41,
  CSKY_F2_64 = 42,
  CSKY_F2_128 = 43,
  CSKY_F3_32 = 44,
  CSKY_F3_64 = 45,
  CSKY_F3_128 = 46,
  CSKY_F4_32 = 47,
  CSKY_F4_64 = 48,
  CSKY_F4_128 = 49,
  CSKY_F5_32 = 50,
  CSKY_F5_64 = 51,
  CSKY_F5_128 = 52,
  CSKY_F6_32 = 53,
  CSKY_F6_64 = 54,
  CSKY_F6_128 = 55,
  CSKY_F7_32 = 56,
  CSKY_F7_64 = 57,
  CSKY_F7_128 = 58,
  CSKY_F8_32 = 59,
  CSKY_F8_64 = 60,
  CSKY_F8_128 = 61,
  CSKY_F9_32 = 62,
  CSKY_F9_64 = 63,
  CSKY_F9_128 = 64,
  CSKY_F10_32 = 65,
  CSKY_F10_64 = 66,
  CSKY_F10_128 = 67,
  CSKY_F11_32 = 68,
  CSKY_F11_64 = 69,
  CSKY_F11_128 = 70,
  CSKY_F12_32 = 71,
  CSKY_F12_64 = 72,
  CSKY_F12_128 = 73,
  CSKY_F13_32 = 74,
  CSKY_F13_64 = 75,
  CSKY_F13_128 = 76,
  CSKY_F14_32 = 77,
  CSKY_F14_64 = 78,
  CSKY_F14_128 = 79,
  CSKY_F15_32 = 80,
  CSKY_F15_64 = 81,
  CSKY_F15_128 = 82,
  CSKY_F16_32 = 83,
  CSKY_F16_64 = 84,
  CSKY_F16_128 = 85,
  CSKY_F17_32 = 86,
  CSKY_F17_64 = 87,
  CSKY_F17_128 = 88,
  CSKY_F18_32 = 89,
  CSKY_F18_64 = 90,
  CSKY_F18_128 = 91,
  CSKY_F19_32 = 92,
  CSKY_F19_64 = 93,
  CSKY_F19_128 = 94,
  CSKY_F20_32 = 95,
  CSKY_F20_64 = 96,
  CSKY_F20_128 = 97,
  CSKY_F21_32 = 98,
  CSKY_F21_64 = 99,
  CSKY_F21_128 = 100,
  CSKY_F22_32 = 101,
  CSKY_F22_64 = 102,
  CSKY_F22_128 = 103,
  CSKY_F23_32 = 104,
  CSKY_F23_64 = 105,
  CSKY_F23_128 = 106,
  CSKY_F24_32 = 107,
  CSKY_F24_64 = 108,
  CSKY_F24_128 = 109,
  CSKY_F25_32 = 110,
  CSKY_F25_64 = 111,
  CSKY_F25_128 = 112,
  CSKY_F26_32 = 113,
  CSKY_F26_64 = 114,
  CSKY_F26_128 = 115,
  CSKY_F27_32 = 116,
  CSKY_F27_64 = 117,
  CSKY_F27_128 = 118,
  CSKY_F28_32 = 119,
  CSKY_F28_64 = 120,
  CSKY_F28_128 = 121,
  CSKY_F29_32 = 122,
  CSKY_F29_64 = 123,
  CSKY_F29_128 = 124,
  CSKY_F30_32 = 125,
  CSKY_F30_64 = 126,
  CSKY_F30_128 = 127,
  CSKY_F31_32 = 128,
  CSKY_F31_64 = 129,
  CSKY_F31_128 = 130,
  CSKY_R0_R1 = 131,
  CSKY_R1_R2 = 132,
  CSKY_R2_R3 = 133,
  CSKY_R3_R4 = 134,
  CSKY_R4_R5 = 135,
  CSKY_R5_R6 = 136,
  CSKY_R6_R7 = 137,
  CSKY_R7_R8 = 138,
  CSKY_R8_R9 = 139,
  CSKY_R9_R10 = 140,
  CSKY_R10_R11 = 141,
  CSKY_R11_R12 = 142,
  CSKY_R12_R13 = 143,
  CSKY_R13_R14 = 144,
  CSKY_R14_R15 = 145,
  CSKY_R15_R16 = 146,
  CSKY_R16_R17 = 147,
  CSKY_R17_R18 = 148,
  CSKY_R18_R19 = 149,
  CSKY_R19_R20 = 150,
  CSKY_R20_R21 = 151,
  CSKY_R21_R22 = 152,
  CSKY_R22_R23 = 153,
  CSKY_R23_R24 = 154,
  CSKY_R24_R25 = 155,
  CSKY_R25_R26 = 156,
  CSKY_R26_R27 = 157,
  CSKY_R27_R28 = 158,
  CSKY_R28_R29 = 159,
  CSKY_R29_R30 = 160,
  CSKY_R30_R31 = 161,
  CSKY_R31_R32 = 162,
  NUM_TARGET_REGS // 163
};

// Register classes

enum {
  CSKY_FPR32RegClassID = 0,
  CSKY_GPRRegClassID = 1,
  CSKY_sFPR32RegClassID = 2,
  CSKY_sGPRRegClassID = 3,
  CSKY_mGPRRegClassID = 4,
  CSKY_CARRYRegClassID = 5,
  CSKY_GPRSPRegClassID = 6,
  CSKY_FPR64RegClassID = 7,
  CSKY_GPRPairRegClassID = 8,
  CSKY_GPRPair_with_sub32_32_in_GPRRegClassID = 9,
  CSKY_GPRPair_with_sub32_0_in_sGPRRegClassID = 10,
  CSKY_sFPR64RegClassID = 11,
  CSKY_sFPR64_VRegClassID = 12,
  CSKY_GPRPair_with_sub32_32_in_sGPRRegClassID = 13,
  CSKY_GPRPair_with_sub32_0_in_mGPRRegClassID = 14,
  CSKY_GPRPair_with_sub32_32_in_mGPRRegClassID = 15,
  CSKY_GPRPair_with_sub32_0_in_GPRSPRegClassID = 16,
  CSKY_GPRPair_with_sub32_32_in_GPRSPRegClassID = 17,
  CSKY_FPR128RegClassID = 18,
  CSKY_sFPR128RegClassID = 19,

};

// Register alternate name indices

enum {
  CSKY_ABIRegAltName,	// 0
  CSKY_NoRegAltName,	// 1
  NUM_TARGET_REG_ALT_NAMES = 2
};

// Subregister indices

enum {
  CSKY_NoSubRegister,
  CSKY_sub32_0,	// 1
  CSKY_sub32_32,	// 2
  CSKY_sub64_0,	// 3
  CSKY_sub64_64,	// 4
  CSKY_NUM_TARGET_SUBREGS
};
#endif // GET_REGINFO_ENUM

/* Capstone Disassembly Engine, https://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2022, */
/*    Rot127 <unisono@quyllur.org> 2022-2024 */
/* Automatically generated file by Capstone's LLVM TableGen Disassembler Backend. */

/* LLVM-commit: <commit> */
/* LLVM-tag: <tag> */

/* Do not edit. */

/* Capstone's LLVM TableGen Backends: */
/* https://github.com/capstone-engine/llvm-capstone */

#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

static const MCPhysReg CSKYRegDiffLists[] = {
  /* 0 */ -1, -1, 0,
  /* 3 */ -129, 1, 0,
  /* 6 */ 1, 1, 0,
  /* 9 */ 128, 1, 0,
  /* 12 */ 128, 0,
  /* 14 */ 129, 0,
};

static const uint16_t CSKYSubRegIdxLists[] = {
  /* 0 */ 3, 1, 0,
  /* 3 */ 1, 2, 0,
};

static const MCRegisterDesc CSKYRegDesc[] = { // Descriptors
  { 6, 0, 0, 0, 0, 0 },
  { 914, 2, 2, 2, 8192, 5 },
  { 23, 2, 14, 2, 8193, 5 },
  { 53, 2, 9, 2, 8194, 5 },
  { 297, 2, 9, 2, 8195, 5 },
  { 319, 2, 9, 2, 8196, 5 },
  { 555, 2, 9, 2, 8197, 5 },
  { 577, 2, 9, 2, 8198, 5 },
  { 599, 2, 9, 2, 8199, 5 },
  { 621, 2, 9, 2, 8200, 5 },
  { 889, 2, 9, 2, 8201, 5 },
  { 911, 2, 9, 2, 8202, 5 },
  { 3, 2, 9, 2, 8203, 5 },
  { 30, 2, 9, 2, 8204, 5 },
  { 60, 2, 9, 2, 8205, 5 },
  { 304, 2, 9, 2, 8206, 5 },
  { 326, 2, 9, 2, 8207, 5 },
  { 562, 2, 9, 2, 8208, 5 },
  { 584, 2, 9, 2, 8209, 5 },
  { 606, 2, 9, 2, 8210, 5 },
  { 628, 2, 9, 2, 8211, 5 },
  { 896, 2, 9, 2, 8212, 5 },
  { 11, 2, 9, 2, 8213, 5 },
  { 38, 2, 9, 2, 8214, 5 },
  { 68, 2, 9, 2, 8215, 5 },
  { 312, 2, 9, 2, 8216, 5 },
  { 334, 2, 9, 2, 8217, 5 },
  { 570, 2, 9, 2, 8218, 5 },
  { 592, 2, 9, 2, 8219, 5 },
  { 614, 2, 9, 2, 8220, 5 },
  { 882, 2, 9, 2, 8221, 5 },
  { 904, 2, 9, 2, 8222, 5 },
  { 19, 2, 9, 2, 8223, 5 },
  { 46, 2, 9, 2, 8224, 5 },
  { 76, 2, 12, 2, 8225, 5 },
  { 101, 2, 6, 2, 8226, 5 },
  { 359, 1, 4, 1, 8226, 0 },
  { 656, 0, 2, 0, 8226, 0 },
  { 128, 2, 6, 2, 8227, 5 },
  { 386, 1, 4, 1, 8227, 0 },
  { 687, 0, 2, 0, 8227, 0 },
  { 148, 2, 6, 2, 8228, 5 },
  { 406, 1, 4, 1, 8228, 0 },
  { 710, 0, 2, 0, 8228, 0 },
  { 168, 2, 6, 2, 8229, 5 },
  { 426, 1, 4, 1, 8229, 0 },
  { 733, 0, 2, 0, 8229, 0 },
  { 188, 2, 6, 2, 8230, 5 },
  { 446, 1, 4, 1, 8230, 0 },
  { 756, 0, 2, 0, 8230, 0 },
  { 208, 2, 6, 2, 8231, 5 },
  { 466, 1, 4, 1, 8231, 0 },
  { 779, 0, 2, 0, 8231, 0 },
  { 228, 2, 6, 2, 8232, 5 },
  { 486, 1, 4, 1, 8232, 0 },
  { 802, 0, 2, 0, 8232, 0 },
  { 248, 2, 6, 2, 8233, 5 },
  { 506, 1, 4, 1, 8233, 0 },
  { 825, 0, 2, 0, 8233, 0 },
  { 268, 2, 6, 2, 8234, 5 },
  { 526, 1, 4, 1, 8234, 0 },
  { 848, 0, 2, 0, 8234, 0 },
  { 288, 2, 6, 2, 8235, 5 },
  { 546, 1, 4, 1, 8235, 0 },
  { 871, 0, 2, 0, 8235, 0 },
  { 80, 2, 6, 2, 8236, 5 },
  { 338, 1, 4, 1, 8236, 0 },
  { 632, 0, 2, 0, 8236, 0 },
  { 107, 2, 6, 2, 8237, 5 },
  { 365, 1, 4, 1, 8237, 0 },
  { 663, 0, 2, 0, 8237, 0 },
  { 134, 2, 6, 2, 8238, 5 },
  { 392, 1, 4, 1, 8238, 0 },
  { 694, 0, 2, 0, 8238, 0 },
  { 154, 2, 6, 2, 8239, 5 },
  { 412, 1, 4, 1, 8239, 0 },
  { 717, 0, 2, 0, 8239, 0 },
  { 174, 2, 6, 2, 8240, 5 },
  { 432, 1, 4, 1, 8240, 0 },
  { 740, 0, 2, 0, 8240, 0 },
  { 194, 2, 6, 2, 8241, 5 },
  { 452, 1, 4, 1, 8241, 0 },
  { 763, 0, 2, 0, 8241, 0 },
  { 214, 2, 6, 2, 8242, 5 },
  { 472, 1, 4, 1, 8242, 0 },
  { 786, 0, 2, 0, 8242, 0 },
  { 234, 2, 6, 2, 8243, 5 },
  { 492, 1, 4, 1, 8243, 0 },
  { 809, 0, 2, 0, 8243, 0 },
  { 254, 2, 6, 2, 8244, 5 },
  { 512, 1, 4, 1, 8244, 0 },
  { 832, 0, 2, 0, 8244, 0 },
  { 274, 2, 6, 2, 8245, 5 },
  { 532, 1, 4, 1, 8245, 0 },
  { 855, 0, 2, 0, 8245, 0 },
  { 87, 2, 6, 2, 8246, 5 },
  { 345, 1, 4, 1, 8246, 0 },
  { 640, 0, 2, 0, 8246, 0 },
  { 114, 2, 6, 2, 8247, 5 },
  { 372, 1, 4, 1, 8247, 0 },
  { 671, 0, 2, 0, 8247, 0 },
  { 141, 2, 6, 2, 8248, 5 },
  { 399, 1, 4, 1, 8248, 0 },
  { 702, 0, 2, 0, 8248, 0 },
  { 161, 2, 6, 2, 8249, 5 },
  { 419, 1, 4, 1, 8249, 0 },
  { 725, 0, 2, 0, 8249, 0 },
  { 181, 2, 6, 2, 8250, 5 },
  { 439, 1, 4, 1, 8250, 0 },
  { 748, 0, 2, 0, 8250, 0 },
  { 201, 2, 6, 2, 8251, 5 },
  { 459, 1, 4, 1, 8251, 0 },
  { 771, 0, 2, 0, 8251, 0 },
  { 221, 2, 6, 2, 8252, 5 },
  { 479, 1, 4, 1, 8252, 0 },
  { 794, 0, 2, 0, 8252, 0 },
  { 241, 2, 6, 2, 8253, 5 },
  { 499, 1, 4, 1, 8253, 0 },
  { 817, 0, 2, 0, 8253, 0 },
  { 261, 2, 6, 2, 8254, 5 },
  { 519, 1, 4, 1, 8254, 0 },
  { 840, 0, 2, 0, 8254, 0 },
  { 281, 2, 6, 2, 8255, 5 },
  { 539, 1, 4, 1, 8255, 0 },
  { 863, 0, 2, 0, 8255, 0 },
  { 94, 2, 6, 2, 8256, 5 },
  { 352, 1, 4, 1, 8256, 0 },
  { 648, 0, 2, 0, 8256, 0 },
  { 121, 2, 6, 2, 8257, 5 },
  { 379, 1, 4, 1, 8257, 0 },
  { 679, 0, 2, 0, 8257, 0 },
  { 50, 3, 2, 3, 16385, 2 },
  { 294, 3, 2, 3, 16386, 2 },
  { 316, 3, 2, 3, 16387, 2 },
  { 552, 3, 2, 3, 16388, 2 },
  { 574, 3, 2, 3, 16389, 2 },
  { 596, 3, 2, 3, 16390, 2 },
  { 618, 3, 2, 3, 16391, 2 },
  { 886, 3, 2, 3, 16392, 2 },
  { 908, 3, 2, 3, 16393, 2 },
  { 0, 3, 2, 3, 16394, 2 },
  { 26, 3, 2, 3, 16395, 2 },
  { 56, 3, 2, 3, 16396, 2 },
  { 300, 3, 2, 3, 16397, 2 },
  { 322, 3, 2, 3, 16398, 2 },
  { 558, 3, 2, 3, 16399, 2 },
  { 580, 3, 2, 3, 16400, 2 },
  { 602, 3, 2, 3, 16401, 2 },
  { 624, 3, 2, 3, 16402, 2 },
  { 892, 3, 2, 3, 16403, 2 },
  { 7, 3, 2, 3, 16404, 2 },
  { 34, 3, 2, 3, 16405, 2 },
  { 64, 3, 2, 3, 16406, 2 },
  { 308, 3, 2, 3, 16407, 2 },
  { 330, 3, 2, 3, 16408, 2 },
  { 566, 3, 2, 3, 16409, 2 },
  { 588, 3, 2, 3, 16410, 2 },
  { 610, 3, 2, 3, 16411, 2 },
  { 878, 3, 2, 3, 16412, 2 },
  { 900, 3, 2, 3, 16413, 2 },
  { 15, 3, 2, 3, 16414, 2 },
  { 42, 3, 2, 3, 16415, 2 },
  { 72, 3, 2, 3, 16416, 2 },
};

  // FPR32 Register Class...
  static const MCPhysReg FPR32[] = {
    CSKY_F0_32, CSKY_F1_32, CSKY_F2_32, CSKY_F3_32, CSKY_F4_32, CSKY_F5_32, CSKY_F6_32, CSKY_F7_32, CSKY_F8_32, CSKY_F9_32, CSKY_F10_32, CSKY_F11_32, CSKY_F12_32, CSKY_F13_32, CSKY_F14_32, CSKY_F15_32, CSKY_F16_32, CSKY_F17_32, CSKY_F18_32, CSKY_F19_32, CSKY_F20_32, CSKY_F21_32, CSKY_F22_32, CSKY_F23_32, CSKY_F24_32, CSKY_F25_32, CSKY_F26_32, CSKY_F27_32, CSKY_F28_32, CSKY_F29_32, CSKY_F30_32, CSKY_F31_32, 
  };

  // FPR32 Bit set.
  static const uint8_t FPR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x48, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x01, 
  };

  // GPR Register Class...
  static const MCPhysReg GPR[] = {
    CSKY_R0, CSKY_R1, CSKY_R2, CSKY_R3, CSKY_R12, CSKY_R13, CSKY_R18, CSKY_R19, CSKY_R20, CSKY_R21, CSKY_R22, CSKY_R23, CSKY_R24, CSKY_R25, CSKY_R15, CSKY_R4, CSKY_R5, CSKY_R6, CSKY_R7, CSKY_R8, CSKY_R9, CSKY_R10, CSKY_R11, CSKY_R16, CSKY_R17, CSKY_R26, CSKY_R27, CSKY_R28, CSKY_R29, CSKY_R30, CSKY_R14, CSKY_R31, 
  };

  // GPR Bit set.
  static const uint8_t GPRBits[] = {
    0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // sFPR32 Register Class...
  static const MCPhysReg sFPR32[] = {
    CSKY_F0_32, CSKY_F1_32, CSKY_F2_32, CSKY_F3_32, CSKY_F4_32, CSKY_F5_32, CSKY_F6_32, CSKY_F7_32, CSKY_F8_32, CSKY_F9_32, CSKY_F10_32, CSKY_F11_32, CSKY_F12_32, CSKY_F13_32, CSKY_F14_32, CSKY_F15_32, 
  };

  // sFPR32 Bit set.
  static const uint8_t sFPR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x48, 0x92, 0x24, 0x49, 0x92, 0x24, 0x01, 
  };

  // sGPR Register Class...
  static const MCPhysReg sGPR[] = {
    CSKY_R0, CSKY_R1, CSKY_R2, CSKY_R3, CSKY_R12, CSKY_R13, CSKY_R15, CSKY_R4, CSKY_R5, CSKY_R6, CSKY_R7, CSKY_R8, CSKY_R9, CSKY_R10, CSKY_R11, CSKY_R14, 
  };

  // sGPR Bit set.
  static const uint8_t sGPRBits[] = {
    0xfc, 0xff, 0x03, 
  };

  // mGPR Register Class...
  static const MCPhysReg mGPR[] = {
    CSKY_R0, CSKY_R1, CSKY_R2, CSKY_R3, CSKY_R4, CSKY_R5, CSKY_R6, CSKY_R7, 
  };

  // mGPR Bit set.
  static const uint8_t mGPRBits[] = {
    0xfc, 0x03, 
  };

  // CARRY Register Class...
  static const MCPhysReg CARRY[] = {
    CSKY_C, 
  };

  // CARRY Bit set.
  static const uint8_t CARRYBits[] = {
    0x02, 
  };

  // GPRSP Register Class...
  static const MCPhysReg GPRSP[] = {
    CSKY_R14, 
  };

  // GPRSP Bit set.
  static const uint8_t GPRSPBits[] = {
    0x00, 0x00, 0x01, 
  };

  // FPR64 Register Class...
  static const MCPhysReg FPR64[] = {
    CSKY_F0_64, CSKY_F1_64, CSKY_F2_64, CSKY_F3_64, CSKY_F4_64, CSKY_F5_64, CSKY_F6_64, CSKY_F7_64, CSKY_F8_64, CSKY_F9_64, CSKY_F10_64, CSKY_F11_64, CSKY_F12_64, CSKY_F13_64, CSKY_F14_64, CSKY_F15_64, CSKY_F16_64, CSKY_F17_64, CSKY_F18_64, CSKY_F19_64, CSKY_F20_64, CSKY_F21_64, CSKY_F22_64, CSKY_F23_64, CSKY_F24_64, CSKY_F25_64, CSKY_F26_64, CSKY_F27_64, CSKY_F28_64, CSKY_F29_64, CSKY_F30_64, CSKY_F31_64, 
  };

  // FPR64 Bit set.
  static const uint8_t FPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x90, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x02, 
  };

  // GPRPair Register Class...
  static const MCPhysReg GPRPair[] = {
    CSKY_R0_R1, CSKY_R1_R2, CSKY_R2_R3, CSKY_R3_R4, CSKY_R4_R5, CSKY_R5_R6, CSKY_R6_R7, CSKY_R7_R8, CSKY_R8_R9, CSKY_R9_R10, CSKY_R10_R11, CSKY_R11_R12, CSKY_R12_R13, CSKY_R13_R14, CSKY_R14_R15, CSKY_R15_R16, CSKY_R16_R17, CSKY_R17_R18, CSKY_R18_R19, CSKY_R19_R20, CSKY_R20_R21, CSKY_R21_R22, CSKY_R22_R23, CSKY_R23_R24, CSKY_R24_R25, CSKY_R25_R26, CSKY_R26_R27, CSKY_R27_R28, CSKY_R28_R29, CSKY_R29_R30, CSKY_R30_R31, CSKY_R31_R32, 
  };

  // GPRPair Bit set.
  static const uint8_t GPRPairBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // GPRPair_with_sub32_32_in_GPR Register Class...
  static const MCPhysReg GPRPair_with_sub32_32_in_GPR[] = {
    CSKY_R0_R1, CSKY_R1_R2, CSKY_R2_R3, CSKY_R3_R4, CSKY_R4_R5, CSKY_R5_R6, CSKY_R6_R7, CSKY_R7_R8, CSKY_R8_R9, CSKY_R9_R10, CSKY_R10_R11, CSKY_R11_R12, CSKY_R12_R13, CSKY_R13_R14, CSKY_R14_R15, CSKY_R15_R16, CSKY_R16_R17, CSKY_R17_R18, CSKY_R18_R19, CSKY_R19_R20, CSKY_R20_R21, CSKY_R21_R22, CSKY_R22_R23, CSKY_R23_R24, CSKY_R24_R25, CSKY_R25_R26, CSKY_R26_R27, CSKY_R27_R28, CSKY_R28_R29, CSKY_R29_R30, CSKY_R30_R31, 
  };

  // GPRPair_with_sub32_32_in_GPR Bit set.
  static const uint8_t GPRPair_with_sub32_32_in_GPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x03, 
  };

  // GPRPair_with_sub32_0_in_sGPR Register Class...
  static const MCPhysReg GPRPair_with_sub32_0_in_sGPR[] = {
    CSKY_R0_R1, CSKY_R1_R2, CSKY_R2_R3, CSKY_R3_R4, CSKY_R4_R5, CSKY_R5_R6, CSKY_R6_R7, CSKY_R7_R8, CSKY_R8_R9, CSKY_R9_R10, CSKY_R10_R11, CSKY_R11_R12, CSKY_R12_R13, CSKY_R13_R14, CSKY_R14_R15, CSKY_R15_R16, 
  };

  // GPRPair_with_sub32_0_in_sGPR Bit set.
  static const uint8_t GPRPair_with_sub32_0_in_sGPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // sFPR64 Register Class...
  static const MCPhysReg sFPR64[] = {
    CSKY_F0_64, CSKY_F1_64, CSKY_F2_64, CSKY_F3_64, CSKY_F4_64, CSKY_F5_64, CSKY_F6_64, CSKY_F7_64, CSKY_F8_64, CSKY_F9_64, CSKY_F10_64, CSKY_F11_64, CSKY_F12_64, CSKY_F13_64, CSKY_F14_64, CSKY_F15_64, 
  };

  // sFPR64 Bit set.
  static const uint8_t sFPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x90, 0x24, 0x49, 0x92, 0x24, 0x49, 0x02, 
  };

  // sFPR64_V Register Class...
  static const MCPhysReg sFPR64_V[] = {
    CSKY_F0_64, CSKY_F1_64, CSKY_F2_64, CSKY_F3_64, CSKY_F4_64, CSKY_F5_64, CSKY_F6_64, CSKY_F7_64, CSKY_F8_64, CSKY_F9_64, CSKY_F10_64, CSKY_F11_64, CSKY_F12_64, CSKY_F13_64, CSKY_F14_64, CSKY_F15_64, 
  };

  // sFPR64_V Bit set.
  static const uint8_t sFPR64_VBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x90, 0x24, 0x49, 0x92, 0x24, 0x49, 0x02, 
  };

  // GPRPair_with_sub32_32_in_sGPR Register Class...
  static const MCPhysReg GPRPair_with_sub32_32_in_sGPR[] = {
    CSKY_R0_R1, CSKY_R1_R2, CSKY_R2_R3, CSKY_R3_R4, CSKY_R4_R5, CSKY_R5_R6, CSKY_R6_R7, CSKY_R7_R8, CSKY_R8_R9, CSKY_R9_R10, CSKY_R10_R11, CSKY_R11_R12, CSKY_R12_R13, CSKY_R13_R14, CSKY_R14_R15, 
  };

  // GPRPair_with_sub32_32_in_sGPR Bit set.
  static const uint8_t GPRPair_with_sub32_32_in_sGPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03, 
  };

  // GPRPair_with_sub32_0_in_mGPR Register Class...
  static const MCPhysReg GPRPair_with_sub32_0_in_mGPR[] = {
    CSKY_R0_R1, CSKY_R1_R2, CSKY_R2_R3, CSKY_R3_R4, CSKY_R4_R5, CSKY_R5_R6, CSKY_R6_R7, CSKY_R7_R8, 
  };

  // GPRPair_with_sub32_0_in_mGPR Bit set.
  static const uint8_t GPRPair_with_sub32_0_in_mGPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // GPRPair_with_sub32_32_in_mGPR Register Class...
  static const MCPhysReg GPRPair_with_sub32_32_in_mGPR[] = {
    CSKY_R0_R1, CSKY_R1_R2, CSKY_R2_R3, CSKY_R3_R4, CSKY_R4_R5, CSKY_R5_R6, CSKY_R6_R7, 
  };

  // GPRPair_with_sub32_32_in_mGPR Bit set.
  static const uint8_t GPRPair_with_sub32_32_in_mGPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

  // GPRPair_with_sub32_0_in_GPRSP Register Class...
  static const MCPhysReg GPRPair_with_sub32_0_in_GPRSP[] = {
    CSKY_R14_R15, 
  };

  // GPRPair_with_sub32_0_in_GPRSP Bit set.
  static const uint8_t GPRPair_with_sub32_0_in_GPRSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
  };

  // GPRPair_with_sub32_32_in_GPRSP Register Class...
  static const MCPhysReg GPRPair_with_sub32_32_in_GPRSP[] = {
    CSKY_R13_R14, 
  };

  // GPRPair_with_sub32_32_in_GPRSP Bit set.
  static const uint8_t GPRPair_with_sub32_32_in_GPRSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // FPR128 Register Class...
  static const MCPhysReg FPR128[] = {
    CSKY_F0_128, CSKY_F1_128, CSKY_F2_128, CSKY_F3_128, CSKY_F4_128, CSKY_F5_128, CSKY_F6_128, CSKY_F7_128, CSKY_F8_128, CSKY_F9_128, CSKY_F10_128, CSKY_F11_128, CSKY_F12_128, CSKY_F13_128, CSKY_F14_128, CSKY_F15_128, CSKY_F16_128, CSKY_F17_128, CSKY_F18_128, CSKY_F19_128, CSKY_F20_128, CSKY_F21_128, CSKY_F22_128, CSKY_F23_128, CSKY_F24_128, CSKY_F25_128, CSKY_F26_128, CSKY_F27_128, CSKY_F28_128, CSKY_F29_128, CSKY_F30_128, CSKY_F31_128, 
  };

  // FPR128 Bit set.
  static const uint8_t FPR128Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x20, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x04, 
  };

  // sFPR128 Register Class...
  static const MCPhysReg sFPR128[] = {
    CSKY_F0_128, CSKY_F1_128, CSKY_F2_128, CSKY_F3_128, CSKY_F4_128, CSKY_F5_128, CSKY_F6_128, CSKY_F7_128, CSKY_F8_128, CSKY_F9_128, CSKY_F10_128, CSKY_F11_128, CSKY_F12_128, CSKY_F13_128, CSKY_F14_128, CSKY_F15_128, 
  };

  // sFPR128 Bit set.
  static const uint8_t sFPR128Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x20, 0x49, 0x92, 0x24, 0x49, 0x92, 0x04, 
  };

static const MCRegisterClass CSKYMCRegisterClasses[] = {
  { FPR32, FPR32Bits, sizeof(FPR32Bits) },
  { GPR, GPRBits, sizeof(GPRBits) },
  { sFPR32, sFPR32Bits, sizeof(sFPR32Bits) },
  { sGPR, sGPRBits, sizeof(sGPRBits) },
  { mGPR, mGPRBits, sizeof(mGPRBits) },
  { CARRY, CARRYBits, sizeof(CARRYBits) },
  { GPRSP, GPRSPBits, sizeof(GPRSPBits) },
  { FPR64, FPR64Bits, sizeof(FPR64Bits) },
  { GPRPair, GPRPairBits, sizeof(GPRPairBits) },
  { GPRPair_with_sub32_32_in_GPR, GPRPair_with_sub32_32_in_GPRBits, sizeof(GPRPair_with_sub32_32_in_GPRBits) },
  { GPRPair_with_sub32_0_in_sGPR, GPRPair_with_sub32_0_in_sGPRBits, sizeof(GPRPair_with_sub32_0_in_sGPRBits) },
  { sFPR64, sFPR64Bits, sizeof(sFPR64Bits) },
  { sFPR64_V, sFPR64_VBits, sizeof(sFPR64_VBits) },
  { GPRPair_with_sub32_32_in_sGPR, GPRPair_with_sub32_32_in_sGPRBits, sizeof(GPRPair_with_sub32_32_in_sGPRBits) },
  { GPRPair_with_sub32_0_in_mGPR, GPRPair_with_sub32_0_in_mGPRBits, sizeof(GPRPair_with_sub32_0_in_mGPRBits) },
  { GPRPair_with_sub32_32_in_mGPR, GPRPair_with_sub32_32_in_mGPRBits, sizeof(GPRPair_with_sub32_32_in_mGPRBits) },
  { GPRPair_with_sub32_0_in_GPRSP, GPRPair_with_sub32_0_in_GPRSPBits, sizeof(GPRPair_with_sub32_0_in_GPRSPBits) },
  { GPRPair_with_sub32_32_in_GPRSP, GPRPair_with_sub32_32_in_GPRSPBits, sizeof(GPRPair_with_sub32_32_in_GPRSPBits) },
  { FPR128, FPR128Bits, sizeof(FPR128Bits) },
  { sFPR128, sFPR128Bits, sizeof(sFPR128Bits) },
};

static const uint16_t CSKYRegEncodingTable[] = {
  0,
  33,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  32,
  0,
  0,
  0,
  1,
  1,
  1,
  2,
  2,
  2,
  3,
  3,
  3,
  4,
  4,
  4,
  5,
  5,
  5,
  6,
  6,
  6,
  7,
  7,
  7,
  8,
  8,
  8,
  9,
  9,
  9,
  10,
  10,
  10,
  11,
  11,
  11,
  12,
  12,
  12,
  13,
  13,
  13,
  14,
  14,
  14,
  15,
  15,
  15,
  16,
  16,
  16,
  17,
  17,
  17,
  18,
  18,
  18,
  19,
  19,
  19,
  20,
  20,
  20,
  21,
  21,
  21,
  22,
  22,
  22,
  23,
  23,
  23,
  24,
  24,
  24,
  25,
  25,
  25,
  26,
  26,
  26,
  27,
  27,
  27,
  28,
  28,
  28,
  29,
  29,
  29,
  30,
  30,
  30,
  31,
  31,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
};
#endif // GET_REGINFO_MC_DESC



