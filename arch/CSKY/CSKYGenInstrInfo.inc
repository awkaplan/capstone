/* Capstone Disassembly Engine, https://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2022, */
/*    Rot127 <unisono@quyllur.org> 2022-2024 */
/* Automatically generated file by Capstone's LLVM TableGen Disassembler Backend. */

/* LLVM-commit: <commit> */
/* LLVM-tag: <tag> */

/* Do not edit. */

/* Capstone's LLVM TableGen Backends: */
/* https://github.com/capstone-engine/llvm-capstone */

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM

  enum {
    CSKY_PHI	= 0,
    CSKY_INLINEASM	= 1,
    CSKY_INLINEASM_BR	= 2,
    CSKY_CFI_INSTRUCTION	= 3,
    CSKY_EH_LABEL	= 4,
    CSKY_GC_LABEL	= 5,
    CSKY_ANNOTATION_LABEL	= 6,
    CSKY_KILL	= 7,
    CSKY_EXTRACT_SUBREG	= 8,
    CSKY_INSERT_SUBREG	= 9,
    CSKY_IMPLICIT_DEF	= 10,
    CSKY_SUBREG_TO_REG	= 11,
    CSKY_COPY_TO_REGCLASS	= 12,
    CSKY_DBG_VALUE	= 13,
    CSKY_DBG_VALUE_LIST	= 14,
    CSKY_DBG_INSTR_REF	= 15,
    CSKY_DBG_PHI	= 16,
    CSKY_DBG_LABEL	= 17,
    CSKY_REG_SEQUENCE	= 18,
    CSKY_COPY	= 19,
    CSKY_BUNDLE	= 20,
    CSKY_LIFETIME_START	= 21,
    CSKY_LIFETIME_END	= 22,
    CSKY_PSEUDO_PROBE	= 23,
    CSKY_ARITH_FENCE	= 24,
    CSKY_STACKMAP	= 25,
    CSKY_FENTRY_CALL	= 26,
    CSKY_PATCHPOINT	= 27,
    CSKY_LOAD_STACK_GUARD	= 28,
    CSKY_PREALLOCATED_SETUP	= 29,
    CSKY_PREALLOCATED_ARG	= 30,
    CSKY_STATEPOINT	= 31,
    CSKY_LOCAL_ESCAPE	= 32,
    CSKY_FAULTING_OP	= 33,
    CSKY_PATCHABLE_OP	= 34,
    CSKY_PATCHABLE_FUNCTION_ENTER	= 35,
    CSKY_PATCHABLE_RET	= 36,
    CSKY_PATCHABLE_FUNCTION_EXIT	= 37,
    CSKY_PATCHABLE_TAIL_CALL	= 38,
    CSKY_PATCHABLE_EVENT_CALL	= 39,
    CSKY_PATCHABLE_TYPED_EVENT_CALL	= 40,
    CSKY_ICALL_BRANCH_FUNNEL	= 41,
    CSKY_MEMBARRIER	= 42,
    CSKY_JUMP_TABLE_DEBUG_INFO	= 43,
    CSKY_G_ASSERT_SEXT	= 44,
    CSKY_G_ASSERT_ZEXT	= 45,
    CSKY_G_ASSERT_ALIGN	= 46,
    CSKY_G_ADD	= 47,
    CSKY_G_SUB	= 48,
    CSKY_G_MUL	= 49,
    CSKY_G_SDIV	= 50,
    CSKY_G_UDIV	= 51,
    CSKY_G_SREM	= 52,
    CSKY_G_UREM	= 53,
    CSKY_G_SDIVREM	= 54,
    CSKY_G_UDIVREM	= 55,
    CSKY_G_AND	= 56,
    CSKY_G_OR	= 57,
    CSKY_G_XOR	= 58,
    CSKY_G_IMPLICIT_DEF	= 59,
    CSKY_G_PHI	= 60,
    CSKY_G_FRAME_INDEX	= 61,
    CSKY_G_GLOBAL_VALUE	= 62,
    CSKY_G_CONSTANT_POOL	= 63,
    CSKY_G_EXTRACT	= 64,
    CSKY_G_UNMERGE_VALUES	= 65,
    CSKY_G_INSERT	= 66,
    CSKY_G_MERGE_VALUES	= 67,
    CSKY_G_BUILD_VECTOR	= 68,
    CSKY_G_BUILD_VECTOR_TRUNC	= 69,
    CSKY_G_CONCAT_VECTORS	= 70,
    CSKY_G_PTRTOINT	= 71,
    CSKY_G_INTTOPTR	= 72,
    CSKY_G_BITCAST	= 73,
    CSKY_G_FREEZE	= 74,
    CSKY_G_CONSTANT_FOLD_BARRIER	= 75,
    CSKY_G_INTRINSIC_FPTRUNC_ROUND	= 76,
    CSKY_G_INTRINSIC_TRUNC	= 77,
    CSKY_G_INTRINSIC_ROUND	= 78,
    CSKY_G_INTRINSIC_LRINT	= 79,
    CSKY_G_INTRINSIC_ROUNDEVEN	= 80,
    CSKY_G_READCYCLECOUNTER	= 81,
    CSKY_G_LOAD	= 82,
    CSKY_G_SEXTLOAD	= 83,
    CSKY_G_ZEXTLOAD	= 84,
    CSKY_G_INDEXED_LOAD	= 85,
    CSKY_G_INDEXED_SEXTLOAD	= 86,
    CSKY_G_INDEXED_ZEXTLOAD	= 87,
    CSKY_G_STORE	= 88,
    CSKY_G_INDEXED_STORE	= 89,
    CSKY_G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 90,
    CSKY_G_ATOMIC_CMPXCHG	= 91,
    CSKY_G_ATOMICRMW_XCHG	= 92,
    CSKY_G_ATOMICRMW_ADD	= 93,
    CSKY_G_ATOMICRMW_SUB	= 94,
    CSKY_G_ATOMICRMW_AND	= 95,
    CSKY_G_ATOMICRMW_NAND	= 96,
    CSKY_G_ATOMICRMW_OR	= 97,
    CSKY_G_ATOMICRMW_XOR	= 98,
    CSKY_G_ATOMICRMW_MAX	= 99,
    CSKY_G_ATOMICRMW_MIN	= 100,
    CSKY_G_ATOMICRMW_UMAX	= 101,
    CSKY_G_ATOMICRMW_UMIN	= 102,
    CSKY_G_ATOMICRMW_FADD	= 103,
    CSKY_G_ATOMICRMW_FSUB	= 104,
    CSKY_G_ATOMICRMW_FMAX	= 105,
    CSKY_G_ATOMICRMW_FMIN	= 106,
    CSKY_G_ATOMICRMW_UINC_WRAP	= 107,
    CSKY_G_ATOMICRMW_UDEC_WRAP	= 108,
    CSKY_G_FENCE	= 109,
    CSKY_G_PREFETCH	= 110,
    CSKY_G_BRCOND	= 111,
    CSKY_G_BRINDIRECT	= 112,
    CSKY_G_INVOKE_REGION_START	= 113,
    CSKY_G_INTRINSIC	= 114,
    CSKY_G_INTRINSIC_W_SIDE_EFFECTS	= 115,
    CSKY_G_INTRINSIC_CONVERGENT	= 116,
    CSKY_G_INTRINSIC_CONVERGENT_W_SIDE_EFFECTS	= 117,
    CSKY_G_ANYEXT	= 118,
    CSKY_G_TRUNC	= 119,
    CSKY_G_CONSTANT	= 120,
    CSKY_G_FCONSTANT	= 121,
    CSKY_G_VASTART	= 122,
    CSKY_G_VAARG	= 123,
    CSKY_G_SEXT	= 124,
    CSKY_G_SEXT_INREG	= 125,
    CSKY_G_ZEXT	= 126,
    CSKY_G_SHL	= 127,
    CSKY_G_LSHR	= 128,
    CSKY_G_ASHR	= 129,
    CSKY_G_FSHL	= 130,
    CSKY_G_FSHR	= 131,
    CSKY_G_ROTR	= 132,
    CSKY_G_ROTL	= 133,
    CSKY_G_ICMP	= 134,
    CSKY_G_FCMP	= 135,
    CSKY_G_SELECT	= 136,
    CSKY_G_UADDO	= 137,
    CSKY_G_UADDE	= 138,
    CSKY_G_USUBO	= 139,
    CSKY_G_USUBE	= 140,
    CSKY_G_SADDO	= 141,
    CSKY_G_SADDE	= 142,
    CSKY_G_SSUBO	= 143,
    CSKY_G_SSUBE	= 144,
    CSKY_G_UMULO	= 145,
    CSKY_G_SMULO	= 146,
    CSKY_G_UMULH	= 147,
    CSKY_G_SMULH	= 148,
    CSKY_G_UADDSAT	= 149,
    CSKY_G_SADDSAT	= 150,
    CSKY_G_USUBSAT	= 151,
    CSKY_G_SSUBSAT	= 152,
    CSKY_G_USHLSAT	= 153,
    CSKY_G_SSHLSAT	= 154,
    CSKY_G_SMULFIX	= 155,
    CSKY_G_UMULFIX	= 156,
    CSKY_G_SMULFIXSAT	= 157,
    CSKY_G_UMULFIXSAT	= 158,
    CSKY_G_SDIVFIX	= 159,
    CSKY_G_UDIVFIX	= 160,
    CSKY_G_SDIVFIXSAT	= 161,
    CSKY_G_UDIVFIXSAT	= 162,
    CSKY_G_FADD	= 163,
    CSKY_G_FSUB	= 164,
    CSKY_G_FMUL	= 165,
    CSKY_G_FMA	= 166,
    CSKY_G_FMAD	= 167,
    CSKY_G_FDIV	= 168,
    CSKY_G_FREM	= 169,
    CSKY_G_FPOW	= 170,
    CSKY_G_FPOWI	= 171,
    CSKY_G_FEXP	= 172,
    CSKY_G_FEXP2	= 173,
    CSKY_G_FEXP10	= 174,
    CSKY_G_FLOG	= 175,
    CSKY_G_FLOG2	= 176,
    CSKY_G_FLOG10	= 177,
    CSKY_G_FLDEXP	= 178,
    CSKY_G_FFREXP	= 179,
    CSKY_G_FNEG	= 180,
    CSKY_G_FPEXT	= 181,
    CSKY_G_FPTRUNC	= 182,
    CSKY_G_FPTOSI	= 183,
    CSKY_G_FPTOUI	= 184,
    CSKY_G_SITOFP	= 185,
    CSKY_G_UITOFP	= 186,
    CSKY_G_FABS	= 187,
    CSKY_G_FCOPYSIGN	= 188,
    CSKY_G_IS_FPCLASS	= 189,
    CSKY_G_FCANONICALIZE	= 190,
    CSKY_G_FMINNUM	= 191,
    CSKY_G_FMAXNUM	= 192,
    CSKY_G_FMINNUM_IEEE	= 193,
    CSKY_G_FMAXNUM_IEEE	= 194,
    CSKY_G_FMINIMUM	= 195,
    CSKY_G_FMAXIMUM	= 196,
    CSKY_G_GET_FPENV	= 197,
    CSKY_G_SET_FPENV	= 198,
    CSKY_G_RESET_FPENV	= 199,
    CSKY_G_GET_FPMODE	= 200,
    CSKY_G_SET_FPMODE	= 201,
    CSKY_G_RESET_FPMODE	= 202,
    CSKY_G_PTR_ADD	= 203,
    CSKY_G_PTRMASK	= 204,
    CSKY_G_SMIN	= 205,
    CSKY_G_SMAX	= 206,
    CSKY_G_UMIN	= 207,
    CSKY_G_UMAX	= 208,
    CSKY_G_ABS	= 209,
    CSKY_G_LROUND	= 210,
    CSKY_G_LLROUND	= 211,
    CSKY_G_BR	= 212,
    CSKY_G_BRJT	= 213,
    CSKY_G_INSERT_VECTOR_ELT	= 214,
    CSKY_G_EXTRACT_VECTOR_ELT	= 215,
    CSKY_G_SHUFFLE_VECTOR	= 216,
    CSKY_G_CTTZ	= 217,
    CSKY_G_CTTZ_ZERO_UNDEF	= 218,
    CSKY_G_CTLZ	= 219,
    CSKY_G_CTLZ_ZERO_UNDEF	= 220,
    CSKY_G_CTPOP	= 221,
    CSKY_G_BSWAP	= 222,
    CSKY_G_BITREVERSE	= 223,
    CSKY_G_FCEIL	= 224,
    CSKY_G_FCOS	= 225,
    CSKY_G_FSIN	= 226,
    CSKY_G_FSQRT	= 227,
    CSKY_G_FFLOOR	= 228,
    CSKY_G_FRINT	= 229,
    CSKY_G_FNEARBYINT	= 230,
    CSKY_G_ADDRSPACE_CAST	= 231,
    CSKY_G_BLOCK_ADDR	= 232,
    CSKY_G_JUMP_TABLE	= 233,
    CSKY_G_DYN_STACKALLOC	= 234,
    CSKY_G_STACKSAVE	= 235,
    CSKY_G_STACKRESTORE	= 236,
    CSKY_G_STRICT_FADD	= 237,
    CSKY_G_STRICT_FSUB	= 238,
    CSKY_G_STRICT_FMUL	= 239,
    CSKY_G_STRICT_FDIV	= 240,
    CSKY_G_STRICT_FREM	= 241,
    CSKY_G_STRICT_FMA	= 242,
    CSKY_G_STRICT_FSQRT	= 243,
    CSKY_G_STRICT_FLDEXP	= 244,
    CSKY_G_READ_REGISTER	= 245,
    CSKY_G_WRITE_REGISTER	= 246,
    CSKY_G_MEMCPY	= 247,
    CSKY_G_MEMCPY_INLINE	= 248,
    CSKY_G_MEMMOVE	= 249,
    CSKY_G_MEMSET	= 250,
    CSKY_G_BZERO	= 251,
    CSKY_G_VECREDUCE_SEQ_FADD	= 252,
    CSKY_G_VECREDUCE_SEQ_FMUL	= 253,
    CSKY_G_VECREDUCE_FADD	= 254,
    CSKY_G_VECREDUCE_FMUL	= 255,
    CSKY_G_VECREDUCE_FMAX	= 256,
    CSKY_G_VECREDUCE_FMIN	= 257,
    CSKY_G_VECREDUCE_FMAXIMUM	= 258,
    CSKY_G_VECREDUCE_FMINIMUM	= 259,
    CSKY_G_VECREDUCE_ADD	= 260,
    CSKY_G_VECREDUCE_MUL	= 261,
    CSKY_G_VECREDUCE_AND	= 262,
    CSKY_G_VECREDUCE_OR	= 263,
    CSKY_G_VECREDUCE_XOR	= 264,
    CSKY_G_VECREDUCE_SMAX	= 265,
    CSKY_G_VECREDUCE_SMIN	= 266,
    CSKY_G_VECREDUCE_UMAX	= 267,
    CSKY_G_VECREDUCE_UMIN	= 268,
    CSKY_G_SBFX	= 269,
    CSKY_G_UBFX	= 270,
    CSKY_ADJCALLSTACKDOWN	= 271,
    CSKY_ADJCALLSTACKUP	= 272,
    CSKY_BGENI	= 273,
    CSKY_CMPLEI16	= 274,
    CSKY_CMPLEI32	= 275,
    CSKY_CONSTPOOL_ENTRY	= 276,
    CSKY_FSELD	= 277,
    CSKY_FSELS	= 278,
    CSKY_ISEL16	= 279,
    CSKY_ISEL32	= 280,
    CSKY_JBF16	= 281,
    CSKY_JBF32	= 282,
    CSKY_JBF_E	= 283,
    CSKY_JBR16	= 284,
    CSKY_JBR32	= 285,
    CSKY_JBSR32	= 286,
    CSKY_JBT16	= 287,
    CSKY_JBT32	= 288,
    CSKY_JBT_E	= 289,
    CSKY_LDQ32	= 290,
    CSKY_LOAD_PAIR	= 291,
    CSKY_NEG16	= 292,
    CSKY_NEG32	= 293,
    CSKY_PseudoJMPI32	= 294,
    CSKY_PseudoJSRI32	= 295,
    CSKY_PseudoLRW16	= 296,
    CSKY_PseudoLRW32	= 297,
    CSKY_PseudoTLSLA32	= 298,
    CSKY_RESTORE_CARRY	= 299,
    CSKY_ROTRI32	= 300,
    CSKY_RSUBI16	= 301,
    CSKY_RSUBI32	= 302,
    CSKY_SPILL_CARRY	= 303,
    CSKY_STORE_PAIR	= 304,
    CSKY_STQ32	= 305,
    CSKY_ABS32	= 306,
    CSKY_ADDC16	= 307,
    CSKY_ADDC32	= 308,
    CSKY_ADDI16	= 309,
    CSKY_ADDI16SPSP	= 310,
    CSKY_ADDI16XZ	= 311,
    CSKY_ADDI16ZSP	= 312,
    CSKY_ADDI32	= 313,
    CSKY_ADDU16	= 314,
    CSKY_ADDU16XZ	= 315,
    CSKY_ADDU32	= 316,
    CSKY_AND16	= 317,
    CSKY_AND32	= 318,
    CSKY_ANDI32	= 319,
    CSKY_ANDN16	= 320,
    CSKY_ANDN32	= 321,
    CSKY_ANDNI32	= 322,
    CSKY_ASR16	= 323,
    CSKY_ASR32	= 324,
    CSKY_ASRC32	= 325,
    CSKY_ASRI16	= 326,
    CSKY_ASRI32	= 327,
    CSKY_BCLRI16	= 328,
    CSKY_BCLRI32	= 329,
    CSKY_BEZ32	= 330,
    CSKY_BF16	= 331,
    CSKY_BF32	= 332,
    CSKY_BGENR32	= 333,
    CSKY_BHSZ32	= 334,
    CSKY_BHZ32	= 335,
    CSKY_BKPT	= 336,
    CSKY_BLSZ32	= 337,
    CSKY_BLZ32	= 338,
    CSKY_BMASKI32	= 339,
    CSKY_BNEZ32	= 340,
    CSKY_BNEZAD32	= 341,
    CSKY_BPOPH	= 342,
    CSKY_BPOPW	= 343,
    CSKY_BPUSHH	= 344,
    CSKY_BPUSHW	= 345,
    CSKY_BR16	= 346,
    CSKY_BR32	= 347,
    CSKY_BRAR	= 348,
    CSKY_BRARS	= 349,
    CSKY_BRARW	= 350,
    CSKY_BRARWS	= 351,
    CSKY_BREV32	= 352,
    CSKY_BRWARW	= 353,
    CSKY_BRWARWS	= 354,
    CSKY_BRWAW	= 355,
    CSKY_BRWAWS	= 356,
    CSKY_BSETI16	= 357,
    CSKY_BSETI32	= 358,
    CSKY_BSR32	= 359,
    CSKY_BSR32_BR	= 360,
    CSKY_BT16	= 361,
    CSKY_BT32	= 362,
    CSKY_BTSTI16	= 363,
    CSKY_BTSTI32	= 364,
    CSKY_BWAW	= 365,
    CSKY_BWAWS	= 366,
    CSKY_CLRC16	= 367,
    CSKY_CLRC32	= 368,
    CSKY_CLRF32	= 369,
    CSKY_CLRT32	= 370,
    CSKY_CMPHS16	= 371,
    CSKY_CMPHS32	= 372,
    CSKY_CMPHSI16	= 373,
    CSKY_CMPHSI32	= 374,
    CSKY_CMPLT16	= 375,
    CSKY_CMPLT32	= 376,
    CSKY_CMPLTI16	= 377,
    CSKY_CMPLTI32	= 378,
    CSKY_CMPNE16	= 379,
    CSKY_CMPNE32	= 380,
    CSKY_CMPNEI16	= 381,
    CSKY_CMPNEI32	= 382,
    CSKY_CPOP32	= 383,
    CSKY_CPRC32	= 384,
    CSKY_CPRCR32	= 385,
    CSKY_CPRGR32	= 386,
    CSKY_CPWCR32	= 387,
    CSKY_CPWGR32	= 388,
    CSKY_DCACHE_CALL32	= 389,
    CSKY_DCACHE_CIALL32	= 390,
    CSKY_DCACHE_CISW32	= 391,
    CSKY_DCACHE_CIVA32	= 392,
    CSKY_DCACHE_CSW32	= 393,
    CSKY_DCACHE_CVA32	= 394,
    CSKY_DCACHE_CVAL32	= 395,
    CSKY_DCACHE_IALL32	= 396,
    CSKY_DCACHE_ISW32	= 397,
    CSKY_DCACHE_IVA32	= 398,
    CSKY_DECF32	= 399,
    CSKY_DECGT32	= 400,
    CSKY_DECLT32	= 401,
    CSKY_DECNE32	= 402,
    CSKY_DECT32	= 403,
    CSKY_DIVS32	= 404,
    CSKY_DIVU32	= 405,
    CSKY_DOZE32	= 406,
    CSKY_FABSM	= 407,
    CSKY_FABS_D	= 408,
    CSKY_FABS_S	= 409,
    CSKY_FADDM	= 410,
    CSKY_FADD_D	= 411,
    CSKY_FADD_S	= 412,
    CSKY_FCMPHS_D	= 413,
    CSKY_FCMPHS_S	= 414,
    CSKY_FCMPLT_D	= 415,
    CSKY_FCMPLT_S	= 416,
    CSKY_FCMPNE_D	= 417,
    CSKY_FCMPNE_S	= 418,
    CSKY_FCMPUO_D	= 419,
    CSKY_FCMPUO_S	= 420,
    CSKY_FCMPZHS_D	= 421,
    CSKY_FCMPZHS_S	= 422,
    CSKY_FCMPZLS_D	= 423,
    CSKY_FCMPZLS_S	= 424,
    CSKY_FCMPZNE_D	= 425,
    CSKY_FCMPZNE_S	= 426,
    CSKY_FCMPZUO_D	= 427,
    CSKY_FCMPZUO_S	= 428,
    CSKY_FDIV_D	= 429,
    CSKY_FDIV_S	= 430,
    CSKY_FDTOS	= 431,
    CSKY_FF0	= 432,
    CSKY_FF1	= 433,
    CSKY_FLDM	= 434,
    CSKY_FLDMM	= 435,
    CSKY_FLDM_D	= 436,
    CSKY_FLDM_S	= 437,
    CSKY_FLDRM	= 438,
    CSKY_FLDR_D	= 439,
    CSKY_FLDR_S	= 440,
    CSKY_FLD_D	= 441,
    CSKY_FLD_S	= 442,
    CSKY_FMACM	= 443,
    CSKY_FMAC_D	= 444,
    CSKY_FMAC_S	= 445,
    CSKY_FMFVRH_D	= 446,
    CSKY_FMFVRL	= 447,
    CSKY_FMFVRL_D	= 448,
    CSKY_FMOVM	= 449,
    CSKY_FMOV_D	= 450,
    CSKY_FMOV_S	= 451,
    CSKY_FMSCM	= 452,
    CSKY_FMSC_D	= 453,
    CSKY_FMSC_S	= 454,
    CSKY_FMTVRH_D	= 455,
    CSKY_FMTVRL	= 456,
    CSKY_FMTVRL_D	= 457,
    CSKY_FMULM	= 458,
    CSKY_FMUL_D	= 459,
    CSKY_FMUL_S	= 460,
    CSKY_FNEGM	= 461,
    CSKY_FNEG_D	= 462,
    CSKY_FNEG_S	= 463,
    CSKY_FNMACM	= 464,
    CSKY_FNMAC_D	= 465,
    CSKY_FNMAC_S	= 466,
    CSKY_FNMSCM	= 467,
    CSKY_FNMSC_D	= 468,
    CSKY_FNMSC_S	= 469,
    CSKY_FNMULM	= 470,
    CSKY_FNMUL_D	= 471,
    CSKY_FNMUL_S	= 472,
    CSKY_FRECIP_D	= 473,
    CSKY_FRECIP_S	= 474,
    CSKY_FSITOD	= 475,
    CSKY_FSITOS	= 476,
    CSKY_FSQRT_D	= 477,
    CSKY_FSQRT_S	= 478,
    CSKY_FSTM	= 479,
    CSKY_FSTMM	= 480,
    CSKY_FSTM_D	= 481,
    CSKY_FSTM_S	= 482,
    CSKY_FSTOD	= 483,
    CSKY_FSTRM	= 484,
    CSKY_FSTR_D	= 485,
    CSKY_FSTR_S	= 486,
    CSKY_FST_D	= 487,
    CSKY_FST_S	= 488,
    CSKY_FSUBM	= 489,
    CSKY_FSUB_D	= 490,
    CSKY_FSUB_S	= 491,
    CSKY_FUITOD	= 492,
    CSKY_FUITOS	= 493,
    CSKY_GRS32	= 494,
    CSKY_ICACHE_IALL32	= 495,
    CSKY_ICACHE_IALLS32	= 496,
    CSKY_ICACHE_IVA32	= 497,
    CSKY_IDLY32	= 498,
    CSKY_INCF32	= 499,
    CSKY_INCT32	= 500,
    CSKY_INS32	= 501,
    CSKY_IPOP16	= 502,
    CSKY_IPUSH16	= 503,
    CSKY_IXD32	= 504,
    CSKY_IXH32	= 505,
    CSKY_IXW32	= 506,
    CSKY_JMP16	= 507,
    CSKY_JMP32	= 508,
    CSKY_JMPI32	= 509,
    CSKY_JMPIX16	= 510,
    CSKY_JSR16	= 511,
    CSKY_JSR32	= 512,
    CSKY_JSRI32	= 513,
    CSKY_L2CACHE_CALL	= 514,
    CSKY_L2CACHE_CIALL	= 515,
    CSKY_L2CACHE_IALL	= 516,
    CSKY_LD16B	= 517,
    CSKY_LD16H	= 518,
    CSKY_LD16W	= 519,
    CSKY_LD16WSP	= 520,
    CSKY_LD32B	= 521,
    CSKY_LD32BS	= 522,
    CSKY_LD32D	= 523,
    CSKY_LD32H	= 524,
    CSKY_LD32HS	= 525,
    CSKY_LD32W	= 526,
    CSKY_LDEX32W	= 527,
    CSKY_LDM32	= 528,
    CSKY_LDR32B	= 529,
    CSKY_LDR32BS	= 530,
    CSKY_LDR32H	= 531,
    CSKY_LDR32HS	= 532,
    CSKY_LDR32W	= 533,
    CSKY_LRS32B	= 534,
    CSKY_LRS32H	= 535,
    CSKY_LRS32W	= 536,
    CSKY_LRW16	= 537,
    CSKY_LRW16_Gen	= 538,
    CSKY_LRW32	= 539,
    CSKY_LRW32_Gen	= 540,
    CSKY_LSL16	= 541,
    CSKY_LSL32	= 542,
    CSKY_LSLC32	= 543,
    CSKY_LSLI16	= 544,
    CSKY_LSLI32	= 545,
    CSKY_LSR16	= 546,
    CSKY_LSR32	= 547,
    CSKY_LSRC32	= 548,
    CSKY_LSRI16	= 549,
    CSKY_LSRI32	= 550,
    CSKY_MFFCR	= 551,
    CSKY_MOV16	= 552,
    CSKY_MOV32	= 553,
    CSKY_MOVF32	= 554,
    CSKY_MOVI16	= 555,
    CSKY_MOVI32	= 556,
    CSKY_MOVIH32	= 557,
    CSKY_MOVT32	= 558,
    CSKY_MTFCR	= 559,
    CSKY_MULATS32	= 560,
    CSKY_MULATU32	= 561,
    CSKY_MULSH16	= 562,
    CSKY_MULSH32	= 563,
    CSKY_MULT16	= 564,
    CSKY_MULT32	= 565,
    CSKY_MULTS32	= 566,
    CSKY_MULTU32	= 567,
    CSKY_MVC32	= 568,
    CSKY_MVCV16	= 569,
    CSKY_MVCV32	= 570,
    CSKY_NIE	= 571,
    CSKY_NIR	= 572,
    CSKY_NOR16	= 573,
    CSKY_NOR32	= 574,
    CSKY_NOT16	= 575,
    CSKY_NOT32	= 576,
    CSKY_OR16	= 577,
    CSKY_OR32	= 578,
    CSKY_ORI32	= 579,
    CSKY_PLDR32	= 580,
    CSKY_PLDW32	= 581,
    CSKY_POP16	= 582,
    CSKY_POP32	= 583,
    CSKY_PUSH16	= 584,
    CSKY_PUSH32	= 585,
    CSKY_REVB16	= 586,
    CSKY_REVB32	= 587,
    CSKY_REVH16	= 588,
    CSKY_REVH32	= 589,
    CSKY_RFI32	= 590,
    CSKY_ROTL16	= 591,
    CSKY_ROTL32	= 592,
    CSKY_ROTLI32	= 593,
    CSKY_RTS16	= 594,
    CSKY_SCE32	= 595,
    CSKY_SE32	= 596,
    CSKY_SETC16	= 597,
    CSKY_SETC32	= 598,
    CSKY_SEXT32	= 599,
    CSKY_SEXTB16	= 600,
    CSKY_SEXTB32	= 601,
    CSKY_SEXTH16	= 602,
    CSKY_SEXTH32	= 603,
    CSKY_SRS32B	= 604,
    CSKY_SRS32H	= 605,
    CSKY_SRS32W	= 606,
    CSKY_ST16B	= 607,
    CSKY_ST16H	= 608,
    CSKY_ST16W	= 609,
    CSKY_ST16WSP	= 610,
    CSKY_ST32B	= 611,
    CSKY_ST32D	= 612,
    CSKY_ST32H	= 613,
    CSKY_ST32W	= 614,
    CSKY_STEX32W	= 615,
    CSKY_STM32	= 616,
    CSKY_STOP32	= 617,
    CSKY_STR32B	= 618,
    CSKY_STR32H	= 619,
    CSKY_STR32W	= 620,
    CSKY_SUBC16	= 621,
    CSKY_SUBC32	= 622,
    CSKY_SUBI16	= 623,
    CSKY_SUBI16SPSP	= 624,
    CSKY_SUBI16XZ	= 625,
    CSKY_SUBI32	= 626,
    CSKY_SUBU16	= 627,
    CSKY_SUBU16XZ	= 628,
    CSKY_SUBU32	= 629,
    CSKY_SYNC0_32	= 630,
    CSKY_SYNC32	= 631,
    CSKY_SYNC_32_I	= 632,
    CSKY_SYNC_32_IS	= 633,
    CSKY_SYNC_32_S	= 634,
    CSKY_TLBI_ALL32	= 635,
    CSKY_TLBI_ALLS32	= 636,
    CSKY_TLBI_ASID32	= 637,
    CSKY_TLBI_ASIDS32	= 638,
    CSKY_TLBI_VA32	= 639,
    CSKY_TLBI_VAA32	= 640,
    CSKY_TLBI_VAAS32	= 641,
    CSKY_TLBI_VAS32	= 642,
    CSKY_TRAP32	= 643,
    CSKY_TST16	= 644,
    CSKY_TST32	= 645,
    CSKY_TSTNBZ16	= 646,
    CSKY_TSTNBZ32	= 647,
    CSKY_WAIT32	= 648,
    CSKY_WE32	= 649,
    CSKY_WSC32	= 650,
    CSKY_XOR16	= 651,
    CSKY_XOR32	= 652,
    CSKY_XORI32	= 653,
    CSKY_XSR32	= 654,
    CSKY_XTRB0	= 655,
    CSKY_XTRB1	= 656,
    CSKY_XTRB2	= 657,
    CSKY_XTRB3	= 658,
    CSKY_ZEXT32	= 659,
    CSKY_ZEXTB16	= 660,
    CSKY_ZEXTB32	= 661,
    CSKY_ZEXTH16	= 662,
    CSKY_ZEXTH32	= 663,
    CSKY_f2FABS_D	= 664,
    CSKY_f2FABS_S	= 665,
    CSKY_f2FADD_D	= 666,
    CSKY_f2FADD_S	= 667,
    CSKY_f2FCMPHSZ_D	= 668,
    CSKY_f2FCMPHSZ_S	= 669,
    CSKY_f2FCMPHS_D	= 670,
    CSKY_f2FCMPHS_S	= 671,
    CSKY_f2FCMPHZ_D	= 672,
    CSKY_f2FCMPHZ_S	= 673,
    CSKY_f2FCMPLSZ_D	= 674,
    CSKY_f2FCMPLSZ_S	= 675,
    CSKY_f2FCMPLTZ_D	= 676,
    CSKY_f2FCMPLTZ_S	= 677,
    CSKY_f2FCMPLT_D	= 678,
    CSKY_f2FCMPLT_S	= 679,
    CSKY_f2FCMPNEZ_D	= 680,
    CSKY_f2FCMPNEZ_S	= 681,
    CSKY_f2FCMPNE_D	= 682,
    CSKY_f2FCMPNE_S	= 683,
    CSKY_f2FCMPUOZ_D	= 684,
    CSKY_f2FCMPUOZ_S	= 685,
    CSKY_f2FCMPUO_D	= 686,
    CSKY_f2FCMPUO_S	= 687,
    CSKY_f2FDIV_D	= 688,
    CSKY_f2FDIV_S	= 689,
    CSKY_f2FDTOS	= 690,
    CSKY_f2FF32TOFI32_RN	= 691,
    CSKY_f2FF32TOFI32_RNI	= 692,
    CSKY_f2FF32TOFI32_RPI	= 693,
    CSKY_f2FF32TOFI32_RZ	= 694,
    CSKY_f2FF32TOSI32_RN	= 695,
    CSKY_f2FF32TOSI32_RNI	= 696,
    CSKY_f2FF32TOSI32_RPI	= 697,
    CSKY_f2FF32TOSI32_RZ	= 698,
    CSKY_f2FF32TOUI32_RN	= 699,
    CSKY_f2FF32TOUI32_RNI	= 700,
    CSKY_f2FF32TOUI32_RPI	= 701,
    CSKY_f2FF32TOUI32_RZ	= 702,
    CSKY_f2FF64TOFI32_RN	= 703,
    CSKY_f2FF64TOFI32_RNI	= 704,
    CSKY_f2FF64TOFI32_RPI	= 705,
    CSKY_f2FF64TOFI32_RZ	= 706,
    CSKY_f2FF64TOSI32_RN	= 707,
    CSKY_f2FF64TOSI32_RNI	= 708,
    CSKY_f2FF64TOSI32_RPI	= 709,
    CSKY_f2FF64TOSI32_RZ	= 710,
    CSKY_f2FF64TOUI32_RN	= 711,
    CSKY_f2FF64TOUI32_RNI	= 712,
    CSKY_f2FF64TOUI32_RPI	= 713,
    CSKY_f2FF64TOUI32_RZ	= 714,
    CSKY_f2FFMULA_D	= 715,
    CSKY_f2FFMULA_S	= 716,
    CSKY_f2FFMULS_D	= 717,
    CSKY_f2FFMULS_S	= 718,
    CSKY_f2FFNMULA_D	= 719,
    CSKY_f2FFNMULA_S	= 720,
    CSKY_f2FFNMULS_D	= 721,
    CSKY_f2FFNMULS_S	= 722,
    CSKY_f2FFTOS32_D	= 723,
    CSKY_f2FFTOS32_S	= 724,
    CSKY_f2FFTOU32_D	= 725,
    CSKY_f2FFTOU32_S	= 726,
    CSKY_f2FFTOXS32_D	= 727,
    CSKY_f2FFTOXS32_S	= 728,
    CSKY_f2FFTOXU32_D	= 729,
    CSKY_f2FFTOXU32_S	= 730,
    CSKY_f2FINS	= 731,
    CSKY_f2FLDMU_D	= 732,
    CSKY_f2FLDMU_S	= 733,
    CSKY_f2FLDM_D	= 734,
    CSKY_f2FLDM_S	= 735,
    CSKY_f2FLDR_D	= 736,
    CSKY_f2FLDR_S	= 737,
    CSKY_f2FLD_D	= 738,
    CSKY_f2FLD_S	= 739,
    CSKY_f2FLRW_D	= 740,
    CSKY_f2FLRW_S	= 741,
    CSKY_f2FMAXNM_D	= 742,
    CSKY_f2FMAXNM_S	= 743,
    CSKY_f2FMFVRH_D	= 744,
    CSKY_f2FMFVRL	= 745,
    CSKY_f2FMFVRL_2	= 746,
    CSKY_f2FMFVRL_D	= 747,
    CSKY_f2FMFVR_D	= 748,
    CSKY_f2FMINNM_D	= 749,
    CSKY_f2FMINNM_S	= 750,
    CSKY_f2FMOVX	= 751,
    CSKY_f2FMOV_D	= 752,
    CSKY_f2FMOV_S	= 753,
    CSKY_f2FMTVRH_D	= 754,
    CSKY_f2FMTVRL	= 755,
    CSKY_f2FMTVRL_2	= 756,
    CSKY_f2FMTVRL_D	= 757,
    CSKY_f2FMTVR_D	= 758,
    CSKY_f2FMULA_D	= 759,
    CSKY_f2FMULA_S	= 760,
    CSKY_f2FMULS_D	= 761,
    CSKY_f2FMULS_S	= 762,
    CSKY_f2FMUL_D	= 763,
    CSKY_f2FMUL_S	= 764,
    CSKY_f2FNEG_D	= 765,
    CSKY_f2FNEG_S	= 766,
    CSKY_f2FNMULA_D	= 767,
    CSKY_f2FNMULA_S	= 768,
    CSKY_f2FNMULS_D	= 769,
    CSKY_f2FNMULS_S	= 770,
    CSKY_f2FNMUL_D	= 771,
    CSKY_f2FNMUL_S	= 772,
    CSKY_f2FS32TOF_D	= 773,
    CSKY_f2FS32TOF_S	= 774,
    CSKY_f2FSEL_D	= 775,
    CSKY_f2FSEL_S	= 776,
    CSKY_f2FSQRT_D	= 777,
    CSKY_f2FSQRT_S	= 778,
    CSKY_f2FSTMU_D	= 779,
    CSKY_f2FSTMU_S	= 780,
    CSKY_f2FSTM_D	= 781,
    CSKY_f2FSTM_S	= 782,
    CSKY_f2FSTOD	= 783,
    CSKY_f2FSTR_D	= 784,
    CSKY_f2FSTR_S	= 785,
    CSKY_f2FST_D	= 786,
    CSKY_f2FST_S	= 787,
    CSKY_f2FSUB_D	= 788,
    CSKY_f2FSUB_S	= 789,
    CSKY_f2FU32TOF_D	= 790,
    CSKY_f2FU32TOF_S	= 791,
    CSKY_f2FXTOFS32_D	= 792,
    CSKY_f2FXTOFS32_S	= 793,
    CSKY_f2FXTOFU32_D	= 794,
    CSKY_f2FXTOFU32_S	= 795,
    CSKY_f2RECIP_D	= 796,
    CSKY_f2RECIP_S	= 797,
    CSKY_rnFDTOSI	= 798,
    CSKY_rnFDTOUI	= 799,
    CSKY_rnFSTOSI	= 800,
    CSKY_rnFSTOUI	= 801,
    CSKY_rniFDTOSI	= 802,
    CSKY_rniFDTOUI	= 803,
    CSKY_rniFSTOSI	= 804,
    CSKY_rniFSTOUI	= 805,
    CSKY_rpiFDTOSI	= 806,
    CSKY_rpiFDTOUI	= 807,
    CSKY_rpiFSTOSI	= 808,
    CSKY_rpiFSTOUI	= 809,
    CSKY_rzFDTOSI	= 810,
    CSKY_rzFDTOUI	= 811,
    CSKY_rzFSTOSI	= 812,
    CSKY_rzFSTOUI	= 813,
    INSTRUCTION_LIST_END = 814
  };

#endif // GET_INSTRINFO_ENUM

#if defined(GET_INSTRINFO_MC_DESC) || defined(GET_INSTRINFO_CTOR_DTOR)
typedef struct CSKYInstrTable {
  MCInstrDesc Insts[814];
  MCOperandInfo OperandInfo[462];
  MCPhysReg ImplicitOps[24];
} CSKYInstrTable;

#endif // defined(GET_INSTRINFO_MC_DESC) || defined(GET_INSTRINFO_CTOR_DTOR)

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC

static const unsigned CSKYImpOpBase = sizeof(MCOperandInfo) / (sizeof(MCPhysReg));

static const CSKYInstrTable CSKYDescs = {
  {
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #813 = rzFSTOUI
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #812 = rzFSTOSI
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #811 = rzFDTOUI
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #810 = rzFDTOSI
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #809 = rpiFSTOUI
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #808 = rpiFSTOSI
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #807 = rpiFDTOUI
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #806 = rpiFDTOSI
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #805 = rniFSTOUI
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #804 = rniFSTOSI
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #803 = rniFDTOUI
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #802 = rniFDTOSI
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #801 = rnFSTOUI
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #800 = rnFSTOSI
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #799 = rnFDTOUI
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #798 = rnFDTOSI
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #797 = f2RECIP_S
  { 2, &CSKYDescs.OperandInfo[378] },  // Inst #796 = f2RECIP_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #795 = f2FXTOFU32_S
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #794 = f2FXTOFU32_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #793 = f2FXTOFS32_S
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #792 = f2FXTOFS32_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #791 = f2FU32TOF_S
  { 2, &CSKYDescs.OperandInfo[452] },  // Inst #790 = f2FU32TOF_D
  { 3, &CSKYDescs.OperandInfo[385] },  // Inst #789 = f2FSUB_S
  { 3, &CSKYDescs.OperandInfo[382] },  // Inst #788 = f2FSUB_D
  { 3, &CSKYDescs.OperandInfo[425] },  // Inst #787 = f2FST_S
  { 3, &CSKYDescs.OperandInfo[422] },  // Inst #786 = f2FST_D
  { 4, &CSKYDescs.OperandInfo[418] },  // Inst #785 = f2FSTR_S
  { 4, &CSKYDescs.OperandInfo[414] },  // Inst #784 = f2FSTR_D
  { 2, &CSKYDescs.OperandInfo[452] },  // Inst #783 = f2FSTOD
  { 3, &CSKYDescs.OperandInfo[411] },  // Inst #782 = f2FSTM_S
  { 3, &CSKYDescs.OperandInfo[408] },  // Inst #781 = f2FSTM_D
  { 3, &CSKYDescs.OperandInfo[411] },  // Inst #780 = f2FSTMU_S
  { 3, &CSKYDescs.OperandInfo[408] },  // Inst #779 = f2FSTMU_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #778 = f2FSQRT_S
  { 2, &CSKYDescs.OperandInfo[378] },  // Inst #777 = f2FSQRT_D
  { 4, &CSKYDescs.OperandInfo[458] },  // Inst #776 = f2FSEL_S
  { 4, &CSKYDescs.OperandInfo[454] },  // Inst #775 = f2FSEL_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #774 = f2FS32TOF_S
  { 2, &CSKYDescs.OperandInfo[452] },  // Inst #773 = f2FS32TOF_D
  { 3, &CSKYDescs.OperandInfo[385] },  // Inst #772 = f2FNMUL_S
  { 3, &CSKYDescs.OperandInfo[382] },  // Inst #771 = f2FNMUL_D
  { 4, &CSKYDescs.OperandInfo[404] },  // Inst #770 = f2FNMULS_S
  { 4, &CSKYDescs.OperandInfo[400] },  // Inst #769 = f2FNMULS_D
  { 4, &CSKYDescs.OperandInfo[404] },  // Inst #768 = f2FNMULA_S
  { 4, &CSKYDescs.OperandInfo[400] },  // Inst #767 = f2FNMULA_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #766 = f2FNEG_S
  { 2, &CSKYDescs.OperandInfo[378] },  // Inst #765 = f2FNEG_D
  { 3, &CSKYDescs.OperandInfo[385] },  // Inst #764 = f2FMUL_S
  { 3, &CSKYDescs.OperandInfo[382] },  // Inst #763 = f2FMUL_D
  { 4, &CSKYDescs.OperandInfo[404] },  // Inst #762 = f2FMULS_S
  { 4, &CSKYDescs.OperandInfo[400] },  // Inst #761 = f2FMULS_D
  { 4, &CSKYDescs.OperandInfo[404] },  // Inst #760 = f2FMULA_S
  { 4, &CSKYDescs.OperandInfo[400] },  // Inst #759 = f2FMULA_D
  { 3, &CSKYDescs.OperandInfo[449] },  // Inst #758 = f2FMTVR_D
  { 2, &CSKYDescs.OperandInfo[447] },  // Inst #757 = f2FMTVRL_D
  { 3, &CSKYDescs.OperandInfo[444] },  // Inst #756 = f2FMTVRL_2
  { 2, &CSKYDescs.OperandInfo[442] },  // Inst #755 = f2FMTVRL
  { 3, &CSKYDescs.OperandInfo[439] },  // Inst #754 = f2FMTVRH_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #753 = f2FMOV_S
  { 2, &CSKYDescs.OperandInfo[378] },  // Inst #752 = f2FMOV_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #751 = f2FMOVX
  { 3, &CSKYDescs.OperandInfo[385] },  // Inst #750 = f2FMINNM_S
  { 3, &CSKYDescs.OperandInfo[382] },  // Inst #749 = f2FMINNM_D
  { 3, &CSKYDescs.OperandInfo[436] },  // Inst #748 = f2FMFVR_D
  { 2, &CSKYDescs.OperandInfo[432] },  // Inst #747 = f2FMFVRL_D
  { 3, &CSKYDescs.OperandInfo[436] },  // Inst #746 = f2FMFVRL_2
  { 2, &CSKYDescs.OperandInfo[434] },  // Inst #745 = f2FMFVRL
  { 2, &CSKYDescs.OperandInfo[432] },  // Inst #744 = f2FMFVRH_D
  { 3, &CSKYDescs.OperandInfo[385] },  // Inst #743 = f2FMAXNM_S
  { 3, &CSKYDescs.OperandInfo[382] },  // Inst #742 = f2FMAXNM_D
  { 2, &CSKYDescs.OperandInfo[430] },  // Inst #741 = f2FLRW_S
  { 2, &CSKYDescs.OperandInfo[428] },  // Inst #740 = f2FLRW_D
  { 3, &CSKYDescs.OperandInfo[425] },  // Inst #739 = f2FLD_S
  { 3, &CSKYDescs.OperandInfo[422] },  // Inst #738 = f2FLD_D
  { 4, &CSKYDescs.OperandInfo[418] },  // Inst #737 = f2FLDR_S
  { 4, &CSKYDescs.OperandInfo[414] },  // Inst #736 = f2FLDR_D
  { 3, &CSKYDescs.OperandInfo[411] },  // Inst #735 = f2FLDM_S
  { 3, &CSKYDescs.OperandInfo[408] },  // Inst #734 = f2FLDM_D
  { 3, &CSKYDescs.OperandInfo[411] },  // Inst #733 = f2FLDMU_S
  { 3, &CSKYDescs.OperandInfo[408] },  // Inst #732 = f2FLDMU_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #731 = f2FINS
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #730 = f2FFTOXU32_S
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #729 = f2FFTOXU32_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #728 = f2FFTOXS32_S
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #727 = f2FFTOXS32_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #726 = f2FFTOU32_S
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #725 = f2FFTOU32_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #724 = f2FFTOS32_S
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #723 = f2FFTOS32_D
  { 4, &CSKYDescs.OperandInfo[404] },  // Inst #722 = f2FFNMULS_S
  { 4, &CSKYDescs.OperandInfo[400] },  // Inst #721 = f2FFNMULS_D
  { 4, &CSKYDescs.OperandInfo[404] },  // Inst #720 = f2FFNMULA_S
  { 4, &CSKYDescs.OperandInfo[400] },  // Inst #719 = f2FFNMULA_D
  { 4, &CSKYDescs.OperandInfo[404] },  // Inst #718 = f2FFMULS_S
  { 4, &CSKYDescs.OperandInfo[400] },  // Inst #717 = f2FFMULS_D
  { 4, &CSKYDescs.OperandInfo[404] },  // Inst #716 = f2FFMULA_S
  { 4, &CSKYDescs.OperandInfo[400] },  // Inst #715 = f2FFMULA_D
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #714 = f2FF64TOUI32_RZ
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #713 = f2FF64TOUI32_RPI
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #712 = f2FF64TOUI32_RNI
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #711 = f2FF64TOUI32_RN
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #710 = f2FF64TOSI32_RZ
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #709 = f2FF64TOSI32_RPI
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #708 = f2FF64TOSI32_RNI
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #707 = f2FF64TOSI32_RN
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #706 = f2FF64TOFI32_RZ
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #705 = f2FF64TOFI32_RPI
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #704 = f2FF64TOFI32_RNI
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #703 = f2FF64TOFI32_RN
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #702 = f2FF32TOUI32_RZ
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #701 = f2FF32TOUI32_RPI
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #700 = f2FF32TOUI32_RNI
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #699 = f2FF32TOUI32_RN
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #698 = f2FF32TOSI32_RZ
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #697 = f2FF32TOSI32_RPI
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #696 = f2FF32TOSI32_RNI
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #695 = f2FF32TOSI32_RN
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #694 = f2FF32TOFI32_RZ
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #693 = f2FF32TOFI32_RPI
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #692 = f2FF32TOFI32_RNI
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #691 = f2FF32TOFI32_RN
  { 2, &CSKYDescs.OperandInfo[398] },  // Inst #690 = f2FDTOS
  { 3, &CSKYDescs.OperandInfo[385] },  // Inst #689 = f2FDIV_S
  { 3, &CSKYDescs.OperandInfo[382] },  // Inst #688 = f2FDIV_D
  { 3, &CSKYDescs.OperandInfo[395] },  // Inst #687 = f2FCMPUO_S
  { 3, &CSKYDescs.OperandInfo[392] },  // Inst #686 = f2FCMPUO_D
  { 2, &CSKYDescs.OperandInfo[390] },  // Inst #685 = f2FCMPUOZ_S
  { 2, &CSKYDescs.OperandInfo[388] },  // Inst #684 = f2FCMPUOZ_D
  { 3, &CSKYDescs.OperandInfo[395] },  // Inst #683 = f2FCMPNE_S
  { 3, &CSKYDescs.OperandInfo[392] },  // Inst #682 = f2FCMPNE_D
  { 2, &CSKYDescs.OperandInfo[390] },  // Inst #681 = f2FCMPNEZ_S
  { 2, &CSKYDescs.OperandInfo[388] },  // Inst #680 = f2FCMPNEZ_D
  { 3, &CSKYDescs.OperandInfo[395] },  // Inst #679 = f2FCMPLT_S
  { 3, &CSKYDescs.OperandInfo[392] },  // Inst #678 = f2FCMPLT_D
  { 2, &CSKYDescs.OperandInfo[390] },  // Inst #677 = f2FCMPLTZ_S
  { 2, &CSKYDescs.OperandInfo[388] },  // Inst #676 = f2FCMPLTZ_D
  { 2, &CSKYDescs.OperandInfo[390] },  // Inst #675 = f2FCMPLSZ_S
  { 2, &CSKYDescs.OperandInfo[388] },  // Inst #674 = f2FCMPLSZ_D
  { 2, &CSKYDescs.OperandInfo[390] },  // Inst #673 = f2FCMPHZ_S
  { 2, &CSKYDescs.OperandInfo[388] },  // Inst #672 = f2FCMPHZ_D
  { 3, &CSKYDescs.OperandInfo[395] },  // Inst #671 = f2FCMPHS_S
  { 3, &CSKYDescs.OperandInfo[392] },  // Inst #670 = f2FCMPHS_D
  { 2, &CSKYDescs.OperandInfo[390] },  // Inst #669 = f2FCMPHSZ_S
  { 2, &CSKYDescs.OperandInfo[388] },  // Inst #668 = f2FCMPHSZ_D
  { 3, &CSKYDescs.OperandInfo[385] },  // Inst #667 = f2FADD_S
  { 3, &CSKYDescs.OperandInfo[382] },  // Inst #666 = f2FADD_D
  { 2, &CSKYDescs.OperandInfo[380] },  // Inst #665 = f2FABS_S
  { 2, &CSKYDescs.OperandInfo[378] },  // Inst #664 = f2FABS_D
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #663 = ZEXTH32
  { 2, &CSKYDescs.OperandInfo[342] },  // Inst #662 = ZEXTH16
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #661 = ZEXTB32
  { 2, &CSKYDescs.OperandInfo[342] },  // Inst #660 = ZEXTB16
  { 4, &CSKYDescs.OperandInfo[361] },  // Inst #659 = ZEXT32
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #658 = XTRB3
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #657 = XTRB2
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #656 = XTRB1
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #655 = XTRB0
  { 5, &CSKYDescs.OperandInfo[373] },  // Inst #654 = XSR32
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #653 = XORI32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #652 = XOR32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #651 = XOR16
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #650 = WSC32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #649 = WE32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #648 = WAIT32
  { 2, &CSKYDescs.OperandInfo[371] },  // Inst #647 = TSTNBZ32
  { 2, &CSKYDescs.OperandInfo[369] },  // Inst #646 = TSTNBZ16
  { 3, &CSKYDescs.OperandInfo[237] },  // Inst #645 = TST32
  { 3, &CSKYDescs.OperandInfo[234] },  // Inst #644 = TST16
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #643 = TRAP32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #642 = TLBI_VAS32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #641 = TLBI_VAAS32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #640 = TLBI_VAA32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #639 = TLBI_VA32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #638 = TLBI_ASIDS32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #637 = TLBI_ASID32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #636 = TLBI_ALLS32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #635 = TLBI_ALL32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #634 = SYNC_32_S
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #633 = SYNC_32_IS
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #632 = SYNC_32_I
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #631 = SYNC32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #630 = SYNC0_32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #629 = SUBU32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #628 = SUBU16XZ
  { 3, &CSKYDescs.OperandInfo[213] },  // Inst #627 = SUBU16
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #626 = SUBI32
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #625 = SUBI16XZ
  { 3, &CSKYDescs.OperandInfo[207] },  // Inst #624 = SUBI16SPSP
  { 3, &CSKYDescs.OperandInfo[204] },  // Inst #623 = SUBI16
  { 5, &CSKYDescs.OperandInfo[199] },  // Inst #622 = SUBC32
  { 5, &CSKYDescs.OperandInfo[194] },  // Inst #621 = SUBC16
  { 4, &CSKYDescs.OperandInfo[332] },  // Inst #620 = STR32W
  { 4, &CSKYDescs.OperandInfo[332] },  // Inst #619 = STR32H
  { 4, &CSKYDescs.OperandInfo[332] },  // Inst #618 = STR32B
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #617 = STOP32
  { 3, &CSKYDescs.OperandInfo[170] },  // Inst #616 = STM32
  { 4, &CSKYDescs.OperandInfo[365] },  // Inst #615 = STEX32W
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #614 = ST32W
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #613 = ST32H
  { 3, &CSKYDescs.OperandInfo[173] },  // Inst #612 = ST32D
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #611 = ST32B
  { 3, &CSKYDescs.OperandInfo[210] },  // Inst #610 = ST16WSP
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #609 = ST16W
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #608 = ST16H
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #607 = ST16B
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #606 = SRS32W
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #605 = SRS32H
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #604 = SRS32B
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #603 = SEXTH32
  { 2, &CSKYDescs.OperandInfo[342] },  // Inst #602 = SEXTH16
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #601 = SEXTB32
  { 2, &CSKYDescs.OperandInfo[342] },  // Inst #600 = SEXTB16
  { 4, &CSKYDescs.OperandInfo[361] },  // Inst #599 = SEXT32
  { 1, &CSKYDescs.OperandInfo[230] },  // Inst #598 = SETC32
  { 1, &CSKYDescs.OperandInfo[230] },  // Inst #597 = SETC16
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #596 = SE32
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #595 = SCE32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #594 = RTS16
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #593 = ROTLI32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #592 = ROTL32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #591 = ROTL16
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #590 = RFI32
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #589 = REVH32
  { 2, &CSKYDescs.OperandInfo[342] },  // Inst #588 = REVH16
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #587 = REVB32
  { 2, &CSKYDescs.OperandInfo[342] },  // Inst #586 = REVB16
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #585 = PUSH32
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #584 = PUSH16
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #583 = POP32
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #582 = POP16
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #581 = PLDW32
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #580 = PLDR32
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #579 = ORI32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #578 = OR32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #577 = OR16
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #576 = NOT32
  { 2, &CSKYDescs.OperandInfo[359] },  // Inst #575 = NOT16
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #574 = NOR32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #573 = NOR16
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #572 = NIR
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #571 = NIE
  { 2, &CSKYDescs.OperandInfo[355] },  // Inst #570 = MVCV32
  { 2, &CSKYDescs.OperandInfo[357] },  // Inst #569 = MVCV16
  { 2, &CSKYDescs.OperandInfo[355] },  // Inst #568 = MVC32
  { 3, &CSKYDescs.OperandInfo[352] },  // Inst #567 = MULTU32
  { 3, &CSKYDescs.OperandInfo[352] },  // Inst #566 = MULTS32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #565 = MULT32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #564 = MULT16
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #563 = MULSH32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #562 = MULSH16
  { 4, &CSKYDescs.OperandInfo[348] },  // Inst #561 = MULATU32
  { 4, &CSKYDescs.OperandInfo[348] },  // Inst #560 = MULATS32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #559 = MTFCR
  { 4, &CSKYDescs.OperandInfo[344] },  // Inst #558 = MOVT32
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #557 = MOVIH32
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #556 = MOVI32
  { 2, &CSKYDescs.OperandInfo[330] },  // Inst #555 = MOVI16
  { 4, &CSKYDescs.OperandInfo[344] },  // Inst #554 = MOVF32
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #553 = MOV32
  { 2, &CSKYDescs.OperandInfo[342] },  // Inst #552 = MOV16
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #551 = MFFCR
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #550 = LSRI32
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #549 = LSRI16
  { 4, &CSKYDescs.OperandInfo[222] },  // Inst #548 = LSRC32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #547 = LSR32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #546 = LSR16
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #545 = LSLI32
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #544 = LSLI16
  { 4, &CSKYDescs.OperandInfo[222] },  // Inst #543 = LSLC32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #542 = LSL32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #541 = LSL16
  { 3, &CSKYDescs.OperandInfo[339] },  // Inst #540 = LRW32_Gen
  { 2, &CSKYDescs.OperandInfo[182] },  // Inst #539 = LRW32
  { 3, &CSKYDescs.OperandInfo[336] },  // Inst #538 = LRW16_Gen
  { 2, &CSKYDescs.OperandInfo[180] },  // Inst #537 = LRW16
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #536 = LRS32W
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #535 = LRS32H
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #534 = LRS32B
  { 4, &CSKYDescs.OperandInfo[332] },  // Inst #533 = LDR32W
  { 4, &CSKYDescs.OperandInfo[332] },  // Inst #532 = LDR32HS
  { 4, &CSKYDescs.OperandInfo[332] },  // Inst #531 = LDR32H
  { 4, &CSKYDescs.OperandInfo[332] },  // Inst #530 = LDR32BS
  { 4, &CSKYDescs.OperandInfo[332] },  // Inst #529 = LDR32B
  { 3, &CSKYDescs.OperandInfo[170] },  // Inst #528 = LDM32
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #527 = LDEX32W
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #526 = LD32W
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #525 = LD32HS
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #524 = LD32H
  { 3, &CSKYDescs.OperandInfo[173] },  // Inst #523 = LD32D
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #522 = LD32BS
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #521 = LD32B
  { 3, &CSKYDescs.OperandInfo[210] },  // Inst #520 = LD16WSP
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #519 = LD16W
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #518 = LD16H
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #517 = LD16B
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #516 = L2CACHE_IALL
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #515 = L2CACHE_CIALL
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #514 = L2CACHE_CALL
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #513 = JSRI32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #512 = JSR32
  { 1, &CSKYDescs.OperandInfo[329] },  // Inst #511 = JSR16
  { 2, &CSKYDescs.OperandInfo[330] },  // Inst #510 = JMPIX16
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #509 = JMPI32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #508 = JMP32
  { 1, &CSKYDescs.OperandInfo[329] },  // Inst #507 = JMP16
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #506 = IXW32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #505 = IXH32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #504 = IXD32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #503 = IPUSH16
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #502 = IPOP16
  { 5, &CSKYDescs.OperandInfo[324] },  // Inst #501 = INS32
  { 5, &CSKYDescs.OperandInfo[247] },  // Inst #500 = INCT32
  { 5, &CSKYDescs.OperandInfo[247] },  // Inst #499 = INCF32
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #498 = IDLY32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #497 = ICACHE_IVA32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #496 = ICACHE_IALLS32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #495 = ICACHE_IALL32
  { 2, &CSKYDescs.OperandInfo[182] },  // Inst #494 = GRS32
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #493 = FUITOS
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #492 = FUITOD
  { 3, &CSKYDescs.OperandInfo[264] },  // Inst #491 = FSUB_S
  { 3, &CSKYDescs.OperandInfo[261] },  // Inst #490 = FSUB_D
  { 3, &CSKYDescs.OperandInfo[258] },  // Inst #489 = FSUBM
  { 3, &CSKYDescs.OperandInfo[296] },  // Inst #488 = FST_S
  { 3, &CSKYDescs.OperandInfo[279] },  // Inst #487 = FST_D
  { 4, &CSKYDescs.OperandInfo[292] },  // Inst #486 = FSTR_S
  { 4, &CSKYDescs.OperandInfo[288] },  // Inst #485 = FSTR_D
  { 4, &CSKYDescs.OperandInfo[288] },  // Inst #484 = FSTRM
  { 2, &CSKYDescs.OperandInfo[322] },  // Inst #483 = FSTOD
  { 3, &CSKYDescs.OperandInfo[285] },  // Inst #482 = FSTM_S
  { 3, &CSKYDescs.OperandInfo[282] },  // Inst #481 = FSTM_D
  { 3, &CSKYDescs.OperandInfo[282] },  // Inst #480 = FSTMM
  { 3, &CSKYDescs.OperandInfo[279] },  // Inst #479 = FSTM
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #478 = FSQRT_S
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #477 = FSQRT_D
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #476 = FSITOS
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #475 = FSITOD
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #474 = FRECIP_S
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #473 = FRECIP_D
  { 3, &CSKYDescs.OperandInfo[264] },  // Inst #472 = FNMUL_S
  { 3, &CSKYDescs.OperandInfo[261] },  // Inst #471 = FNMUL_D
  { 3, &CSKYDescs.OperandInfo[258] },  // Inst #470 = FNMULM
  { 4, &CSKYDescs.OperandInfo[307] },  // Inst #469 = FNMSC_S
  { 4, &CSKYDescs.OperandInfo[303] },  // Inst #468 = FNMSC_D
  { 4, &CSKYDescs.OperandInfo[299] },  // Inst #467 = FNMSCM
  { 4, &CSKYDescs.OperandInfo[307] },  // Inst #466 = FNMAC_S
  { 4, &CSKYDescs.OperandInfo[303] },  // Inst #465 = FNMAC_D
  { 4, &CSKYDescs.OperandInfo[299] },  // Inst #464 = FNMACM
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #463 = FNEG_S
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #462 = FNEG_D
  { 2, &CSKYDescs.OperandInfo[252] },  // Inst #461 = FNEGM
  { 3, &CSKYDescs.OperandInfo[264] },  // Inst #460 = FMUL_S
  { 3, &CSKYDescs.OperandInfo[261] },  // Inst #459 = FMUL_D
  { 3, &CSKYDescs.OperandInfo[258] },  // Inst #458 = FMULM
  { 2, &CSKYDescs.OperandInfo[320] },  // Inst #457 = FMTVRL_D
  { 2, &CSKYDescs.OperandInfo[318] },  // Inst #456 = FMTVRL
  { 3, &CSKYDescs.OperandInfo[315] },  // Inst #455 = FMTVRH_D
  { 4, &CSKYDescs.OperandInfo[307] },  // Inst #454 = FMSC_S
  { 4, &CSKYDescs.OperandInfo[303] },  // Inst #453 = FMSC_D
  { 4, &CSKYDescs.OperandInfo[299] },  // Inst #452 = FMSCM
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #451 = FMOV_S
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #450 = FMOV_D
  { 2, &CSKYDescs.OperandInfo[252] },  // Inst #449 = FMOVM
  { 2, &CSKYDescs.OperandInfo[311] },  // Inst #448 = FMFVRL_D
  { 2, &CSKYDescs.OperandInfo[313] },  // Inst #447 = FMFVRL
  { 2, &CSKYDescs.OperandInfo[311] },  // Inst #446 = FMFVRH_D
  { 4, &CSKYDescs.OperandInfo[307] },  // Inst #445 = FMAC_S
  { 4, &CSKYDescs.OperandInfo[303] },  // Inst #444 = FMAC_D
  { 4, &CSKYDescs.OperandInfo[299] },  // Inst #443 = FMACM
  { 3, &CSKYDescs.OperandInfo[296] },  // Inst #442 = FLD_S
  { 3, &CSKYDescs.OperandInfo[279] },  // Inst #441 = FLD_D
  { 4, &CSKYDescs.OperandInfo[292] },  // Inst #440 = FLDR_S
  { 4, &CSKYDescs.OperandInfo[288] },  // Inst #439 = FLDR_D
  { 4, &CSKYDescs.OperandInfo[288] },  // Inst #438 = FLDRM
  { 3, &CSKYDescs.OperandInfo[285] },  // Inst #437 = FLDM_S
  { 3, &CSKYDescs.OperandInfo[282] },  // Inst #436 = FLDM_D
  { 3, &CSKYDescs.OperandInfo[282] },  // Inst #435 = FLDMM
  { 3, &CSKYDescs.OperandInfo[279] },  // Inst #434 = FLDM
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #433 = FF1
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #432 = FF0
  { 2, &CSKYDescs.OperandInfo[277] },  // Inst #431 = FDTOS
  { 3, &CSKYDescs.OperandInfo[264] },  // Inst #430 = FDIV_S
  { 3, &CSKYDescs.OperandInfo[261] },  // Inst #429 = FDIV_D
  { 2, &CSKYDescs.OperandInfo[275] },  // Inst #428 = FCMPZUO_S
  { 2, &CSKYDescs.OperandInfo[273] },  // Inst #427 = FCMPZUO_D
  { 2, &CSKYDescs.OperandInfo[275] },  // Inst #426 = FCMPZNE_S
  { 2, &CSKYDescs.OperandInfo[273] },  // Inst #425 = FCMPZNE_D
  { 2, &CSKYDescs.OperandInfo[275] },  // Inst #424 = FCMPZLS_S
  { 2, &CSKYDescs.OperandInfo[273] },  // Inst #423 = FCMPZLS_D
  { 2, &CSKYDescs.OperandInfo[275] },  // Inst #422 = FCMPZHS_S
  { 2, &CSKYDescs.OperandInfo[273] },  // Inst #421 = FCMPZHS_D
  { 3, &CSKYDescs.OperandInfo[270] },  // Inst #420 = FCMPUO_S
  { 3, &CSKYDescs.OperandInfo[267] },  // Inst #419 = FCMPUO_D
  { 3, &CSKYDescs.OperandInfo[270] },  // Inst #418 = FCMPNE_S
  { 3, &CSKYDescs.OperandInfo[267] },  // Inst #417 = FCMPNE_D
  { 3, &CSKYDescs.OperandInfo[270] },  // Inst #416 = FCMPLT_S
  { 3, &CSKYDescs.OperandInfo[267] },  // Inst #415 = FCMPLT_D
  { 3, &CSKYDescs.OperandInfo[270] },  // Inst #414 = FCMPHS_S
  { 3, &CSKYDescs.OperandInfo[267] },  // Inst #413 = FCMPHS_D
  { 3, &CSKYDescs.OperandInfo[264] },  // Inst #412 = FADD_S
  { 3, &CSKYDescs.OperandInfo[261] },  // Inst #411 = FADD_D
  { 3, &CSKYDescs.OperandInfo[258] },  // Inst #410 = FADDM
  { 2, &CSKYDescs.OperandInfo[256] },  // Inst #409 = FABS_S
  { 2, &CSKYDescs.OperandInfo[254] },  // Inst #408 = FABS_D
  { 2, &CSKYDescs.OperandInfo[252] },  // Inst #407 = FABSM
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #406 = DOZE32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #405 = DIVU32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #404 = DIVS32
  { 5, &CSKYDescs.OperandInfo[247] },  // Inst #403 = DECT32
  { 4, &CSKYDescs.OperandInfo[222] },  // Inst #402 = DECNE32
  { 4, &CSKYDescs.OperandInfo[222] },  // Inst #401 = DECLT32
  { 4, &CSKYDescs.OperandInfo[222] },  // Inst #400 = DECGT32
  { 5, &CSKYDescs.OperandInfo[247] },  // Inst #399 = DECF32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #398 = DCACHE_IVA32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #397 = DCACHE_ISW32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #396 = DCACHE_IALL32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #395 = DCACHE_CVAL32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #394 = DCACHE_CVA32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #393 = DCACHE_CSW32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #392 = DCACHE_CIVA32
  { 1, &CSKYDescs.OperandInfo[246] },  // Inst #391 = DCACHE_CISW32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #390 = DCACHE_CIALL32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #389 = DCACHE_CALL32
  { 3, &CSKYDescs.OperandInfo[243] },  // Inst #388 = CPWGR32
  { 3, &CSKYDescs.OperandInfo[243] },  // Inst #387 = CPWCR32
  { 3, &CSKYDescs.OperandInfo[243] },  // Inst #386 = CPRGR32
  { 3, &CSKYDescs.OperandInfo[243] },  // Inst #385 = CPRCR32
  { 3, &CSKYDescs.OperandInfo[240] },  // Inst #384 = CPRC32
  { 2, &CSKYDescs.OperandInfo[13] },  // Inst #383 = CPOP32
  { 3, &CSKYDescs.OperandInfo[145] },  // Inst #382 = CMPNEI32
  { 3, &CSKYDescs.OperandInfo[142] },  // Inst #381 = CMPNEI16
  { 3, &CSKYDescs.OperandInfo[237] },  // Inst #380 = CMPNE32
  { 3, &CSKYDescs.OperandInfo[234] },  // Inst #379 = CMPNE16
  { 3, &CSKYDescs.OperandInfo[145] },  // Inst #378 = CMPLTI32
  { 3, &CSKYDescs.OperandInfo[142] },  // Inst #377 = CMPLTI16
  { 3, &CSKYDescs.OperandInfo[237] },  // Inst #376 = CMPLT32
  { 3, &CSKYDescs.OperandInfo[234] },  // Inst #375 = CMPLT16
  { 3, &CSKYDescs.OperandInfo[145] },  // Inst #374 = CMPHSI32
  { 3, &CSKYDescs.OperandInfo[142] },  // Inst #373 = CMPHSI16
  { 3, &CSKYDescs.OperandInfo[237] },  // Inst #372 = CMPHS32
  { 3, &CSKYDescs.OperandInfo[234] },  // Inst #371 = CMPHS16
  { 3, &CSKYDescs.OperandInfo[231] },  // Inst #370 = CLRT32
  { 3, &CSKYDescs.OperandInfo[231] },  // Inst #369 = CLRF32
  { 1, &CSKYDescs.OperandInfo[230] },  // Inst #368 = CLRC32
  { 1, &CSKYDescs.OperandInfo[230] },  // Inst #367 = CLRC16
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #366 = BWAWS
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #365 = BWAW
  { 3, &CSKYDescs.OperandInfo[145] },  // Inst #364 = BTSTI32
  { 3, &CSKYDescs.OperandInfo[142] },  // Inst #363 = BTSTI16
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #362 = BT32
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #361 = BT16
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #360 = BSR32_BR
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #359 = BSR32
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #358 = BSETI32
  { 3, &CSKYDescs.OperandInfo[204] },  // Inst #357 = BSETI16
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #356 = BRWAWS
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #355 = BRWAW
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #354 = BRWARWS
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #353 = BRWARW
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #352 = BREV32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #351 = BRARWS
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #350 = BRARW
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #349 = BRARS
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #348 = BRAR
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #347 = BR32
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #346 = BR16
  { 1, &CSKYDescs.OperandInfo[229] },  // Inst #345 = BPUSHW
  { 1, &CSKYDescs.OperandInfo[229] },  // Inst #344 = BPUSHH
  { 1, &CSKYDescs.OperandInfo[229] },  // Inst #343 = BPOPW
  { 1, &CSKYDescs.OperandInfo[229] },  // Inst #342 = BPOPH
  { 3, &CSKYDescs.OperandInfo[226] },  // Inst #341 = BNEZAD32
  { 2, &CSKYDescs.OperandInfo[182] },  // Inst #340 = BNEZ32
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #339 = BMASKI32
  { 2, &CSKYDescs.OperandInfo[182] },  // Inst #338 = BLZ32
  { 2, &CSKYDescs.OperandInfo[182] },  // Inst #337 = BLSZ32
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #336 = BKPT
  { 2, &CSKYDescs.OperandInfo[182] },  // Inst #335 = BHZ32
  { 2, &CSKYDescs.OperandInfo[182] },  // Inst #334 = BHSZ32
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #333 = BGENR32
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #332 = BF32
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #331 = BF16
  { 2, &CSKYDescs.OperandInfo[182] },  // Inst #330 = BEZ32
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #329 = BCLRI32
  { 3, &CSKYDescs.OperandInfo[204] },  // Inst #328 = BCLRI16
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #327 = ASRI32
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #326 = ASRI16
  { 4, &CSKYDescs.OperandInfo[222] },  // Inst #325 = ASRC32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #324 = ASR32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #323 = ASR16
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #322 = ANDNI32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #321 = ANDN32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #320 = ANDN16
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #319 = ANDI32
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #318 = AND32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #317 = AND16
  { 3, &CSKYDescs.OperandInfo[219] },  // Inst #316 = ADDU32
  { 3, &CSKYDescs.OperandInfo[216] },  // Inst #315 = ADDU16XZ
  { 3, &CSKYDescs.OperandInfo[213] },  // Inst #314 = ADDU16
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #313 = ADDI32
  { 3, &CSKYDescs.OperandInfo[210] },  // Inst #312 = ADDI16ZSP
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #311 = ADDI16XZ
  { 3, &CSKYDescs.OperandInfo[207] },  // Inst #310 = ADDI16SPSP
  { 3, &CSKYDescs.OperandInfo[204] },  // Inst #309 = ADDI16
  { 5, &CSKYDescs.OperandInfo[199] },  // Inst #308 = ADDC32
  { 5, &CSKYDescs.OperandInfo[194] },  // Inst #307 = ADDC16
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #306 = ABS32
  { 3, &CSKYDescs.OperandInfo[170] },  // Inst #305 = STQ32
  { 3, &CSKYDescs.OperandInfo[173] },  // Inst #304 = STORE_PAIR
  { 3, &CSKYDescs.OperandInfo[145] },  // Inst #303 = SPILL_CARRY
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #302 = RSUBI32
  { 3, &CSKYDescs.OperandInfo[191] },  // Inst #301 = RSUBI16
  { 3, &CSKYDescs.OperandInfo[188] },  // Inst #300 = ROTRI32
  { 3, &CSKYDescs.OperandInfo[145] },  // Inst #299 = RESTORE_CARRY
  { 4, &CSKYDescs.OperandInfo[184] },  // Inst #298 = PseudoTLSLA32
  { 2, &CSKYDescs.OperandInfo[182] },  // Inst #297 = PseudoLRW32
  { 2, &CSKYDescs.OperandInfo[180] },  // Inst #296 = PseudoLRW16
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #295 = PseudoJSRI32
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #294 = PseudoJMPI32
  { 2, &CSKYDescs.OperandInfo[178] },  // Inst #293 = NEG32
  { 2, &CSKYDescs.OperandInfo[176] },  // Inst #292 = NEG16
  { 3, &CSKYDescs.OperandInfo[173] },  // Inst #291 = LOAD_PAIR
  { 3, &CSKYDescs.OperandInfo[170] },  // Inst #290 = LDQ32
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #289 = JBT_E
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #288 = JBT32
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #287 = JBT16
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #286 = JBSR32
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #285 = JBR32
  { 1, &CSKYDescs.OperandInfo[169] },  // Inst #284 = JBR16
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #283 = JBF_E
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #282 = JBF32
  { 2, &CSKYDescs.OperandInfo[167] },  // Inst #281 = JBF16
  { 4, &CSKYDescs.OperandInfo[163] },  // Inst #280 = ISEL32
  { 4, &CSKYDescs.OperandInfo[159] },  // Inst #279 = ISEL16
  { 4, &CSKYDescs.OperandInfo[155] },  // Inst #278 = FSELS
  { 4, &CSKYDescs.OperandInfo[151] },  // Inst #277 = FSELD
  { 3, &CSKYDescs.OperandInfo[148] },  // Inst #276 = CONSTPOOL_ENTRY
  { 3, &CSKYDescs.OperandInfo[145] },  // Inst #275 = CMPLEI32
  { 3, &CSKYDescs.OperandInfo[142] },  // Inst #274 = CMPLEI16
  { 2, &CSKYDescs.OperandInfo[140] },  // Inst #273 = BGENI
  { 2, &CSKYDescs.OperandInfo[21] },  // Inst #272 = ADJCALLSTACKUP
  { 2, &CSKYDescs.OperandInfo[21] },  // Inst #271 = ADJCALLSTACKDOWN
  { 4, &CSKYDescs.OperandInfo[136] },  // Inst #270 = G_UBFX
  { 4, &CSKYDescs.OperandInfo[136] },  // Inst #269 = G_SBFX
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #268 = G_VECREDUCE_UMIN
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #267 = G_VECREDUCE_UMAX
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #266 = G_VECREDUCE_SMIN
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #265 = G_VECREDUCE_SMAX
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #264 = G_VECREDUCE_XOR
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #263 = G_VECREDUCE_OR
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #262 = G_VECREDUCE_AND
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #261 = G_VECREDUCE_MUL
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #260 = G_VECREDUCE_ADD
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #259 = G_VECREDUCE_FMINIMUM
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #258 = G_VECREDUCE_FMAXIMUM
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #257 = G_VECREDUCE_FMIN
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #256 = G_VECREDUCE_FMAX
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #255 = G_VECREDUCE_FMUL
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #254 = G_VECREDUCE_FADD
  { 3, &CSKYDescs.OperandInfo[123] },  // Inst #253 = G_VECREDUCE_SEQ_FMUL
  { 3, &CSKYDescs.OperandInfo[123] },  // Inst #252 = G_VECREDUCE_SEQ_FADD
  { 3, &CSKYDescs.OperandInfo[53] },  // Inst #251 = G_BZERO
  { 4, &CSKYDescs.OperandInfo[132] },  // Inst #250 = G_MEMSET
  { 4, &CSKYDescs.OperandInfo[132] },  // Inst #249 = G_MEMMOVE
  { 3, &CSKYDescs.OperandInfo[123] },  // Inst #248 = G_MEMCPY_INLINE
  { 4, &CSKYDescs.OperandInfo[132] },  // Inst #247 = G_MEMCPY
  { 2, &CSKYDescs.OperandInfo[130] },  // Inst #246 = G_WRITE_REGISTER
  { 2, &CSKYDescs.OperandInfo[51] },  // Inst #245 = G_READ_REGISTER
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #244 = G_STRICT_FLDEXP
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #243 = G_STRICT_FSQRT
  { 4, &CSKYDescs.OperandInfo[46] },  // Inst #242 = G_STRICT_FMA
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #241 = G_STRICT_FREM
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #240 = G_STRICT_FDIV
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #239 = G_STRICT_FMUL
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #238 = G_STRICT_FSUB
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #237 = G_STRICT_FADD
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #236 = G_STACKRESTORE
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #235 = G_STACKSAVE
  { 3, &CSKYDescs.OperandInfo[64] },  // Inst #234 = G_DYN_STACKALLOC
  { 2, &CSKYDescs.OperandInfo[51] },  // Inst #233 = G_JUMP_TABLE
  { 2, &CSKYDescs.OperandInfo[51] },  // Inst #232 = G_BLOCK_ADDR
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #231 = G_ADDRSPACE_CAST
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #230 = G_FNEARBYINT
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #229 = G_FRINT
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #228 = G_FFLOOR
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #227 = G_FSQRT
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #226 = G_FSIN
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #225 = G_FCOS
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #224 = G_FCEIL
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #223 = G_BITREVERSE
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #222 = G_BSWAP
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #221 = G_CTPOP
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #220 = G_CTLZ_ZERO_UNDEF
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #219 = G_CTLZ
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #218 = G_CTTZ_ZERO_UNDEF
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #217 = G_CTTZ
  { 4, &CSKYDescs.OperandInfo[126] },  // Inst #216 = G_SHUFFLE_VECTOR
  { 3, &CSKYDescs.OperandInfo[123] },  // Inst #215 = G_EXTRACT_VECTOR_ELT
  { 4, &CSKYDescs.OperandInfo[119] },  // Inst #214 = G_INSERT_VECTOR_ELT
  { 3, &CSKYDescs.OperandInfo[116] },  // Inst #213 = G_BRJT
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #212 = G_BR
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #211 = G_LLROUND
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #210 = G_LROUND
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #209 = G_ABS
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #208 = G_UMAX
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #207 = G_UMIN
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #206 = G_SMAX
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #205 = G_SMIN
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #204 = G_PTRMASK
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #203 = G_PTR_ADD
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #202 = G_RESET_FPMODE
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #201 = G_SET_FPMODE
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #200 = G_GET_FPMODE
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #199 = G_RESET_FPENV
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #198 = G_SET_FPENV
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #197 = G_GET_FPENV
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #196 = G_FMAXIMUM
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #195 = G_FMINIMUM
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #194 = G_FMAXNUM_IEEE
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #193 = G_FMINNUM_IEEE
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #192 = G_FMAXNUM
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #191 = G_FMINNUM
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #190 = G_FCANONICALIZE
  { 3, &CSKYDescs.OperandInfo[93] },  // Inst #189 = G_IS_FPCLASS
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #188 = G_FCOPYSIGN
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #187 = G_FABS
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #186 = G_UITOFP
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #185 = G_SITOFP
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #184 = G_FPTOUI
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #183 = G_FPTOSI
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #182 = G_FPTRUNC
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #181 = G_FPEXT
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #180 = G_FNEG
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #179 = G_FFREXP
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #178 = G_FLDEXP
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #177 = G_FLOG10
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #176 = G_FLOG2
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #175 = G_FLOG
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #174 = G_FEXP10
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #173 = G_FEXP2
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #172 = G_FEXP
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #171 = G_FPOWI
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #170 = G_FPOW
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #169 = G_FREM
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #168 = G_FDIV
  { 4, &CSKYDescs.OperandInfo[46] },  // Inst #167 = G_FMAD
  { 4, &CSKYDescs.OperandInfo[46] },  // Inst #166 = G_FMA
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #165 = G_FMUL
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #164 = G_FSUB
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #163 = G_FADD
  { 4, &CSKYDescs.OperandInfo[112] },  // Inst #162 = G_UDIVFIXSAT
  { 4, &CSKYDescs.OperandInfo[112] },  // Inst #161 = G_SDIVFIXSAT
  { 4, &CSKYDescs.OperandInfo[112] },  // Inst #160 = G_UDIVFIX
  { 4, &CSKYDescs.OperandInfo[112] },  // Inst #159 = G_SDIVFIX
  { 4, &CSKYDescs.OperandInfo[112] },  // Inst #158 = G_UMULFIXSAT
  { 4, &CSKYDescs.OperandInfo[112] },  // Inst #157 = G_SMULFIXSAT
  { 4, &CSKYDescs.OperandInfo[112] },  // Inst #156 = G_UMULFIX
  { 4, &CSKYDescs.OperandInfo[112] },  // Inst #155 = G_SMULFIX
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #154 = G_SSHLSAT
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #153 = G_USHLSAT
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #152 = G_SSUBSAT
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #151 = G_USUBSAT
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #150 = G_SADDSAT
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #149 = G_UADDSAT
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #148 = G_SMULH
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #147 = G_UMULH
  { 4, &CSKYDescs.OperandInfo[82] },  // Inst #146 = G_SMULO
  { 4, &CSKYDescs.OperandInfo[82] },  // Inst #145 = G_UMULO
  { 5, &CSKYDescs.OperandInfo[107] },  // Inst #144 = G_SSUBE
  { 4, &CSKYDescs.OperandInfo[82] },  // Inst #143 = G_SSUBO
  { 5, &CSKYDescs.OperandInfo[107] },  // Inst #142 = G_SADDE
  { 4, &CSKYDescs.OperandInfo[82] },  // Inst #141 = G_SADDO
  { 5, &CSKYDescs.OperandInfo[107] },  // Inst #140 = G_USUBE
  { 4, &CSKYDescs.OperandInfo[82] },  // Inst #139 = G_USUBO
  { 5, &CSKYDescs.OperandInfo[107] },  // Inst #138 = G_UADDE
  { 4, &CSKYDescs.OperandInfo[82] },  // Inst #137 = G_UADDO
  { 4, &CSKYDescs.OperandInfo[82] },  // Inst #136 = G_SELECT
  { 4, &CSKYDescs.OperandInfo[103] },  // Inst #135 = G_FCMP
  { 4, &CSKYDescs.OperandInfo[103] },  // Inst #134 = G_ICMP
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #133 = G_ROTL
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #132 = G_ROTR
  { 4, &CSKYDescs.OperandInfo[99] },  // Inst #131 = G_FSHR
  { 4, &CSKYDescs.OperandInfo[99] },  // Inst #130 = G_FSHL
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #129 = G_ASHR
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #128 = G_LSHR
  { 3, &CSKYDescs.OperandInfo[96] },  // Inst #127 = G_SHL
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #126 = G_ZEXT
  { 3, &CSKYDescs.OperandInfo[40] },  // Inst #125 = G_SEXT_INREG
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #124 = G_SEXT
  { 3, &CSKYDescs.OperandInfo[93] },  // Inst #123 = G_VAARG
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #122 = G_VASTART
  { 2, &CSKYDescs.OperandInfo[51] },  // Inst #121 = G_FCONSTANT
  { 2, &CSKYDescs.OperandInfo[51] },  // Inst #120 = G_CONSTANT
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #119 = G_TRUNC
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #118 = G_ANYEXT
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #117 = G_INTRINSIC_CONVERGENT_W_SIDE_EFFECTS
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #116 = G_INTRINSIC_CONVERGENT
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #115 = G_INTRINSIC_W_SIDE_EFFECTS
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #114 = G_INTRINSIC
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #113 = G_INVOKE_REGION_START
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #112 = G_BRINDIRECT
  { 2, &CSKYDescs.OperandInfo[51] },  // Inst #111 = G_BRCOND
  { 4, &CSKYDescs.OperandInfo[89] },  // Inst #110 = G_PREFETCH
  { 2, &CSKYDescs.OperandInfo[21] },  // Inst #109 = G_FENCE
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #108 = G_ATOMICRMW_UDEC_WRAP
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #107 = G_ATOMICRMW_UINC_WRAP
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #106 = G_ATOMICRMW_FMIN
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #105 = G_ATOMICRMW_FMAX
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #104 = G_ATOMICRMW_FSUB
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #103 = G_ATOMICRMW_FADD
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #102 = G_ATOMICRMW_UMIN
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #101 = G_ATOMICRMW_UMAX
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #100 = G_ATOMICRMW_MIN
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #99 = G_ATOMICRMW_MAX
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #98 = G_ATOMICRMW_XOR
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #97 = G_ATOMICRMW_OR
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #96 = G_ATOMICRMW_NAND
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #95 = G_ATOMICRMW_AND
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #94 = G_ATOMICRMW_SUB
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #93 = G_ATOMICRMW_ADD
  { 3, &CSKYDescs.OperandInfo[86] },  // Inst #92 = G_ATOMICRMW_XCHG
  { 4, &CSKYDescs.OperandInfo[82] },  // Inst #91 = G_ATOMIC_CMPXCHG
  { 5, &CSKYDescs.OperandInfo[77] },  // Inst #90 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 5, &CSKYDescs.OperandInfo[72] },  // Inst #89 = G_INDEXED_STORE
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #88 = G_STORE
  { 5, &CSKYDescs.OperandInfo[67] },  // Inst #87 = G_INDEXED_ZEXTLOAD
  { 5, &CSKYDescs.OperandInfo[67] },  // Inst #86 = G_INDEXED_SEXTLOAD
  { 5, &CSKYDescs.OperandInfo[67] },  // Inst #85 = G_INDEXED_LOAD
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #84 = G_ZEXTLOAD
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #83 = G_SEXTLOAD
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #82 = G_LOAD
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #81 = G_READCYCLECOUNTER
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #80 = G_INTRINSIC_ROUNDEVEN
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #79 = G_INTRINSIC_LRINT
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #78 = G_INTRINSIC_ROUND
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #77 = G_INTRINSIC_TRUNC
  { 3, &CSKYDescs.OperandInfo[64] },  // Inst #76 = G_INTRINSIC_FPTRUNC_ROUND
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #75 = G_CONSTANT_FOLD_BARRIER
  { 2, &CSKYDescs.OperandInfo[62] },  // Inst #74 = G_FREEZE
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #73 = G_BITCAST
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #72 = G_INTTOPTR
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #71 = G_PTRTOINT
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #70 = G_CONCAT_VECTORS
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #69 = G_BUILD_VECTOR_TRUNC
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #68 = G_BUILD_VECTOR
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #67 = G_MERGE_VALUES
  { 4, &CSKYDescs.OperandInfo[58] },  // Inst #66 = G_INSERT
  { 2, &CSKYDescs.OperandInfo[56] },  // Inst #65 = G_UNMERGE_VALUES
  { 3, &CSKYDescs.OperandInfo[53] },  // Inst #64 = G_EXTRACT
  { 2, &CSKYDescs.OperandInfo[51] },  // Inst #63 = G_CONSTANT_POOL
  { 2, &CSKYDescs.OperandInfo[51] },  // Inst #62 = G_GLOBAL_VALUE
  { 2, &CSKYDescs.OperandInfo[51] },  // Inst #61 = G_FRAME_INDEX
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #60 = G_PHI
  { 1, &CSKYDescs.OperandInfo[50] },  // Inst #59 = G_IMPLICIT_DEF
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #58 = G_XOR
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #57 = G_OR
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #56 = G_AND
  { 4, &CSKYDescs.OperandInfo[46] },  // Inst #55 = G_UDIVREM
  { 4, &CSKYDescs.OperandInfo[46] },  // Inst #54 = G_SDIVREM
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #53 = G_UREM
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #52 = G_SREM
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #51 = G_UDIV
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #50 = G_SDIV
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #49 = G_MUL
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #48 = G_SUB
  { 3, &CSKYDescs.OperandInfo[43] },  // Inst #47 = G_ADD
  { 3, &CSKYDescs.OperandInfo[40] },  // Inst #46 = G_ASSERT_ALIGN
  { 3, &CSKYDescs.OperandInfo[40] },  // Inst #45 = G_ASSERT_ZEXT
  { 3, &CSKYDescs.OperandInfo[40] },  // Inst #44 = G_ASSERT_SEXT
  { 1, &CSKYDescs.OperandInfo[1] },  // Inst #43 = JUMP_TABLE_DEBUG_INFO
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #42 = MEMBARRIER
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #41 = ICALL_BRANCH_FUNNEL
  { 3, &CSKYDescs.OperandInfo[37] },  // Inst #40 = PATCHABLE_TYPED_EVENT_CALL
  { 2, &CSKYDescs.OperandInfo[35] },  // Inst #39 = PATCHABLE_EVENT_CALL
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #38 = PATCHABLE_TAIL_CALL
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #37 = PATCHABLE_FUNCTION_EXIT
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #36 = PATCHABLE_RET
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #35 = PATCHABLE_FUNCTION_ENTER
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #34 = PATCHABLE_OP
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #33 = FAULTING_OP
  { 2, &CSKYDescs.OperandInfo[33] },  // Inst #32 = LOCAL_ESCAPE
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #31 = STATEPOINT
  { 3, &CSKYDescs.OperandInfo[30] },  // Inst #30 = PREALLOCATED_ARG
  { 1, &CSKYDescs.OperandInfo[1] },  // Inst #29 = PREALLOCATED_SETUP
  { 1, &CSKYDescs.OperandInfo[29] },  // Inst #28 = LOAD_STACK_GUARD
  { 6, &CSKYDescs.OperandInfo[23] },  // Inst #27 = PATCHPOINT
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #26 = FENTRY_CALL
  { 2, &CSKYDescs.OperandInfo[21] },  // Inst #25 = STACKMAP
  { 2, &CSKYDescs.OperandInfo[19] },  // Inst #24 = ARITH_FENCE
  { 4, &CSKYDescs.OperandInfo[15] },  // Inst #23 = PSEUDO_PROBE
  { 1, &CSKYDescs.OperandInfo[1] },  // Inst #22 = LIFETIME_END
  { 1, &CSKYDescs.OperandInfo[1] },  // Inst #21 = LIFETIME_START
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #20 = BUNDLE
  { 2, &CSKYDescs.OperandInfo[13] },  // Inst #19 = COPY
  { 2, &CSKYDescs.OperandInfo[13] },  // Inst #18 = REG_SEQUENCE
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #17 = DBG_LABEL
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #16 = DBG_PHI
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #15 = DBG_INSTR_REF
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #14 = DBG_VALUE_LIST
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #13 = DBG_VALUE
  { 3, &CSKYDescs.OperandInfo[2] },  // Inst #12 = COPY_TO_REGCLASS
  { 4, &CSKYDescs.OperandInfo[9] },  // Inst #11 = SUBREG_TO_REG
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #10 = IMPLICIT_DEF
  { 4, &CSKYDescs.OperandInfo[5] },  // Inst #9 = INSERT_SUBREG
  { 3, &CSKYDescs.OperandInfo[2] },  // Inst #8 = EXTRACT_SUBREG
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #7 = KILL
  { 1, &CSKYDescs.OperandInfo[1] },  // Inst #6 = ANNOTATION_LABEL
  { 1, &CSKYDescs.OperandInfo[1] },  // Inst #5 = GC_LABEL
  { 1, &CSKYDescs.OperandInfo[1] },  // Inst #4 = EH_LABEL
  { 1, &CSKYDescs.OperandInfo[1] },  // Inst #3 = CFI_INSTRUCTION
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #2 = INLINEASM_BR
  { 0, &CSKYDescs.OperandInfo[1] },  // Inst #1 = INLINEASM
  { 1, &CSKYDescs.OperandInfo[0] },  // Inst #0 = PHI
  }, {
    /* 0 */ { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 1 */
    /* 1 */ { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 2 */ { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 5 */ { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, CONSTRAINT_MCOI_TIED_TO(0) }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 9 */ { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 13 */ { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 15 */ { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 19 */ { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, CONSTRAINT_MCOI_TIED_TO(0) },
    /* 21 */ { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 23 */ { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 29 */ { 0, 0|(1<<MCOI_LookupPtrRegClass), MCOI_OPERAND_UNKNOWN, 0 },
    /* 30 */ { 0, 0|(1<<MCOI_LookupPtrRegClass), MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 33 */ { 0, 0|(1<<MCOI_LookupPtrRegClass), MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 35 */ { 0, 0|(1<<MCOI_LookupPtrRegClass), MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 37 */ { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI_LookupPtrRegClass), MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 40 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_IMM_0, 0 },
    /* 43 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 },
    /* 46 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 },
    /* 50 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 },
    /* 51 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 53 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_IMM_0, 0 },
    /* 56 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 },
    /* 58 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_IMM_0, 0 },
    /* 62 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 },
    /* 64 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 67 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 72 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 77 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 },
    /* 82 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 },
    /* 86 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 },
    /* 89 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 93 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 96 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 },
    /* 99 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 },
    /* 103 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 },
    /* 107 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 },
    /* 112 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_IMM_0, 0 },
    /* 116 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 },
    /* 119 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_2, 0 },
    /* 123 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_2, 0 },
    /* 126 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 130 */ { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 },
    /* 132 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_IMM_0, 0 },
    /* 136 */ { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI_OPERAND_GENERIC_1, 0 },
    /* 140 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 142 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 145 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 148 */ { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 151 */ { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 155 */ { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 159 */ { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 163 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 167 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 },
    /* 169 */ { -1, 0, MCOI_OPERAND_PCREL, 0 },
    /* 170 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 173 */ { CSKY_GPRPairRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 176 */ { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 178 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 180 */ { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 },
    /* 182 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 },
    /* 184 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 }, { -1, 0, MCOI_OPERAND_IMMEDIATE, 0 },
    /* 188 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 191 */ { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 194 */ { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 199 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 204 */ { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 207 */ { CSKY_GPRSPRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRSPRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 210 */ { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRSPRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 213 */ { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 216 */ { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 219 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 222 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 226 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { -1, 0, MCOI_OPERAND_PCREL, 0 },
    /* 229 */ { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 230 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 231 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) },
    /* 234 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 237 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 240 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 243 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 246 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 247 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 252 */ { CSKY_sFPR64_VRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64_VRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 254 */ { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 256 */ { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 258 */ { CSKY_sFPR64_VRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64_VRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64_VRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 261 */ { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 264 */ { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 267 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 270 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 273 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 275 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 277 */ { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 279 */ { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 282 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 285 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 288 */ { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 292 */ { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 296 */ { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 299 */ { CSKY_sFPR64_VRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64_VRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_sFPR64_VRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64_VRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 303 */ { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 307 */ { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 311 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 313 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 315 */ { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 318 */ { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 320 */ { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 322 */ { CSKY_sFPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sFPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 324 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 329 */ { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 330 */ { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 332 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 336 */ { CSKY_mGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 },
    /* 339 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 },
    /* 342 */ { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 344 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) },
    /* 348 */ { CSKY_GPRPairRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRPairRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 352 */ { CSKY_GPRPairRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 355 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 357 */ { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 359 */ { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) },
    /* 361 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 365 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 369 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_sGPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 371 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 373 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 378 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 380 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 382 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 385 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 388 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 390 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 392 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 395 */ { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 398 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 400 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 404 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 408 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 411 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 414 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 418 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 422 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 425 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_UNKNOWN, 0 },
    /* 428 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 },
    /* 430 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { -1, 0, MCOI_OPERAND_PCREL, 0 },
    /* 432 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 434 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 436 */ { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 439 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, CONSTRAINT_MCOI_TIED_TO(0) }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 442 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 444 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 447 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 449 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_GPRRegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 452 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 454 */ { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR64RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
    /* 458 */ { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_CARRYRegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 }, { CSKY_FPR32RegClassID, 0, MCOI_OPERAND_REGISTER, 0 },
  }, {
    /* 0 */
    /* 0 */ CSKY_R14, CSKY_R14,
    /* 2 */ CSKY_R15,
    /* 3 */ CSKY_R14, CSKY_R14, CSKY_R0, CSKY_R1, CSKY_R2, CSKY_R3, CSKY_R12, CSKY_R13,
    /* 11 */ CSKY_R14, CSKY_R0, CSKY_R1, CSKY_R2, CSKY_R3, CSKY_R12, CSKY_R13, CSKY_R14,
    /* 19 */ CSKY_R30,
    /* 20 */ CSKY_R28,
    /* 21 */ CSKY_R14, CSKY_R15, CSKY_R14,
  }
};

#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_COMPUTE_FEATURES
#undef GET_COMPUTE_FEATURES

#endif // GET_COMPUTE_FEATURES

#ifdef GET_AVAILABLE_OPCODE_CHECKER
#undef GET_AVAILABLE_OPCODE_CHECKER

#endif // GET_AVAILABLE_OPCODE_CHECKER

