/* Capstone Disassembly Engine, https://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2022, */
/*    Rot127 <unisono@quyllur.org> 2022-2024 */
/* Automatically generated file by Capstone's LLVM TableGen Disassembler Backend. */

/* LLVM-commit: <commit> */
/* LLVM-tag: <tag> */

/* Do not edit. */

/* Capstone's LLVM TableGen Backends: */
/* https://github.com/capstone-engine/llvm-capstone */

#include "../../MCInst.h"
#include "../../cs_priv.h"
#include "../../LEB128.h"

// Helper function for extracting fields from encoded instructions.
#define FieldFromInstruction(fname, InsnType) \
static InsnType fname(InsnType insn, unsigned startBit, unsigned numBits) \
{ \
  InsnType fieldMask; \
  if (numBits == sizeof(InsnType) * 8) \
    fieldMask = (InsnType)(-1LL); \
  else \
    fieldMask = (((InsnType)1 << numBits) - 1) << startBit; \
  return (insn & fieldMask) >> startBit; \
}

static bool Check(DecodeStatus *Out, const DecodeStatus In) {
  *Out = (DecodeStatus) (*Out & In);
  return *Out != MCDisassembler_Fail;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD_OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3 */       MCD_OPC_FilterValue, 0, 92, 1, 0, // Skip to: 356
/* 8 */       MCD_OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 11 */      MCD_OPC_FilterValue, 0, 41, 1, 0, // Skip to: 313
/* 16 */      MCD_OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 19 */      MCD_OPC_FilterValue, 0, 22, 0, 0, // Skip to: 46
/* 24 */      MCD_OPC_CheckField, 12, 1, 0, 11, 0, 0, // Skip to: 42
/* 31 */      MCD_OPC_CheckField, 0, 10, 0, 4, 0, 0, // Skip to: 42
/* 38 */      MCD_OPC_Decode, 208, 2, 0, // Opcode: BKPT
/* 42 */      MCD_OPC_Decode, 153, 4, 1, // Opcode: LRW16
/* 46 */      MCD_OPC_FilterValue, 1, 197, 3, 0, // Skip to: 1016
/* 51 */      MCD_OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 54 */      MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 63
/* 59 */      MCD_OPC_Decode, 218, 2, 2, // Opcode: BR16
/* 63 */      MCD_OPC_FilterValue, 1, 180, 3, 0, // Skip to: 1016
/* 68 */      MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 71 */      MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 80
/* 76 */      MCD_OPC_Decode, 182, 2, 3, // Opcode: ADDI16SPSP
/* 80 */      MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 89
/* 85 */      MCD_OPC_Decode, 240, 4, 3, // Opcode: SUBI16SPSP
/* 89 */      MCD_OPC_FilterValue, 3, 77, 0, 0, // Skip to: 171
/* 94 */      MCD_OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 97 */      MCD_OPC_FilterValue, 0, 11, 0, 0, // Skip to: 113
/* 102 */     MCD_OPC_CheckField, 8, 2, 0, 139, 3, 0, // Skip to: 1016
/* 109 */     MCD_OPC_Decode, 187, 4, 0, // Opcode: NIE
/* 113 */     MCD_OPC_FilterValue, 1, 11, 0, 0, // Skip to: 129
/* 118 */     MCD_OPC_CheckField, 8, 2, 0, 123, 3, 0, // Skip to: 1016
/* 125 */     MCD_OPC_Decode, 188, 4, 0, // Opcode: NIR
/* 129 */     MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 150
/* 134 */     MCD_OPC_CheckPredicate, 0, 109, 3, 0, // Skip to: 1016
/* 139 */     MCD_OPC_CheckField, 8, 2, 0, 102, 3, 0, // Skip to: 1016
/* 146 */     MCD_OPC_Decode, 247, 3, 0, // Opcode: IPUSH16
/* 150 */     MCD_OPC_FilterValue, 3, 93, 3, 0, // Skip to: 1016
/* 155 */     MCD_OPC_CheckPredicate, 0, 88, 3, 0, // Skip to: 1016
/* 160 */     MCD_OPC_CheckField, 8, 2, 0, 81, 3, 0, // Skip to: 1016
/* 167 */     MCD_OPC_Decode, 246, 3, 0, // Opcode: IPOP16
/* 171 */     MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 192
/* 176 */     MCD_OPC_CheckPredicate, 0, 67, 3, 0, // Skip to: 1016
/* 181 */     MCD_OPC_CheckField, 8, 2, 0, 60, 3, 0, // Skip to: 1016
/* 188 */     MCD_OPC_Decode, 198, 4, 4, // Opcode: POP16
/* 192 */     MCD_OPC_FilterValue, 5, 45, 0, 0, // Skip to: 242
/* 197 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 200 */     MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 221
/* 205 */     MCD_OPC_CheckPredicate, 1, 38, 3, 0, // Skip to: 1016
/* 210 */     MCD_OPC_CheckField, 8, 2, 0, 31, 3, 0, // Skip to: 1016
/* 217 */     MCD_OPC_Decode, 214, 2, 5, // Opcode: BPOPH
/* 221 */     MCD_OPC_FilterValue, 2, 22, 3, 0, // Skip to: 1016
/* 226 */     MCD_OPC_CheckPredicate, 1, 17, 3, 0, // Skip to: 1016
/* 231 */     MCD_OPC_CheckField, 8, 2, 0, 10, 3, 0, // Skip to: 1016
/* 238 */     MCD_OPC_Decode, 215, 2, 5, // Opcode: BPOPW
/* 242 */     MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 263
/* 247 */     MCD_OPC_CheckPredicate, 0, 252, 2, 0, // Skip to: 1016
/* 252 */     MCD_OPC_CheckField, 8, 2, 0, 245, 2, 0, // Skip to: 1016
/* 259 */     MCD_OPC_Decode, 200, 4, 4, // Opcode: PUSH16
/* 263 */     MCD_OPC_FilterValue, 7, 236, 2, 0, // Skip to: 1016
/* 268 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 271 */     MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 292
/* 276 */     MCD_OPC_CheckPredicate, 1, 223, 2, 0, // Skip to: 1016
/* 281 */     MCD_OPC_CheckField, 8, 2, 0, 216, 2, 0, // Skip to: 1016
/* 288 */     MCD_OPC_Decode, 216, 2, 5, // Opcode: BPUSHH
/* 292 */     MCD_OPC_FilterValue, 2, 207, 2, 0, // Skip to: 1016
/* 297 */     MCD_OPC_CheckPredicate, 1, 202, 2, 0, // Skip to: 1016
/* 302 */     MCD_OPC_CheckField, 8, 2, 0, 195, 2, 0, // Skip to: 1016
/* 309 */     MCD_OPC_Decode, 217, 2, 5, // Opcode: BPUSHW
/* 313 */     MCD_OPC_FilterValue, 1, 186, 2, 0, // Skip to: 1016
/* 318 */     MCD_OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 321 */     MCD_OPC_FilterValue, 0, 21, 0, 0, // Skip to: 347
/* 326 */     MCD_OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 329 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 338
/* 334 */     MCD_OPC_Decode, 233, 2, 2, // Opcode: BT16
/* 338 */     MCD_OPC_FilterValue, 1, 161, 2, 0, // Skip to: 1016
/* 343 */     MCD_OPC_Decode, 203, 2, 2, // Opcode: BF16
/* 347 */     MCD_OPC_FilterValue, 1, 152, 2, 0, // Skip to: 1016
/* 352 */     MCD_OPC_Decode, 184, 2, 6, // Opcode: ADDI16ZSP
/* 356 */     MCD_OPC_FilterValue, 1, 118, 0, 0, // Skip to: 479
/* 361 */     MCD_OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 364 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 373
/* 369 */     MCD_OPC_Decode, 181, 2, 7, // Opcode: ADDI16
/* 373 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 382
/* 378 */     MCD_OPC_Decode, 239, 4, 7, // Opcode: SUBI16
/* 382 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 391
/* 387 */     MCD_OPC_Decode, 171, 4, 8, // Opcode: MOVI16
/* 391 */     MCD_OPC_FilterValue, 3, 108, 2, 0, // Skip to: 1016
/* 396 */     MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 399 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 408
/* 404 */     MCD_OPC_Decode, 245, 2, 9, // Opcode: CMPHSI16
/* 408 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 417
/* 413 */     MCD_OPC_Decode, 249, 2, 9, // Opcode: CMPLTI16
/* 417 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 426
/* 422 */     MCD_OPC_Decode, 253, 2, 10, // Opcode: CMPNEI16
/* 426 */     MCD_OPC_FilterValue, 4, 4, 0, 0, // Skip to: 435
/* 431 */     MCD_OPC_Decode, 200, 2, 11, // Opcode: BCLRI16
/* 435 */     MCD_OPC_FilterValue, 5, 4, 0, 0, // Skip to: 444
/* 440 */     MCD_OPC_Decode, 229, 2, 11, // Opcode: BSETI16
/* 444 */     MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 458
/* 449 */     MCD_OPC_CheckPredicate, 2, 50, 2, 0, // Skip to: 1016
/* 454 */     MCD_OPC_Decode, 235, 2, 10, // Opcode: BTSTI16
/* 458 */     MCD_OPC_FilterValue, 7, 41, 2, 0, // Skip to: 1016
/* 463 */     MCD_OPC_CheckPredicate, 1, 36, 2, 0, // Skip to: 1016
/* 468 */     MCD_OPC_CheckField, 2, 3, 0, 29, 2, 0, // Skip to: 1016
/* 475 */     MCD_OPC_Decode, 254, 3, 12, // Opcode: JMPIX16
/* 479 */     MCD_OPC_FilterValue, 2, 74, 0, 0, // Skip to: 558
/* 484 */     MCD_OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 487 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 496
/* 492 */     MCD_OPC_Decode, 160, 4, 13, // Opcode: LSLI16
/* 496 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 505
/* 501 */     MCD_OPC_Decode, 165, 4, 13, // Opcode: LSRI16
/* 505 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 514
/* 510 */     MCD_OPC_Decode, 198, 2, 13, // Opcode: ASRI16
/* 514 */     MCD_OPC_FilterValue, 3, 241, 1, 0, // Skip to: 1016
/* 519 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 522 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 531
/* 527 */     MCD_OPC_Decode, 186, 2, 14, // Opcode: ADDU16
/* 531 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 540
/* 536 */     MCD_OPC_Decode, 243, 4, 14, // Opcode: SUBU16
/* 540 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 549
/* 545 */     MCD_OPC_Decode, 183, 2, 15, // Opcode: ADDI16XZ
/* 549 */     MCD_OPC_FilterValue, 3, 206, 1, 0, // Skip to: 1016
/* 554 */     MCD_OPC_Decode, 241, 4, 15, // Opcode: SUBI16XZ
/* 558 */     MCD_OPC_FilterValue, 3, 109, 1, 0, // Skip to: 928
/* 563 */     MCD_OPC_ExtractField, 10, 3,  // Inst{12-10} ...
/* 566 */     MCD_OPC_FilterValue, 0, 39, 0, 0, // Skip to: 610
/* 571 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 574 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 583
/* 579 */     MCD_OPC_Decode, 187, 2, 16, // Opcode: ADDU16XZ
/* 583 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 592
/* 588 */     MCD_OPC_Decode, 179, 2, 16, // Opcode: ADDC16
/* 592 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 601
/* 597 */     MCD_OPC_Decode, 244, 4, 16, // Opcode: SUBU16XZ
/* 601 */     MCD_OPC_FilterValue, 3, 154, 1, 0, // Skip to: 1016
/* 606 */     MCD_OPC_Decode, 237, 4, 16, // Opcode: SUBC16
/* 610 */     MCD_OPC_FilterValue, 1, 46, 0, 0, // Skip to: 661
/* 615 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 618 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 627
/* 623 */     MCD_OPC_Decode, 243, 2, 17, // Opcode: CMPHS16
/* 627 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 636
/* 632 */     MCD_OPC_Decode, 247, 2, 17, // Opcode: CMPLT16
/* 636 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 645
/* 641 */     MCD_OPC_Decode, 251, 2, 17, // Opcode: CMPNE16
/* 645 */     MCD_OPC_FilterValue, 3, 110, 1, 0, // Skip to: 1016
/* 650 */     MCD_OPC_CheckField, 2, 4, 0, 103, 1, 0, // Skip to: 1016
/* 657 */     MCD_OPC_Decode, 185, 4, 18, // Opcode: MVCV16
/* 661 */     MCD_OPC_FilterValue, 2, 46, 0, 0, // Skip to: 712
/* 666 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 669 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 678
/* 674 */     MCD_OPC_Decode, 189, 2, 16, // Opcode: AND16
/* 678 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 687
/* 683 */     MCD_OPC_Decode, 192, 2, 16, // Opcode: ANDN16
/* 687 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 696
/* 692 */     MCD_OPC_Decode, 132, 5, 17, // Opcode: TST16
/* 696 */     MCD_OPC_FilterValue, 3, 59, 1, 0, // Skip to: 1016
/* 701 */     MCD_OPC_CheckField, 6, 4, 0, 52, 1, 0, // Skip to: 1016
/* 708 */     MCD_OPC_Decode, 134, 5, 19, // Opcode: TSTNBZ16
/* 712 */     MCD_OPC_FilterValue, 3, 39, 0, 0, // Skip to: 756
/* 717 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 720 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 729
/* 725 */     MCD_OPC_Decode, 193, 4, 16, // Opcode: OR16
/* 729 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 738
/* 734 */     MCD_OPC_Decode, 139, 5, 16, // Opcode: XOR16
/* 738 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 747
/* 743 */     MCD_OPC_Decode, 189, 4, 16, // Opcode: NOR16
/* 747 */     MCD_OPC_FilterValue, 3, 8, 1, 0, // Skip to: 1016
/* 752 */     MCD_OPC_Decode, 168, 4, 20, // Opcode: MOV16
/* 756 */     MCD_OPC_FilterValue, 4, 39, 0, 0, // Skip to: 800
/* 761 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 764 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 773
/* 769 */     MCD_OPC_Decode, 157, 4, 16, // Opcode: LSL16
/* 773 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 782
/* 778 */     MCD_OPC_Decode, 162, 4, 16, // Opcode: LSR16
/* 782 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 791
/* 787 */     MCD_OPC_Decode, 195, 2, 16, // Opcode: ASR16
/* 791 */     MCD_OPC_FilterValue, 3, 220, 0, 0, // Skip to: 1016
/* 796 */     MCD_OPC_Decode, 207, 4, 16, // Opcode: ROTL16
/* 800 */     MCD_OPC_FilterValue, 5, 39, 0, 0, // Skip to: 844
/* 805 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 808 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 817
/* 813 */     MCD_OPC_Decode, 148, 5, 20, // Opcode: ZEXTB16
/* 817 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 826
/* 822 */     MCD_OPC_Decode, 150, 5, 20, // Opcode: ZEXTH16
/* 826 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 835
/* 831 */     MCD_OPC_Decode, 216, 4, 20, // Opcode: SEXTB16
/* 835 */     MCD_OPC_FilterValue, 3, 176, 0, 0, // Skip to: 1016
/* 840 */     MCD_OPC_Decode, 218, 4, 20, // Opcode: SEXTH16
/* 844 */     MCD_OPC_FilterValue, 6, 53, 0, 0, // Skip to: 902
/* 849 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 852 */     MCD_OPC_FilterValue, 0, 11, 0, 0, // Skip to: 868
/* 857 */     MCD_OPC_CheckField, 6, 4, 0, 152, 0, 0, // Skip to: 1016
/* 864 */     MCD_OPC_Decode, 251, 3, 19, // Opcode: JMP16
/* 868 */     MCD_OPC_FilterValue, 1, 11, 0, 0, // Skip to: 884
/* 873 */     MCD_OPC_CheckField, 6, 4, 15, 136, 0, 0, // Skip to: 1016
/* 880 */     MCD_OPC_Decode, 255, 3, 19, // Opcode: JSR16
/* 884 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 893
/* 889 */     MCD_OPC_Decode, 202, 4, 20, // Opcode: REVB16
/* 893 */     MCD_OPC_FilterValue, 3, 118, 0, 0, // Skip to: 1016
/* 898 */     MCD_OPC_Decode, 204, 4, 20, // Opcode: REVH16
/* 902 */     MCD_OPC_FilterValue, 7, 109, 0, 0, // Skip to: 1016
/* 907 */     MCD_OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 910 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 919
/* 915 */     MCD_OPC_Decode, 180, 4, 16, // Opcode: MULT16
/* 919 */     MCD_OPC_FilterValue, 1, 92, 0, 0, // Skip to: 1016
/* 924 */     MCD_OPC_Decode, 178, 4, 16, // Opcode: MULSH16
/* 928 */     MCD_OPC_FilterValue, 4, 39, 0, 0, // Skip to: 972
/* 933 */     MCD_OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 936 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 945
/* 941 */     MCD_OPC_Decode, 133, 4, 13, // Opcode: LD16B
/* 945 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 954
/* 950 */     MCD_OPC_Decode, 134, 4, 21, // Opcode: LD16H
/* 954 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 963
/* 959 */     MCD_OPC_Decode, 135, 4, 22, // Opcode: LD16W
/* 963 */     MCD_OPC_FilterValue, 3, 48, 0, 0, // Skip to: 1016
/* 968 */     MCD_OPC_Decode, 136, 4, 23, // Opcode: LD16WSP
/* 972 */     MCD_OPC_FilterValue, 5, 39, 0, 0, // Skip to: 1016
/* 977 */     MCD_OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 980 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 989
/* 985 */     MCD_OPC_Decode, 223, 4, 13, // Opcode: ST16B
/* 989 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 998
/* 994 */     MCD_OPC_Decode, 224, 4, 21, // Opcode: ST16H
/* 998 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1007
/* 1003 */    MCD_OPC_Decode, 225, 4, 22, // Opcode: ST16W
/* 1007 */    MCD_OPC_FilterValue, 3, 4, 0, 0, // Skip to: 1016
/* 1012 */    MCD_OPC_Decode, 226, 4, 23, // Opcode: ST16WSP
/* 1016 */    MCD_OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD_OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD_OPC_FilterValue, 48, 67, 4, 0, // Skip to: 1099
/* 8 */       MCD_OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 11 */      MCD_OPC_FilterValue, 0, 60, 0, 0, // Skip to: 76
/* 16 */      MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 19 */      MCD_OPC_FilterValue, 160, 8, 238, 22, 0, // Skip to: 5895
/* 25 */      MCD_OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 28 */      MCD_OPC_FilterValue, 0, 230, 22, 0, // Skip to: 5895
/* 33 */      MCD_OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 36 */      MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 45
/* 41 */      MCD_OPC_Decode, 246, 4, 0, // Opcode: SYNC0_32
/* 45 */      MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 54
/* 50 */      MCD_OPC_Decode, 248, 4, 0, // Opcode: SYNC_32_I
/* 54 */      MCD_OPC_FilterValue, 16, 4, 0, 0, // Skip to: 63
/* 59 */      MCD_OPC_Decode, 250, 4, 0, // Opcode: SYNC_32_S
/* 63 */      MCD_OPC_FilterValue, 17, 4, 0, 0, // Skip to: 72
/* 68 */      MCD_OPC_Decode, 249, 4, 0, // Opcode: SYNC_32_IS
/* 72 */      MCD_OPC_Decode, 247, 4, 24, // Opcode: SYNC32
/* 76 */      MCD_OPC_FilterValue, 1, 47, 0, 0, // Skip to: 128
/* 81 */      MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 84 */      MCD_OPC_FilterValue, 160, 16, 16, 0, 0, // Skip to: 106
/* 90 */      MCD_OPC_CheckPredicate, 3, 168, 22, 0, // Skip to: 5895
/* 95 */      MCD_OPC_CheckField, 16, 5, 0, 161, 22, 0, // Skip to: 5895
/* 102 */     MCD_OPC_Decode, 211, 4, 25, // Opcode: SCE32
/* 106 */     MCD_OPC_FilterValue, 160, 24, 151, 22, 0, // Skip to: 5895
/* 112 */     MCD_OPC_CheckPredicate, 4, 146, 22, 0, // Skip to: 5895
/* 117 */     MCD_OPC_CheckField, 16, 5, 0, 139, 22, 0, // Skip to: 5895
/* 124 */     MCD_OPC_Decode, 242, 3, 26, // Opcode: IDLY32
/* 128 */     MCD_OPC_FilterValue, 2, 18, 0, 0, // Skip to: 151
/* 133 */     MCD_OPC_CheckField, 16, 10, 0, 123, 22, 0, // Skip to: 5895
/* 140 */     MCD_OPC_CheckField, 0, 10, 32, 116, 22, 0, // Skip to: 5895
/* 147 */     MCD_OPC_Decode, 131, 5, 27, // Opcode: TRAP32
/* 151 */     MCD_OPC_FilterValue, 3, 19, 0, 0, // Skip to: 175
/* 156 */     MCD_OPC_CheckField, 16, 10, 0, 100, 22, 0, // Skip to: 5895
/* 163 */     MCD_OPC_CheckField, 0, 12, 160, 24, 92, 22, 0, // Skip to: 5895
/* 171 */     MCD_OPC_Decode, 138, 5, 0, // Opcode: WSC32
/* 175 */     MCD_OPC_FilterValue, 4, 59, 0, 0, // Skip to: 239
/* 180 */     MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 183 */     MCD_OPC_FilterValue, 160, 8, 16, 0, 0, // Skip to: 205
/* 189 */     MCD_OPC_CheckPredicate, 3, 69, 22, 0, // Skip to: 5895
/* 194 */     MCD_OPC_CheckField, 16, 10, 0, 62, 22, 0, // Skip to: 5895
/* 201 */     MCD_OPC_Decode, 206, 4, 0, // Opcode: RFI32
/* 205 */     MCD_OPC_FilterValue, 160, 16, 11, 0, 0, // Skip to: 222
/* 211 */     MCD_OPC_CheckField, 16, 10, 0, 45, 22, 0, // Skip to: 5895
/* 218 */     MCD_OPC_Decode, 233, 4, 0, // Opcode: STOP32
/* 222 */     MCD_OPC_FilterValue, 160, 24, 35, 22, 0, // Skip to: 5895
/* 228 */     MCD_OPC_CheckField, 16, 10, 0, 28, 22, 0, // Skip to: 5895
/* 235 */     MCD_OPC_Decode, 136, 5, 0, // Opcode: WAIT32
/* 239 */     MCD_OPC_FilterValue, 5, 53, 0, 0, // Skip to: 297
/* 244 */     MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 247 */     MCD_OPC_FilterValue, 32, 11, 0, 0, // Skip to: 263
/* 252 */     MCD_OPC_CheckField, 16, 10, 0, 4, 22, 0, // Skip to: 5895
/* 259 */     MCD_OPC_Decode, 150, 3, 0, // Opcode: DOZE32
/* 263 */     MCD_OPC_FilterValue, 160, 8, 11, 0, 0, // Skip to: 280
/* 269 */     MCD_OPC_CheckField, 16, 10, 0, 243, 21, 0, // Skip to: 5895
/* 276 */     MCD_OPC_Decode, 137, 5, 0, // Opcode: WE32
/* 280 */     MCD_OPC_FilterValue, 160, 16, 233, 21, 0, // Skip to: 5895
/* 286 */     MCD_OPC_CheckField, 16, 10, 0, 226, 21, 0, // Skip to: 5895
/* 293 */     MCD_OPC_Decode, 212, 4, 0, // Opcode: SE32
/* 297 */     MCD_OPC_FilterValue, 8, 159, 1, 0, // Skip to: 717
/* 302 */     MCD_OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 305 */     MCD_OPC_FilterValue, 0, 135, 0, 0, // Skip to: 445
/* 310 */     MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 313 */     MCD_OPC_FilterValue, 165, 8, 16, 0, 0, // Skip to: 335
/* 319 */     MCD_OPC_CheckPredicate, 5, 195, 21, 0, // Skip to: 5895
/* 324 */     MCD_OPC_CheckField, 16, 5, 0, 188, 21, 0, // Skip to: 5895
/* 331 */     MCD_OPC_Decode, 220, 2, 0, // Opcode: BRAR
/* 335 */     MCD_OPC_FilterValue, 167, 8, 16, 0, 0, // Skip to: 357
/* 341 */     MCD_OPC_CheckPredicate, 5, 173, 21, 0, // Skip to: 5895
/* 346 */     MCD_OPC_CheckField, 16, 5, 0, 166, 21, 0, // Skip to: 5895
/* 353 */     MCD_OPC_Decode, 222, 2, 0, // Opcode: BRARW
/* 357 */     MCD_OPC_FilterValue, 170, 8, 16, 0, 0, // Skip to: 379
/* 363 */     MCD_OPC_CheckPredicate, 5, 151, 21, 0, // Skip to: 5895
/* 368 */     MCD_OPC_CheckField, 16, 5, 0, 144, 21, 0, // Skip to: 5895
/* 375 */     MCD_OPC_Decode, 237, 2, 0, // Opcode: BWAW
/* 379 */     MCD_OPC_FilterValue, 174, 8, 16, 0, 0, // Skip to: 401
/* 385 */     MCD_OPC_CheckPredicate, 5, 129, 21, 0, // Skip to: 5895
/* 390 */     MCD_OPC_CheckField, 16, 5, 0, 122, 21, 0, // Skip to: 5895
/* 397 */     MCD_OPC_Decode, 227, 2, 0, // Opcode: BRWAW
/* 401 */     MCD_OPC_FilterValue, 175, 8, 16, 0, 0, // Skip to: 423
/* 407 */     MCD_OPC_CheckPredicate, 5, 107, 21, 0, // Skip to: 5895
/* 412 */     MCD_OPC_CheckField, 16, 5, 0, 100, 21, 0, // Skip to: 5895
/* 419 */     MCD_OPC_Decode, 225, 2, 0, // Opcode: BRWARW
/* 423 */     MCD_OPC_FilterValue, 160, 16, 90, 21, 0, // Skip to: 5895
/* 429 */     MCD_OPC_CheckPredicate, 6, 85, 21, 0, // Skip to: 5895
/* 434 */     MCD_OPC_CheckField, 16, 5, 0, 78, 21, 0, // Skip to: 5895
/* 441 */     MCD_OPC_Decode, 251, 4, 0, // Opcode: TLBI_ALL32
/* 445 */     MCD_OPC_FilterValue, 1, 17, 0, 0, // Skip to: 467
/* 450 */     MCD_OPC_CheckPredicate, 6, 64, 21, 0, // Skip to: 5895
/* 455 */     MCD_OPC_CheckField, 0, 12, 160, 16, 56, 21, 0, // Skip to: 5895
/* 463 */     MCD_OPC_Decode, 253, 4, 28, // Opcode: TLBI_ASID32
/* 467 */     MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 489
/* 472 */     MCD_OPC_CheckPredicate, 6, 42, 21, 0, // Skip to: 5895
/* 477 */     MCD_OPC_CheckField, 0, 12, 160, 16, 34, 21, 0, // Skip to: 5895
/* 485 */     MCD_OPC_Decode, 128, 5, 28, // Opcode: TLBI_VAA32
/* 489 */     MCD_OPC_FilterValue, 3, 17, 0, 0, // Skip to: 511
/* 494 */     MCD_OPC_CheckPredicate, 6, 20, 21, 0, // Skip to: 5895
/* 499 */     MCD_OPC_CheckField, 0, 12, 160, 16, 12, 21, 0, // Skip to: 5895
/* 507 */     MCD_OPC_Decode, 255, 4, 28, // Opcode: TLBI_VA32
/* 511 */     MCD_OPC_FilterValue, 16, 135, 0, 0, // Skip to: 651
/* 516 */     MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 519 */     MCD_OPC_FilterValue, 165, 8, 16, 0, 0, // Skip to: 541
/* 525 */     MCD_OPC_CheckPredicate, 5, 245, 20, 0, // Skip to: 5895
/* 530 */     MCD_OPC_CheckField, 16, 5, 0, 238, 20, 0, // Skip to: 5895
/* 537 */     MCD_OPC_Decode, 221, 2, 0, // Opcode: BRARS
/* 541 */     MCD_OPC_FilterValue, 167, 8, 16, 0, 0, // Skip to: 563
/* 547 */     MCD_OPC_CheckPredicate, 5, 223, 20, 0, // Skip to: 5895
/* 552 */     MCD_OPC_CheckField, 16, 5, 0, 216, 20, 0, // Skip to: 5895
/* 559 */     MCD_OPC_Decode, 223, 2, 0, // Opcode: BRARWS
/* 563 */     MCD_OPC_FilterValue, 170, 8, 16, 0, 0, // Skip to: 585
/* 569 */     MCD_OPC_CheckPredicate, 5, 201, 20, 0, // Skip to: 5895
/* 574 */     MCD_OPC_CheckField, 16, 5, 0, 194, 20, 0, // Skip to: 5895
/* 581 */     MCD_OPC_Decode, 238, 2, 0, // Opcode: BWAWS
/* 585 */     MCD_OPC_FilterValue, 174, 8, 16, 0, 0, // Skip to: 607
/* 591 */     MCD_OPC_CheckPredicate, 5, 179, 20, 0, // Skip to: 5895
/* 596 */     MCD_OPC_CheckField, 16, 5, 0, 172, 20, 0, // Skip to: 5895
/* 603 */     MCD_OPC_Decode, 228, 2, 0, // Opcode: BRWAWS
/* 607 */     MCD_OPC_FilterValue, 175, 8, 16, 0, 0, // Skip to: 629
/* 613 */     MCD_OPC_CheckPredicate, 5, 157, 20, 0, // Skip to: 5895
/* 618 */     MCD_OPC_CheckField, 16, 5, 0, 150, 20, 0, // Skip to: 5895
/* 625 */     MCD_OPC_Decode, 226, 2, 0, // Opcode: BRWARWS
/* 629 */     MCD_OPC_FilterValue, 160, 16, 140, 20, 0, // Skip to: 5895
/* 635 */     MCD_OPC_CheckPredicate, 6, 135, 20, 0, // Skip to: 5895
/* 640 */     MCD_OPC_CheckField, 16, 5, 0, 128, 20, 0, // Skip to: 5895
/* 647 */     MCD_OPC_Decode, 252, 4, 0, // Opcode: TLBI_ALLS32
/* 651 */     MCD_OPC_FilterValue, 17, 17, 0, 0, // Skip to: 673
/* 656 */     MCD_OPC_CheckPredicate, 6, 114, 20, 0, // Skip to: 5895
/* 661 */     MCD_OPC_CheckField, 0, 12, 160, 16, 106, 20, 0, // Skip to: 5895
/* 669 */     MCD_OPC_Decode, 254, 4, 28, // Opcode: TLBI_ASIDS32
/* 673 */     MCD_OPC_FilterValue, 18, 17, 0, 0, // Skip to: 695
/* 678 */     MCD_OPC_CheckPredicate, 6, 92, 20, 0, // Skip to: 5895
/* 683 */     MCD_OPC_CheckField, 0, 12, 160, 16, 84, 20, 0, // Skip to: 5895
/* 691 */     MCD_OPC_Decode, 129, 5, 28, // Opcode: TLBI_VAAS32
/* 695 */     MCD_OPC_FilterValue, 19, 75, 20, 0, // Skip to: 5895
/* 700 */     MCD_OPC_CheckPredicate, 6, 70, 20, 0, // Skip to: 5895
/* 705 */     MCD_OPC_CheckField, 0, 12, 160, 16, 62, 20, 0, // Skip to: 5895
/* 713 */     MCD_OPC_Decode, 130, 5, 28, // Opcode: TLBI_VAS32
/* 717 */     MCD_OPC_FilterValue, 9, 53, 20, 0, // Skip to: 5895
/* 722 */     MCD_OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 725 */     MCD_OPC_FilterValue, 4, 47, 0, 0, // Skip to: 777
/* 730 */     MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 733 */     MCD_OPC_FilterValue, 160, 8, 16, 0, 0, // Skip to: 755
/* 739 */     MCD_OPC_CheckPredicate, 6, 31, 20, 0, // Skip to: 5895
/* 744 */     MCD_OPC_CheckField, 16, 5, 0, 24, 20, 0, // Skip to: 5895
/* 751 */     MCD_OPC_Decode, 133, 3, 0, // Opcode: DCACHE_CALL32
/* 755 */     MCD_OPC_FilterValue, 160, 16, 14, 20, 0, // Skip to: 5895
/* 761 */     MCD_OPC_CheckPredicate, 6, 9, 20, 0, // Skip to: 5895
/* 766 */     MCD_OPC_CheckField, 16, 5, 0, 2, 20, 0, // Skip to: 5895
/* 773 */     MCD_OPC_Decode, 130, 4, 0, // Opcode: L2CACHE_CALL
/* 777 */     MCD_OPC_FilterValue, 6, 17, 0, 0, // Skip to: 799
/* 782 */     MCD_OPC_CheckPredicate, 6, 244, 19, 0, // Skip to: 5895
/* 787 */     MCD_OPC_CheckField, 0, 12, 160, 8, 236, 19, 0, // Skip to: 5895
/* 795 */     MCD_OPC_Decode, 137, 3, 28, // Opcode: DCACHE_CSW32
/* 799 */     MCD_OPC_FilterValue, 7, 17, 0, 0, // Skip to: 821
/* 804 */     MCD_OPC_CheckPredicate, 6, 222, 19, 0, // Skip to: 5895
/* 809 */     MCD_OPC_CheckField, 0, 12, 160, 8, 214, 19, 0, // Skip to: 5895
/* 817 */     MCD_OPC_Decode, 138, 3, 28, // Opcode: DCACHE_CVA32
/* 821 */     MCD_OPC_FilterValue, 8, 68, 0, 0, // Skip to: 894
/* 826 */     MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 829 */     MCD_OPC_FilterValue, 32, 16, 0, 0, // Skip to: 850
/* 834 */     MCD_OPC_CheckPredicate, 6, 192, 19, 0, // Skip to: 5895
/* 839 */     MCD_OPC_CheckField, 16, 5, 0, 185, 19, 0, // Skip to: 5895
/* 846 */     MCD_OPC_Decode, 239, 3, 0, // Opcode: ICACHE_IALL32
/* 850 */     MCD_OPC_FilterValue, 160, 8, 16, 0, 0, // Skip to: 872
/* 856 */     MCD_OPC_CheckPredicate, 6, 170, 19, 0, // Skip to: 5895
/* 861 */     MCD_OPC_CheckField, 16, 5, 0, 163, 19, 0, // Skip to: 5895
/* 868 */     MCD_OPC_Decode, 140, 3, 0, // Opcode: DCACHE_IALL32
/* 872 */     MCD_OPC_FilterValue, 160, 16, 153, 19, 0, // Skip to: 5895
/* 878 */     MCD_OPC_CheckPredicate, 6, 148, 19, 0, // Skip to: 5895
/* 883 */     MCD_OPC_CheckField, 16, 5, 0, 141, 19, 0, // Skip to: 5895
/* 890 */     MCD_OPC_Decode, 132, 4, 0, // Opcode: L2CACHE_IALL
/* 894 */     MCD_OPC_FilterValue, 10, 17, 0, 0, // Skip to: 916
/* 899 */     MCD_OPC_CheckPredicate, 6, 127, 19, 0, // Skip to: 5895
/* 904 */     MCD_OPC_CheckField, 0, 12, 160, 8, 119, 19, 0, // Skip to: 5895
/* 912 */     MCD_OPC_Decode, 141, 3, 28, // Opcode: DCACHE_ISW32
/* 916 */     MCD_OPC_FilterValue, 11, 32, 0, 0, // Skip to: 953
/* 921 */     MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 924 */     MCD_OPC_FilterValue, 32, 9, 0, 0, // Skip to: 938
/* 929 */     MCD_OPC_CheckPredicate, 6, 97, 19, 0, // Skip to: 5895
/* 934 */     MCD_OPC_Decode, 241, 3, 28, // Opcode: ICACHE_IVA32
/* 938 */     MCD_OPC_FilterValue, 160, 8, 87, 19, 0, // Skip to: 5895
/* 944 */     MCD_OPC_CheckPredicate, 6, 82, 19, 0, // Skip to: 5895
/* 949 */     MCD_OPC_Decode, 142, 3, 28, // Opcode: DCACHE_IVA32
/* 953 */     MCD_OPC_FilterValue, 12, 47, 0, 0, // Skip to: 1005
/* 958 */     MCD_OPC_ExtractField, 0, 12,  // Inst{11-0} ...
/* 961 */     MCD_OPC_FilterValue, 160, 8, 16, 0, 0, // Skip to: 983
/* 967 */     MCD_OPC_CheckPredicate, 6, 59, 19, 0, // Skip to: 5895
/* 972 */     MCD_OPC_CheckField, 16, 5, 0, 52, 19, 0, // Skip to: 5895
/* 979 */     MCD_OPC_Decode, 134, 3, 0, // Opcode: DCACHE_CIALL32
/* 983 */     MCD_OPC_FilterValue, 160, 16, 42, 19, 0, // Skip to: 5895
/* 989 */     MCD_OPC_CheckPredicate, 6, 37, 19, 0, // Skip to: 5895
/* 994 */     MCD_OPC_CheckField, 16, 5, 0, 30, 19, 0, // Skip to: 5895
/* 1001 */    MCD_OPC_Decode, 131, 4, 0, // Opcode: L2CACHE_CIALL
/* 1005 */    MCD_OPC_FilterValue, 14, 17, 0, 0, // Skip to: 1027
/* 1010 */    MCD_OPC_CheckPredicate, 6, 16, 19, 0, // Skip to: 5895
/* 1015 */    MCD_OPC_CheckField, 0, 12, 160, 8, 8, 19, 0, // Skip to: 5895
/* 1023 */    MCD_OPC_Decode, 135, 3, 28, // Opcode: DCACHE_CISW32
/* 1027 */    MCD_OPC_FilterValue, 15, 17, 0, 0, // Skip to: 1049
/* 1032 */    MCD_OPC_CheckPredicate, 6, 250, 18, 0, // Skip to: 5895
/* 1037 */    MCD_OPC_CheckField, 0, 12, 160, 8, 242, 18, 0, // Skip to: 5895
/* 1045 */    MCD_OPC_Decode, 136, 3, 28, // Opcode: DCACHE_CIVA32
/* 1049 */    MCD_OPC_FilterValue, 23, 17, 0, 0, // Skip to: 1071
/* 1054 */    MCD_OPC_CheckPredicate, 6, 228, 18, 0, // Skip to: 5895
/* 1059 */    MCD_OPC_CheckField, 0, 12, 160, 8, 220, 18, 0, // Skip to: 5895
/* 1067 */    MCD_OPC_Decode, 139, 3, 28, // Opcode: DCACHE_CVAL32
/* 1071 */    MCD_OPC_FilterValue, 24, 211, 18, 0, // Skip to: 5895
/* 1076 */    MCD_OPC_CheckPredicate, 6, 206, 18, 0, // Skip to: 5895
/* 1081 */    MCD_OPC_CheckField, 16, 5, 0, 199, 18, 0, // Skip to: 5895
/* 1088 */    MCD_OPC_CheckField, 0, 12, 32, 192, 18, 0, // Skip to: 5895
/* 1095 */    MCD_OPC_Decode, 240, 3, 0, // Opcode: ICACHE_IALLS32
/* 1099 */    MCD_OPC_FilterValue, 49, 187, 4, 0, // Skip to: 2315
/* 1104 */    MCD_OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 1107 */    MCD_OPC_FilterValue, 0, 80, 0, 0, // Skip to: 1192
/* 1112 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1115 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1129
/* 1120 */    MCD_OPC_CheckPredicate, 7, 162, 18, 0, // Skip to: 5895
/* 1125 */    MCD_OPC_Decode, 188, 2, 29, // Opcode: ADDU32
/* 1129 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1143
/* 1134 */    MCD_OPC_CheckPredicate, 7, 148, 18, 0, // Skip to: 5895
/* 1139 */    MCD_OPC_Decode, 180, 2, 29, // Opcode: ADDC32
/* 1143 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 1157
/* 1148 */    MCD_OPC_CheckPredicate, 7, 134, 18, 0, // Skip to: 5895
/* 1153 */    MCD_OPC_Decode, 245, 4, 29, // Opcode: SUBU32
/* 1157 */    MCD_OPC_FilterValue, 8, 9, 0, 0, // Skip to: 1171
/* 1162 */    MCD_OPC_CheckPredicate, 7, 120, 18, 0, // Skip to: 5895
/* 1167 */    MCD_OPC_Decode, 238, 4, 29, // Opcode: SUBC32
/* 1171 */    MCD_OPC_FilterValue, 16, 111, 18, 0, // Skip to: 5895
/* 1176 */    MCD_OPC_CheckPredicate, 3, 106, 18, 0, // Skip to: 5895
/* 1181 */    MCD_OPC_CheckField, 21, 5, 0, 99, 18, 0, // Skip to: 5895
/* 1188 */    MCD_OPC_Decode, 178, 2, 30, // Opcode: ABS32
/* 1192 */    MCD_OPC_FilterValue, 1, 142, 0, 0, // Skip to: 1339
/* 1197 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1200 */    MCD_OPC_FilterValue, 1, 33, 0, 0, // Skip to: 1238
/* 1205 */    MCD_OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 1208 */    MCD_OPC_FilterValue, 0, 74, 18, 0, // Skip to: 5895
/* 1213 */    MCD_OPC_CheckPredicate, 3, 11, 0, 0, // Skip to: 1229
/* 1218 */    MCD_OPC_CheckField, 16, 10, 0, 4, 0, 0, // Skip to: 1229
/* 1225 */    MCD_OPC_Decode, 214, 4, 0, // Opcode: SETC32
/* 1229 */    MCD_OPC_CheckPredicate, 3, 53, 18, 0, // Skip to: 5895
/* 1234 */    MCD_OPC_Decode, 244, 2, 31, // Opcode: CMPHS32
/* 1238 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 1259
/* 1243 */    MCD_OPC_CheckPredicate, 3, 39, 18, 0, // Skip to: 5895
/* 1248 */    MCD_OPC_CheckField, 0, 5, 0, 32, 18, 0, // Skip to: 5895
/* 1255 */    MCD_OPC_Decode, 248, 2, 31, // Opcode: CMPLT32
/* 1259 */    MCD_OPC_FilterValue, 4, 33, 0, 0, // Skip to: 1297
/* 1264 */    MCD_OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 1267 */    MCD_OPC_FilterValue, 0, 15, 18, 0, // Skip to: 5895
/* 1272 */    MCD_OPC_CheckPredicate, 3, 11, 0, 0, // Skip to: 1288
/* 1277 */    MCD_OPC_CheckField, 16, 10, 0, 4, 0, 0, // Skip to: 1288
/* 1284 */    MCD_OPC_Decode, 240, 2, 0, // Opcode: CLRC32
/* 1288 */    MCD_OPC_CheckPredicate, 3, 250, 17, 0, // Skip to: 5895
/* 1293 */    MCD_OPC_Decode, 252, 2, 31, // Opcode: CMPNE32
/* 1297 */    MCD_OPC_FilterValue, 8, 16, 0, 0, // Skip to: 1318
/* 1302 */    MCD_OPC_CheckPredicate, 7, 236, 17, 0, // Skip to: 5895
/* 1307 */    MCD_OPC_CheckField, 16, 10, 0, 229, 17, 0, // Skip to: 5895
/* 1314 */    MCD_OPC_Decode, 184, 4, 32, // Opcode: MVC32
/* 1318 */    MCD_OPC_FilterValue, 16, 220, 17, 0, // Skip to: 5895
/* 1323 */    MCD_OPC_CheckPredicate, 3, 215, 17, 0, // Skip to: 5895
/* 1328 */    MCD_OPC_CheckField, 16, 10, 0, 208, 17, 0, // Skip to: 5895
/* 1335 */    MCD_OPC_Decode, 186, 4, 32, // Opcode: MVCV32
/* 1339 */    MCD_OPC_FilterValue, 2, 45, 0, 0, // Skip to: 1389
/* 1344 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1347 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1361
/* 1352 */    MCD_OPC_CheckPredicate, 7, 186, 17, 0, // Skip to: 5895
/* 1357 */    MCD_OPC_Decode, 249, 3, 29, // Opcode: IXH32
/* 1361 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1375
/* 1366 */    MCD_OPC_CheckPredicate, 7, 172, 17, 0, // Skip to: 5895
/* 1371 */    MCD_OPC_Decode, 250, 3, 29, // Opcode: IXW32
/* 1375 */    MCD_OPC_FilterValue, 4, 163, 17, 0, // Skip to: 5895
/* 1380 */    MCD_OPC_CheckPredicate, 3, 158, 17, 0, // Skip to: 5895
/* 1385 */    MCD_OPC_Decode, 248, 3, 29, // Opcode: IXD32
/* 1389 */    MCD_OPC_FilterValue, 3, 59, 0, 0, // Skip to: 1453
/* 1394 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1397 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1411
/* 1402 */    MCD_OPC_CheckPredicate, 7, 136, 17, 0, // Skip to: 5895
/* 1407 */    MCD_OPC_Decode, 243, 3, 33, // Opcode: INCF32
/* 1411 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1425
/* 1416 */    MCD_OPC_CheckPredicate, 7, 122, 17, 0, // Skip to: 5895
/* 1421 */    MCD_OPC_Decode, 244, 3, 33, // Opcode: INCT32
/* 1425 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 1439
/* 1430 */    MCD_OPC_CheckPredicate, 7, 108, 17, 0, // Skip to: 5895
/* 1435 */    MCD_OPC_Decode, 143, 3, 33, // Opcode: DECF32
/* 1439 */    MCD_OPC_FilterValue, 8, 99, 17, 0, // Skip to: 5895
/* 1444 */    MCD_OPC_CheckPredicate, 7, 94, 17, 0, // Skip to: 5895
/* 1449 */    MCD_OPC_Decode, 147, 3, 33, // Opcode: DECT32
/* 1453 */    MCD_OPC_FilterValue, 4, 45, 0, 0, // Skip to: 1503
/* 1458 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1461 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1475
/* 1466 */    MCD_OPC_CheckPredicate, 3, 72, 17, 0, // Skip to: 5895
/* 1471 */    MCD_OPC_Decode, 144, 3, 34, // Opcode: DECGT32
/* 1475 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1489
/* 1480 */    MCD_OPC_CheckPredicate, 3, 58, 17, 0, // Skip to: 5895
/* 1485 */    MCD_OPC_Decode, 145, 3, 34, // Opcode: DECLT32
/* 1489 */    MCD_OPC_FilterValue, 4, 49, 17, 0, // Skip to: 5895
/* 1494 */    MCD_OPC_CheckPredicate, 3, 44, 17, 0, // Skip to: 5895
/* 1499 */    MCD_OPC_Decode, 146, 3, 34, // Opcode: DECNE32
/* 1503 */    MCD_OPC_FilterValue, 8, 80, 0, 0, // Skip to: 1588
/* 1508 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1511 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1525
/* 1516 */    MCD_OPC_CheckPredicate, 7, 22, 17, 0, // Skip to: 5895
/* 1521 */    MCD_OPC_Decode, 190, 2, 29, // Opcode: AND32
/* 1525 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1539
/* 1530 */    MCD_OPC_CheckPredicate, 7, 8, 17, 0, // Skip to: 5895
/* 1535 */    MCD_OPC_Decode, 193, 2, 29, // Opcode: ANDN32
/* 1539 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 1560
/* 1544 */    MCD_OPC_CheckPredicate, 3, 250, 16, 0, // Skip to: 5895
/* 1549 */    MCD_OPC_CheckField, 0, 5, 0, 243, 16, 0, // Skip to: 5895
/* 1556 */    MCD_OPC_Decode, 133, 5, 31, // Opcode: TST32
/* 1560 */    MCD_OPC_FilterValue, 8, 234, 16, 0, // Skip to: 5895
/* 1565 */    MCD_OPC_CheckPredicate, 3, 229, 16, 0, // Skip to: 5895
/* 1570 */    MCD_OPC_CheckField, 21, 5, 0, 222, 16, 0, // Skip to: 5895
/* 1577 */    MCD_OPC_CheckField, 0, 5, 0, 215, 16, 0, // Skip to: 5895
/* 1584 */    MCD_OPC_Decode, 135, 5, 28, // Opcode: TSTNBZ32
/* 1588 */    MCD_OPC_FilterValue, 9, 45, 0, 0, // Skip to: 1638
/* 1593 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1596 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1610
/* 1601 */    MCD_OPC_CheckPredicate, 7, 193, 16, 0, // Skip to: 5895
/* 1606 */    MCD_OPC_Decode, 194, 4, 29, // Opcode: OR32
/* 1610 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1624
/* 1615 */    MCD_OPC_CheckPredicate, 7, 179, 16, 0, // Skip to: 5895
/* 1620 */    MCD_OPC_Decode, 140, 5, 29, // Opcode: XOR32
/* 1624 */    MCD_OPC_FilterValue, 4, 170, 16, 0, // Skip to: 5895
/* 1629 */    MCD_OPC_CheckPredicate, 7, 165, 16, 0, // Skip to: 5895
/* 1634 */    MCD_OPC_Decode, 190, 4, 29, // Opcode: NOR32
/* 1638 */    MCD_OPC_FilterValue, 10, 52, 0, 0, // Skip to: 1695
/* 1643 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1646 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1660
/* 1651 */    MCD_OPC_CheckPredicate, 7, 143, 16, 0, // Skip to: 5895
/* 1656 */    MCD_OPC_Decode, 201, 2, 34, // Opcode: BCLRI32
/* 1660 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1674
/* 1665 */    MCD_OPC_CheckPredicate, 7, 129, 16, 0, // Skip to: 5895
/* 1670 */    MCD_OPC_Decode, 230, 2, 34, // Opcode: BSETI32
/* 1674 */    MCD_OPC_FilterValue, 4, 120, 16, 0, // Skip to: 5895
/* 1679 */    MCD_OPC_CheckPredicate, 7, 115, 16, 0, // Skip to: 5895
/* 1684 */    MCD_OPC_CheckField, 0, 5, 0, 108, 16, 0, // Skip to: 5895
/* 1691 */    MCD_OPC_Decode, 236, 2, 35, // Opcode: BTSTI32
/* 1695 */    MCD_OPC_FilterValue, 11, 45, 0, 0, // Skip to: 1745
/* 1700 */    MCD_OPC_ExtractField, 0, 10,  // Inst{9-0} ...
/* 1703 */    MCD_OPC_FilterValue, 32, 16, 0, 0, // Skip to: 1724
/* 1708 */    MCD_OPC_CheckPredicate, 3, 86, 16, 0, // Skip to: 5895
/* 1713 */    MCD_OPC_CheckField, 16, 5, 0, 79, 16, 0, // Skip to: 5895
/* 1720 */    MCD_OPC_Decode, 241, 2, 36, // Opcode: CLRF32
/* 1724 */    MCD_OPC_FilterValue, 64, 70, 16, 0, // Skip to: 5895
/* 1729 */    MCD_OPC_CheckPredicate, 3, 65, 16, 0, // Skip to: 5895
/* 1734 */    MCD_OPC_CheckField, 16, 5, 0, 58, 16, 0, // Skip to: 5895
/* 1741 */    MCD_OPC_Decode, 242, 2, 36, // Opcode: CLRT32
/* 1745 */    MCD_OPC_FilterValue, 16, 59, 0, 0, // Skip to: 1809
/* 1750 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1753 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1767
/* 1758 */    MCD_OPC_CheckPredicate, 7, 36, 16, 0, // Skip to: 5895
/* 1763 */    MCD_OPC_Decode, 158, 4, 29, // Opcode: LSL32
/* 1767 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1781
/* 1772 */    MCD_OPC_CheckPredicate, 7, 22, 16, 0, // Skip to: 5895
/* 1777 */    MCD_OPC_Decode, 163, 4, 29, // Opcode: LSR32
/* 1781 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 1795
/* 1786 */    MCD_OPC_CheckPredicate, 7, 8, 16, 0, // Skip to: 5895
/* 1791 */    MCD_OPC_Decode, 196, 2, 29, // Opcode: ASR32
/* 1795 */    MCD_OPC_FilterValue, 8, 255, 15, 0, // Skip to: 5895
/* 1800 */    MCD_OPC_CheckPredicate, 7, 250, 15, 0, // Skip to: 5895
/* 1805 */    MCD_OPC_Decode, 208, 4, 29, // Opcode: ROTL32
/* 1809 */    MCD_OPC_FilterValue, 18, 59, 0, 0, // Skip to: 1873
/* 1814 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1817 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1831
/* 1822 */    MCD_OPC_CheckPredicate, 7, 228, 15, 0, // Skip to: 5895
/* 1827 */    MCD_OPC_Decode, 161, 4, 34, // Opcode: LSLI32
/* 1831 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1845
/* 1836 */    MCD_OPC_CheckPredicate, 7, 214, 15, 0, // Skip to: 5895
/* 1841 */    MCD_OPC_Decode, 166, 4, 34, // Opcode: LSRI32
/* 1845 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 1859
/* 1850 */    MCD_OPC_CheckPredicate, 7, 200, 15, 0, // Skip to: 5895
/* 1855 */    MCD_OPC_Decode, 199, 2, 34, // Opcode: ASRI32
/* 1859 */    MCD_OPC_FilterValue, 8, 191, 15, 0, // Skip to: 5895
/* 1864 */    MCD_OPC_CheckPredicate, 7, 186, 15, 0, // Skip to: 5895
/* 1869 */    MCD_OPC_Decode, 209, 4, 34, // Opcode: ROTLI32
/* 1873 */    MCD_OPC_FilterValue, 19, 59, 0, 0, // Skip to: 1937
/* 1878 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1881 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1895
/* 1886 */    MCD_OPC_CheckPredicate, 7, 164, 15, 0, // Skip to: 5895
/* 1891 */    MCD_OPC_Decode, 159, 4, 37, // Opcode: LSLC32
/* 1895 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1909
/* 1900 */    MCD_OPC_CheckPredicate, 7, 150, 15, 0, // Skip to: 5895
/* 1905 */    MCD_OPC_Decode, 164, 4, 37, // Opcode: LSRC32
/* 1909 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 1923
/* 1914 */    MCD_OPC_CheckPredicate, 7, 136, 15, 0, // Skip to: 5895
/* 1919 */    MCD_OPC_Decode, 197, 2, 37, // Opcode: ASRC32
/* 1923 */    MCD_OPC_FilterValue, 8, 127, 15, 0, // Skip to: 5895
/* 1928 */    MCD_OPC_CheckPredicate, 7, 122, 15, 0, // Skip to: 5895
/* 1933 */    MCD_OPC_Decode, 142, 5, 37, // Opcode: XSR32
/* 1937 */    MCD_OPC_FilterValue, 20, 45, 0, 0, // Skip to: 1987
/* 1942 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 1945 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 1966
/* 1950 */    MCD_OPC_CheckPredicate, 7, 100, 15, 0, // Skip to: 5895
/* 1955 */    MCD_OPC_CheckField, 16, 5, 0, 93, 15, 0, // Skip to: 5895
/* 1962 */    MCD_OPC_Decode, 211, 2, 38, // Opcode: BMASKI32
/* 1966 */    MCD_OPC_FilterValue, 2, 84, 15, 0, // Skip to: 5895
/* 1971 */    MCD_OPC_CheckPredicate, 3, 79, 15, 0, // Skip to: 5895
/* 1976 */    MCD_OPC_CheckField, 21, 5, 0, 72, 15, 0, // Skip to: 5895
/* 1983 */    MCD_OPC_Decode, 205, 2, 30, // Opcode: BGENR32
/* 1987 */    MCD_OPC_FilterValue, 21, 9, 0, 0, // Skip to: 2001
/* 1992 */    MCD_OPC_CheckPredicate, 3, 58, 15, 0, // Skip to: 5895
/* 1997 */    MCD_OPC_Decode, 147, 5, 39, // Opcode: ZEXT32
/* 2001 */    MCD_OPC_FilterValue, 22, 9, 0, 0, // Skip to: 2015
/* 2006 */    MCD_OPC_CheckPredicate, 3, 44, 15, 0, // Skip to: 5895
/* 2011 */    MCD_OPC_Decode, 215, 4, 39, // Opcode: SEXT32
/* 2015 */    MCD_OPC_FilterValue, 23, 9, 0, 0, // Skip to: 2029
/* 2020 */    MCD_OPC_CheckPredicate, 3, 30, 15, 0, // Skip to: 5895
/* 2025 */    MCD_OPC_Decode, 245, 3, 40, // Opcode: INS32
/* 2029 */    MCD_OPC_FilterValue, 24, 66, 0, 0, // Skip to: 2100
/* 2034 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 2037 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 2058
/* 2042 */    MCD_OPC_CheckPredicate, 3, 8, 15, 0, // Skip to: 5895
/* 2047 */    MCD_OPC_CheckField, 21, 5, 0, 1, 15, 0, // Skip to: 5895
/* 2054 */    MCD_OPC_Decode, 203, 4, 30, // Opcode: REVB32
/* 2058 */    MCD_OPC_FilterValue, 8, 16, 0, 0, // Skip to: 2079
/* 2063 */    MCD_OPC_CheckPredicate, 3, 243, 14, 0, // Skip to: 5895
/* 2068 */    MCD_OPC_CheckField, 21, 5, 0, 236, 14, 0, // Skip to: 5895
/* 2075 */    MCD_OPC_Decode, 205, 4, 30, // Opcode: REVH32
/* 2079 */    MCD_OPC_FilterValue, 16, 227, 14, 0, // Skip to: 5895
/* 2084 */    MCD_OPC_CheckPredicate, 3, 222, 14, 0, // Skip to: 5895
/* 2089 */    MCD_OPC_CheckField, 21, 5, 0, 215, 14, 0, // Skip to: 5895
/* 2096 */    MCD_OPC_Decode, 224, 2, 30, // Opcode: BREV32
/* 2100 */    MCD_OPC_FilterValue, 28, 87, 0, 0, // Skip to: 2192
/* 2105 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 2108 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 2129
/* 2113 */    MCD_OPC_CheckPredicate, 7, 193, 14, 0, // Skip to: 5895
/* 2118 */    MCD_OPC_CheckField, 21, 5, 0, 186, 14, 0, // Skip to: 5895
/* 2125 */    MCD_OPC_Decode, 143, 5, 30, // Opcode: XTRB0
/* 2129 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2150
/* 2134 */    MCD_OPC_CheckPredicate, 7, 172, 14, 0, // Skip to: 5895
/* 2139 */    MCD_OPC_CheckField, 21, 5, 0, 165, 14, 0, // Skip to: 5895
/* 2146 */    MCD_OPC_Decode, 144, 5, 30, // Opcode: XTRB1
/* 2150 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 2171
/* 2155 */    MCD_OPC_CheckPredicate, 7, 151, 14, 0, // Skip to: 5895
/* 2160 */    MCD_OPC_CheckField, 21, 5, 0, 144, 14, 0, // Skip to: 5895
/* 2167 */    MCD_OPC_Decode, 145, 5, 30, // Opcode: XTRB2
/* 2171 */    MCD_OPC_FilterValue, 8, 135, 14, 0, // Skip to: 5895
/* 2176 */    MCD_OPC_CheckPredicate, 7, 130, 14, 0, // Skip to: 5895
/* 2181 */    MCD_OPC_CheckField, 21, 5, 0, 123, 14, 0, // Skip to: 5895
/* 2188 */    MCD_OPC_Decode, 146, 5, 30, // Opcode: XTRB3
/* 2192 */    MCD_OPC_FilterValue, 31, 45, 0, 0, // Skip to: 2242
/* 2197 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 2200 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 2221
/* 2205 */    MCD_OPC_CheckPredicate, 7, 101, 14, 0, // Skip to: 5895
/* 2210 */    MCD_OPC_CheckField, 21, 5, 0, 94, 14, 0, // Skip to: 5895
/* 2217 */    MCD_OPC_Decode, 176, 3, 30, // Opcode: FF0
/* 2221 */    MCD_OPC_FilterValue, 2, 85, 14, 0, // Skip to: 5895
/* 2226 */    MCD_OPC_CheckPredicate, 7, 80, 14, 0, // Skip to: 5895
/* 2231 */    MCD_OPC_CheckField, 21, 5, 0, 73, 14, 0, // Skip to: 5895
/* 2238 */    MCD_OPC_Decode, 177, 3, 30, // Opcode: FF1
/* 2242 */    MCD_OPC_FilterValue, 32, 31, 0, 0, // Skip to: 2278
/* 2247 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 2250 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 2264
/* 2255 */    MCD_OPC_CheckPredicate, 3, 51, 14, 0, // Skip to: 5895
/* 2260 */    MCD_OPC_Decode, 149, 3, 29, // Opcode: DIVU32
/* 2264 */    MCD_OPC_FilterValue, 2, 42, 14, 0, // Skip to: 5895
/* 2269 */    MCD_OPC_CheckPredicate, 3, 37, 14, 0, // Skip to: 5895
/* 2274 */    MCD_OPC_Decode, 148, 3, 29, // Opcode: DIVS32
/* 2278 */    MCD_OPC_FilterValue, 33, 16, 0, 0, // Skip to: 2299
/* 2283 */    MCD_OPC_CheckPredicate, 7, 23, 14, 0, // Skip to: 5895
/* 2288 */    MCD_OPC_CheckField, 5, 5, 1, 16, 14, 0, // Skip to: 5895
/* 2295 */    MCD_OPC_Decode, 181, 4, 29, // Opcode: MULT32
/* 2299 */    MCD_OPC_FilterValue, 36, 7, 14, 0, // Skip to: 5895
/* 2304 */    MCD_OPC_CheckField, 5, 5, 1, 0, 14, 0, // Skip to: 5895
/* 2311 */    MCD_OPC_Decode, 179, 4, 29, // Opcode: MULSH32
/* 2315 */    MCD_OPC_FilterValue, 51, 101, 0, 0, // Skip to: 2421
/* 2320 */    MCD_OPC_ExtractField, 18, 3,  // Inst{20-18} ...
/* 2323 */    MCD_OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2337
/* 2328 */    MCD_OPC_CheckPredicate, 3, 234, 13, 0, // Skip to: 5895
/* 2333 */    MCD_OPC_Decode, 150, 4, 41, // Opcode: LRS32B
/* 2337 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 2351
/* 2342 */    MCD_OPC_CheckPredicate, 3, 220, 13, 0, // Skip to: 5895
/* 2347 */    MCD_OPC_Decode, 151, 4, 42, // Opcode: LRS32H
/* 2351 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2365
/* 2356 */    MCD_OPC_CheckPredicate, 3, 206, 13, 0, // Skip to: 5895
/* 2361 */    MCD_OPC_Decode, 152, 4, 43, // Opcode: LRS32W
/* 2365 */    MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 2379
/* 2370 */    MCD_OPC_CheckPredicate, 3, 192, 13, 0, // Skip to: 5895
/* 2375 */    MCD_OPC_Decode, 238, 3, 44, // Opcode: GRS32
/* 2379 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 2393
/* 2384 */    MCD_OPC_CheckPredicate, 3, 178, 13, 0, // Skip to: 5895
/* 2389 */    MCD_OPC_Decode, 220, 4, 41, // Opcode: SRS32B
/* 2393 */    MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 2407
/* 2398 */    MCD_OPC_CheckPredicate, 3, 164, 13, 0, // Skip to: 5895
/* 2403 */    MCD_OPC_Decode, 221, 4, 42, // Opcode: SRS32H
/* 2407 */    MCD_OPC_FilterValue, 6, 155, 13, 0, // Skip to: 5895
/* 2412 */    MCD_OPC_CheckPredicate, 3, 150, 13, 0, // Skip to: 5895
/* 2417 */    MCD_OPC_Decode, 222, 4, 43, // Opcode: SRS32W
/* 2421 */    MCD_OPC_FilterValue, 52, 94, 0, 0, // Skip to: 2520
/* 2426 */    MCD_OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 2429 */    MCD_OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2443
/* 2434 */    MCD_OPC_CheckPredicate, 3, 128, 13, 0, // Skip to: 5895
/* 2439 */    MCD_OPC_Decode, 145, 4, 45, // Opcode: LDR32B
/* 2443 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 2457
/* 2448 */    MCD_OPC_CheckPredicate, 3, 114, 13, 0, // Skip to: 5895
/* 2453 */    MCD_OPC_Decode, 147, 4, 45, // Opcode: LDR32H
/* 2457 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2471
/* 2462 */    MCD_OPC_CheckPredicate, 3, 100, 13, 0, // Skip to: 5895
/* 2467 */    MCD_OPC_Decode, 149, 4, 45, // Opcode: LDR32W
/* 2471 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 2485
/* 2476 */    MCD_OPC_CheckPredicate, 3, 86, 13, 0, // Skip to: 5895
/* 2481 */    MCD_OPC_Decode, 146, 4, 45, // Opcode: LDR32BS
/* 2485 */    MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 2499
/* 2490 */    MCD_OPC_CheckPredicate, 3, 72, 13, 0, // Skip to: 5895
/* 2495 */    MCD_OPC_Decode, 148, 4, 45, // Opcode: LDR32HS
/* 2499 */    MCD_OPC_FilterValue, 7, 63, 13, 0, // Skip to: 5895
/* 2504 */    MCD_OPC_CheckPredicate, 7, 58, 13, 0, // Skip to: 5895
/* 2509 */    MCD_OPC_CheckField, 5, 5, 1, 51, 13, 0, // Skip to: 5895
/* 2516 */    MCD_OPC_Decode, 144, 4, 46, // Opcode: LDM32
/* 2520 */    MCD_OPC_FilterValue, 53, 66, 0, 0, // Skip to: 2591
/* 2525 */    MCD_OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 2528 */    MCD_OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2542
/* 2533 */    MCD_OPC_CheckPredicate, 3, 29, 13, 0, // Skip to: 5895
/* 2538 */    MCD_OPC_Decode, 234, 4, 45, // Opcode: STR32B
/* 2542 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 2556
/* 2547 */    MCD_OPC_CheckPredicate, 3, 15, 13, 0, // Skip to: 5895
/* 2552 */    MCD_OPC_Decode, 235, 4, 45, // Opcode: STR32H
/* 2556 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2570
/* 2561 */    MCD_OPC_CheckPredicate, 3, 1, 13, 0, // Skip to: 5895
/* 2566 */    MCD_OPC_Decode, 236, 4, 45, // Opcode: STR32W
/* 2570 */    MCD_OPC_FilterValue, 7, 248, 12, 0, // Skip to: 5895
/* 2575 */    MCD_OPC_CheckPredicate, 7, 243, 12, 0, // Skip to: 5895
/* 2580 */    MCD_OPC_CheckField, 5, 5, 1, 236, 12, 0, // Skip to: 5895
/* 2587 */    MCD_OPC_Decode, 232, 4, 46, // Opcode: STM32
/* 2591 */    MCD_OPC_FilterValue, 54, 97, 0, 0, // Skip to: 2693
/* 2596 */    MCD_OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2599 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2608
/* 2604 */    MCD_OPC_Decode, 137, 4, 47, // Opcode: LD32B
/* 2608 */    MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 2617
/* 2613 */    MCD_OPC_Decode, 140, 4, 48, // Opcode: LD32H
/* 2617 */    MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 2626
/* 2622 */    MCD_OPC_Decode, 142, 4, 49, // Opcode: LD32W
/* 2626 */    MCD_OPC_FilterValue, 3, 4, 0, 0, // Skip to: 2635
/* 2631 */    MCD_OPC_Decode, 139, 4, 50, // Opcode: LD32D
/* 2635 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 2649
/* 2640 */    MCD_OPC_CheckPredicate, 7, 178, 12, 0, // Skip to: 5895
/* 2645 */    MCD_OPC_Decode, 138, 4, 47, // Opcode: LD32BS
/* 2649 */    MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 2663
/* 2654 */    MCD_OPC_CheckPredicate, 7, 164, 12, 0, // Skip to: 5895
/* 2659 */    MCD_OPC_Decode, 141, 4, 48, // Opcode: LD32HS
/* 2663 */    MCD_OPC_FilterValue, 6, 11, 0, 0, // Skip to: 2679
/* 2668 */    MCD_OPC_CheckField, 21, 5, 0, 148, 12, 0, // Skip to: 5895
/* 2675 */    MCD_OPC_Decode, 196, 4, 51, // Opcode: PLDR32
/* 2679 */    MCD_OPC_FilterValue, 7, 139, 12, 0, // Skip to: 5895
/* 2684 */    MCD_OPC_CheckPredicate, 5, 134, 12, 0, // Skip to: 5895
/* 2689 */    MCD_OPC_Decode, 143, 4, 49, // Opcode: LDEX32W
/* 2693 */    MCD_OPC_FilterValue, 55, 69, 0, 0, // Skip to: 2767
/* 2698 */    MCD_OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2701 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2710
/* 2706 */    MCD_OPC_Decode, 227, 4, 47, // Opcode: ST32B
/* 2710 */    MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 2719
/* 2715 */    MCD_OPC_Decode, 229, 4, 48, // Opcode: ST32H
/* 2719 */    MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 2728
/* 2724 */    MCD_OPC_Decode, 230, 4, 49, // Opcode: ST32W
/* 2728 */    MCD_OPC_FilterValue, 3, 4, 0, 0, // Skip to: 2737
/* 2733 */    MCD_OPC_Decode, 228, 4, 50, // Opcode: ST32D
/* 2737 */    MCD_OPC_FilterValue, 6, 11, 0, 0, // Skip to: 2753
/* 2742 */    MCD_OPC_CheckField, 21, 5, 0, 74, 12, 0, // Skip to: 5895
/* 2749 */    MCD_OPC_Decode, 197, 4, 51, // Opcode: PLDW32
/* 2753 */    MCD_OPC_FilterValue, 7, 65, 12, 0, // Skip to: 5895
/* 2758 */    MCD_OPC_CheckPredicate, 5, 60, 12, 0, // Skip to: 5895
/* 2763 */    MCD_OPC_Decode, 231, 4, 52, // Opcode: STEX32W
/* 2767 */    MCD_OPC_FilterValue, 56, 4, 0, 0, // Skip to: 2776
/* 2772 */    MCD_OPC_Decode, 231, 2, 53, // Opcode: BSR32
/* 2776 */    MCD_OPC_FilterValue, 57, 73, 0, 0, // Skip to: 2854
/* 2781 */    MCD_OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2784 */    MCD_OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2798
/* 2789 */    MCD_OPC_CheckPredicate, 7, 29, 12, 0, // Skip to: 5895
/* 2794 */    MCD_OPC_Decode, 185, 2, 54, // Opcode: ADDI32
/* 2798 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 2812
/* 2803 */    MCD_OPC_CheckPredicate, 7, 15, 12, 0, // Skip to: 5895
/* 2808 */    MCD_OPC_Decode, 242, 4, 54, // Opcode: SUBI32
/* 2812 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2826
/* 2817 */    MCD_OPC_CheckPredicate, 7, 1, 12, 0, // Skip to: 5895
/* 2822 */    MCD_OPC_Decode, 191, 2, 47, // Opcode: ANDI32
/* 2826 */    MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 2840
/* 2831 */    MCD_OPC_CheckPredicate, 7, 243, 11, 0, // Skip to: 5895
/* 2836 */    MCD_OPC_Decode, 194, 2, 55, // Opcode: ANDNI32
/* 2840 */    MCD_OPC_FilterValue, 4, 234, 11, 0, // Skip to: 5895
/* 2845 */    MCD_OPC_CheckPredicate, 7, 229, 11, 0, // Skip to: 5895
/* 2850 */    MCD_OPC_Decode, 141, 5, 47, // Opcode: XORI32
/* 2854 */    MCD_OPC_FilterValue, 58, 108, 1, 0, // Skip to: 3223
/* 2859 */    MCD_OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 2862 */    MCD_OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2878
/* 2867 */    MCD_OPC_CheckField, 16, 5, 0, 205, 11, 0, // Skip to: 5895
/* 2874 */    MCD_OPC_Decode, 219, 2, 56, // Opcode: BR32
/* 2878 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 2892
/* 2883 */    MCD_OPC_CheckPredicate, 8, 191, 11, 0, // Skip to: 5895
/* 2888 */    MCD_OPC_Decode, 213, 2, 57, // Opcode: BNEZAD32
/* 2892 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2913
/* 2897 */    MCD_OPC_CheckPredicate, 7, 177, 11, 0, // Skip to: 5895
/* 2902 */    MCD_OPC_CheckField, 16, 5, 0, 170, 11, 0, // Skip to: 5895
/* 2909 */    MCD_OPC_Decode, 204, 2, 56, // Opcode: BF32
/* 2913 */    MCD_OPC_FilterValue, 3, 16, 0, 0, // Skip to: 2934
/* 2918 */    MCD_OPC_CheckPredicate, 7, 156, 11, 0, // Skip to: 5895
/* 2923 */    MCD_OPC_CheckField, 16, 5, 0, 149, 11, 0, // Skip to: 5895
/* 2930 */    MCD_OPC_Decode, 234, 2, 56, // Opcode: BT32
/* 2934 */    MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 2955
/* 2939 */    MCD_OPC_CheckPredicate, 3, 135, 11, 0, // Skip to: 5895
/* 2944 */    MCD_OPC_CheckField, 0, 16, 0, 128, 11, 0, // Skip to: 5895
/* 2951 */    MCD_OPC_Decode, 252, 3, 28, // Opcode: JMP32
/* 2955 */    MCD_OPC_FilterValue, 7, 16, 0, 0, // Skip to: 2976
/* 2960 */    MCD_OPC_CheckPredicate, 3, 114, 11, 0, // Skip to: 5895
/* 2965 */    MCD_OPC_CheckField, 0, 16, 0, 107, 11, 0, // Skip to: 5895
/* 2972 */    MCD_OPC_Decode, 128, 4, 28, // Opcode: JSR32
/* 2976 */    MCD_OPC_FilterValue, 8, 9, 0, 0, // Skip to: 2990
/* 2981 */    MCD_OPC_CheckPredicate, 3, 93, 11, 0, // Skip to: 5895
/* 2986 */    MCD_OPC_Decode, 202, 2, 58, // Opcode: BEZ32
/* 2990 */    MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 3004
/* 2995 */    MCD_OPC_CheckPredicate, 3, 79, 11, 0, // Skip to: 5895
/* 3000 */    MCD_OPC_Decode, 212, 2, 58, // Opcode: BNEZ32
/* 3004 */    MCD_OPC_FilterValue, 10, 9, 0, 0, // Skip to: 3018
/* 3009 */    MCD_OPC_CheckPredicate, 3, 65, 11, 0, // Skip to: 5895
/* 3014 */    MCD_OPC_Decode, 207, 2, 58, // Opcode: BHZ32
/* 3018 */    MCD_OPC_FilterValue, 11, 9, 0, 0, // Skip to: 3032
/* 3023 */    MCD_OPC_CheckPredicate, 3, 51, 11, 0, // Skip to: 5895
/* 3028 */    MCD_OPC_Decode, 209, 2, 58, // Opcode: BLSZ32
/* 3032 */    MCD_OPC_FilterValue, 12, 9, 0, 0, // Skip to: 3046
/* 3037 */    MCD_OPC_CheckPredicate, 3, 37, 11, 0, // Skip to: 5895
/* 3042 */    MCD_OPC_Decode, 210, 2, 58, // Opcode: BLZ32
/* 3046 */    MCD_OPC_FilterValue, 13, 9, 0, 0, // Skip to: 3060
/* 3051 */    MCD_OPC_CheckPredicate, 3, 23, 11, 0, // Skip to: 5895
/* 3056 */    MCD_OPC_Decode, 206, 2, 58, // Opcode: BHSZ32
/* 3060 */    MCD_OPC_FilterValue, 16, 9, 0, 0, // Skip to: 3074
/* 3065 */    MCD_OPC_CheckPredicate, 7, 9, 11, 0, // Skip to: 5895
/* 3070 */    MCD_OPC_Decode, 172, 4, 59, // Opcode: MOVI32
/* 3074 */    MCD_OPC_FilterValue, 17, 9, 0, 0, // Skip to: 3088
/* 3079 */    MCD_OPC_CheckPredicate, 7, 251, 10, 0, // Skip to: 5895
/* 3084 */    MCD_OPC_Decode, 173, 4, 60, // Opcode: MOVIH32
/* 3088 */    MCD_OPC_FilterValue, 20, 4, 0, 0, // Skip to: 3097
/* 3093 */    MCD_OPC_Decode, 155, 4, 61, // Opcode: LRW32
/* 3097 */    MCD_OPC_FilterValue, 22, 16, 0, 0, // Skip to: 3118
/* 3102 */    MCD_OPC_CheckPredicate, 3, 228, 10, 0, // Skip to: 5895
/* 3107 */    MCD_OPC_CheckField, 16, 5, 0, 221, 10, 0, // Skip to: 5895
/* 3114 */    MCD_OPC_Decode, 253, 3, 62, // Opcode: JMPI32
/* 3118 */    MCD_OPC_FilterValue, 23, 16, 0, 0, // Skip to: 3139
/* 3123 */    MCD_OPC_CheckPredicate, 3, 207, 10, 0, // Skip to: 5895
/* 3128 */    MCD_OPC_CheckField, 16, 5, 0, 200, 10, 0, // Skip to: 5895
/* 3135 */    MCD_OPC_Decode, 129, 4, 62, // Opcode: JSRI32
/* 3139 */    MCD_OPC_FilterValue, 24, 9, 0, 0, // Skip to: 3153
/* 3144 */    MCD_OPC_CheckPredicate, 7, 186, 10, 0, // Skip to: 5895
/* 3149 */    MCD_OPC_Decode, 246, 2, 63, // Opcode: CMPHSI32
/* 3153 */    MCD_OPC_FilterValue, 25, 9, 0, 0, // Skip to: 3167
/* 3158 */    MCD_OPC_CheckPredicate, 7, 172, 10, 0, // Skip to: 5895
/* 3163 */    MCD_OPC_Decode, 250, 2, 63, // Opcode: CMPLTI32
/* 3167 */    MCD_OPC_FilterValue, 26, 9, 0, 0, // Skip to: 3181
/* 3172 */    MCD_OPC_CheckPredicate, 7, 158, 10, 0, // Skip to: 5895
/* 3177 */    MCD_OPC_Decode, 254, 2, 59, // Opcode: CMPNEI32
/* 3181 */    MCD_OPC_FilterValue, 30, 16, 0, 0, // Skip to: 3202
/* 3186 */    MCD_OPC_CheckPredicate, 3, 144, 10, 0, // Skip to: 5895
/* 3191 */    MCD_OPC_CheckField, 12, 9, 0, 137, 10, 0, // Skip to: 5895
/* 3198 */    MCD_OPC_Decode, 199, 4, 64, // Opcode: POP32
/* 3202 */    MCD_OPC_FilterValue, 31, 128, 10, 0, // Skip to: 5895
/* 3207 */    MCD_OPC_CheckPredicate, 3, 123, 10, 0, // Skip to: 5895
/* 3212 */    MCD_OPC_CheckField, 12, 9, 0, 116, 10, 0, // Skip to: 5895
/* 3219 */    MCD_OPC_Decode, 201, 4, 64, // Opcode: PUSH32
/* 3223 */    MCD_OPC_FilterValue, 59, 9, 0, 0, // Skip to: 3237
/* 3228 */    MCD_OPC_CheckPredicate, 7, 102, 10, 0, // Skip to: 5895
/* 3233 */    MCD_OPC_Decode, 195, 4, 65, // Opcode: ORI32
/* 3237 */    MCD_OPC_FilterValue, 61, 204, 9, 0, // Skip to: 5750
/* 3242 */    MCD_OPC_ExtractField, 8, 8,  // Inst{15-8} ...
/* 3245 */    MCD_OPC_FilterValue, 0, 122, 0, 0, // Skip to: 3372
/* 3250 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 3253 */    MCD_OPC_FilterValue, 0, 23, 0, 0, // Skip to: 3281
/* 3258 */    MCD_OPC_CheckPredicate, 9, 72, 10, 0, // Skip to: 5895
/* 3263 */    MCD_OPC_CheckField, 25, 1, 0, 65, 10, 0, // Skip to: 5895
/* 3270 */    MCD_OPC_CheckField, 20, 1, 0, 58, 10, 0, // Skip to: 5895
/* 3277 */    MCD_OPC_Decode, 156, 3, 66, // Opcode: FADD_S
/* 3281 */    MCD_OPC_FilterValue, 2, 23, 0, 0, // Skip to: 3309
/* 3286 */    MCD_OPC_CheckPredicate, 9, 44, 10, 0, // Skip to: 5895
/* 3291 */    MCD_OPC_CheckField, 25, 1, 0, 37, 10, 0, // Skip to: 5895
/* 3298 */    MCD_OPC_CheckField, 20, 1, 0, 30, 10, 0, // Skip to: 5895
/* 3305 */    MCD_OPC_Decode, 235, 3, 66, // Opcode: FSUB_S
/* 3309 */    MCD_OPC_FilterValue, 8, 16, 0, 0, // Skip to: 3330
/* 3314 */    MCD_OPC_CheckPredicate, 9, 16, 10, 0, // Skip to: 5895
/* 3319 */    MCD_OPC_CheckField, 20, 6, 0, 9, 10, 0, // Skip to: 5895
/* 3326 */    MCD_OPC_Decode, 195, 3, 67, // Opcode: FMOV_S
/* 3330 */    MCD_OPC_FilterValue, 12, 16, 0, 0, // Skip to: 3351
/* 3335 */    MCD_OPC_CheckPredicate, 9, 251, 9, 0, // Skip to: 5895
/* 3340 */    MCD_OPC_CheckField, 20, 6, 0, 244, 9, 0, // Skip to: 5895
/* 3347 */    MCD_OPC_Decode, 153, 3, 67, // Opcode: FABS_S
/* 3351 */    MCD_OPC_FilterValue, 14, 235, 9, 0, // Skip to: 5895
/* 3356 */    MCD_OPC_CheckPredicate, 9, 230, 9, 0, // Skip to: 5895
/* 3361 */    MCD_OPC_CheckField, 20, 6, 0, 223, 9, 0, // Skip to: 5895
/* 3368 */    MCD_OPC_Decode, 207, 3, 67, // Opcode: FNEG_S
/* 3372 */    MCD_OPC_FilterValue, 1, 203, 0, 0, // Skip to: 3580
/* 3377 */    MCD_OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 3380 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3401
/* 3385 */    MCD_OPC_CheckPredicate, 9, 201, 9, 0, // Skip to: 5895
/* 3390 */    MCD_OPC_CheckField, 20, 6, 0, 194, 9, 0, // Skip to: 5895
/* 3397 */    MCD_OPC_Decode, 166, 3, 68, // Opcode: FCMPZHS_S
/* 3401 */    MCD_OPC_FilterValue, 32, 16, 0, 0, // Skip to: 3422
/* 3406 */    MCD_OPC_CheckPredicate, 9, 180, 9, 0, // Skip to: 5895
/* 3411 */    MCD_OPC_CheckField, 20, 6, 0, 173, 9, 0, // Skip to: 5895
/* 3418 */    MCD_OPC_Decode, 168, 3, 68, // Opcode: FCMPZLS_S
/* 3422 */    MCD_OPC_FilterValue, 64, 16, 0, 0, // Skip to: 3443
/* 3427 */    MCD_OPC_CheckPredicate, 9, 159, 9, 0, // Skip to: 5895
/* 3432 */    MCD_OPC_CheckField, 20, 6, 0, 152, 9, 0, // Skip to: 5895
/* 3439 */    MCD_OPC_Decode, 170, 3, 68, // Opcode: FCMPZNE_S
/* 3443 */    MCD_OPC_FilterValue, 96, 16, 0, 0, // Skip to: 3464
/* 3448 */    MCD_OPC_CheckPredicate, 9, 138, 9, 0, // Skip to: 5895
/* 3453 */    MCD_OPC_CheckField, 20, 6, 0, 131, 9, 0, // Skip to: 5895
/* 3460 */    MCD_OPC_Decode, 172, 3, 68, // Opcode: FCMPZUO_S
/* 3464 */    MCD_OPC_FilterValue, 128, 1, 23, 0, 0, // Skip to: 3493
/* 3470 */    MCD_OPC_CheckPredicate, 9, 116, 9, 0, // Skip to: 5895
/* 3475 */    MCD_OPC_CheckField, 25, 1, 0, 109, 9, 0, // Skip to: 5895
/* 3482 */    MCD_OPC_CheckField, 20, 1, 0, 102, 9, 0, // Skip to: 5895
/* 3489 */    MCD_OPC_Decode, 158, 3, 69, // Opcode: FCMPHS_S
/* 3493 */    MCD_OPC_FilterValue, 160, 1, 23, 0, 0, // Skip to: 3522
/* 3499 */    MCD_OPC_CheckPredicate, 9, 87, 9, 0, // Skip to: 5895
/* 3504 */    MCD_OPC_CheckField, 25, 1, 0, 80, 9, 0, // Skip to: 5895
/* 3511 */    MCD_OPC_CheckField, 20, 1, 0, 73, 9, 0, // Skip to: 5895
/* 3518 */    MCD_OPC_Decode, 160, 3, 69, // Opcode: FCMPLT_S
/* 3522 */    MCD_OPC_FilterValue, 192, 1, 23, 0, 0, // Skip to: 3551
/* 3528 */    MCD_OPC_CheckPredicate, 9, 58, 9, 0, // Skip to: 5895
/* 3533 */    MCD_OPC_CheckField, 25, 1, 0, 51, 9, 0, // Skip to: 5895
/* 3540 */    MCD_OPC_CheckField, 20, 1, 0, 44, 9, 0, // Skip to: 5895
/* 3547 */    MCD_OPC_Decode, 162, 3, 69, // Opcode: FCMPNE_S
/* 3551 */    MCD_OPC_FilterValue, 224, 1, 34, 9, 0, // Skip to: 5895
/* 3557 */    MCD_OPC_CheckPredicate, 9, 29, 9, 0, // Skip to: 5895
/* 3562 */    MCD_OPC_CheckField, 25, 1, 0, 22, 9, 0, // Skip to: 5895
/* 3569 */    MCD_OPC_CheckField, 20, 1, 0, 15, 9, 0, // Skip to: 5895
/* 3576 */    MCD_OPC_Decode, 164, 3, 69, // Opcode: FCMPUO_S
/* 3580 */    MCD_OPC_FilterValue, 2, 171, 0, 0, // Skip to: 3756
/* 3585 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 3588 */    MCD_OPC_FilterValue, 0, 23, 0, 0, // Skip to: 3616
/* 3593 */    MCD_OPC_CheckPredicate, 9, 249, 8, 0, // Skip to: 5895
/* 3598 */    MCD_OPC_CheckField, 25, 1, 0, 242, 8, 0, // Skip to: 5895
/* 3605 */    MCD_OPC_CheckField, 20, 1, 0, 235, 8, 0, // Skip to: 5895
/* 3612 */    MCD_OPC_Decode, 204, 3, 66, // Opcode: FMUL_S
/* 3616 */    MCD_OPC_FilterValue, 2, 23, 0, 0, // Skip to: 3644
/* 3621 */    MCD_OPC_CheckPredicate, 9, 221, 8, 0, // Skip to: 5895
/* 3626 */    MCD_OPC_CheckField, 25, 1, 0, 214, 8, 0, // Skip to: 5895
/* 3633 */    MCD_OPC_CheckField, 20, 1, 0, 207, 8, 0, // Skip to: 5895
/* 3640 */    MCD_OPC_Decode, 216, 3, 66, // Opcode: FNMUL_S
/* 3644 */    MCD_OPC_FilterValue, 8, 23, 0, 0, // Skip to: 3672
/* 3649 */    MCD_OPC_CheckPredicate, 9, 193, 8, 0, // Skip to: 5895
/* 3654 */    MCD_OPC_CheckField, 25, 1, 0, 186, 8, 0, // Skip to: 5895
/* 3661 */    MCD_OPC_CheckField, 20, 1, 0, 179, 8, 0, // Skip to: 5895
/* 3668 */    MCD_OPC_Decode, 189, 3, 70, // Opcode: FMAC_S
/* 3672 */    MCD_OPC_FilterValue, 10, 23, 0, 0, // Skip to: 3700
/* 3677 */    MCD_OPC_CheckPredicate, 9, 165, 8, 0, // Skip to: 5895
/* 3682 */    MCD_OPC_CheckField, 25, 1, 0, 158, 8, 0, // Skip to: 5895
/* 3689 */    MCD_OPC_CheckField, 20, 1, 0, 151, 8, 0, // Skip to: 5895
/* 3696 */    MCD_OPC_Decode, 198, 3, 70, // Opcode: FMSC_S
/* 3700 */    MCD_OPC_FilterValue, 12, 23, 0, 0, // Skip to: 3728
/* 3705 */    MCD_OPC_CheckPredicate, 9, 137, 8, 0, // Skip to: 5895
/* 3710 */    MCD_OPC_CheckField, 25, 1, 0, 130, 8, 0, // Skip to: 5895
/* 3717 */    MCD_OPC_CheckField, 20, 1, 0, 123, 8, 0, // Skip to: 5895
/* 3724 */    MCD_OPC_Decode, 210, 3, 70, // Opcode: FNMAC_S
/* 3728 */    MCD_OPC_FilterValue, 14, 114, 8, 0, // Skip to: 5895
/* 3733 */    MCD_OPC_CheckPredicate, 9, 109, 8, 0, // Skip to: 5895
/* 3738 */    MCD_OPC_CheckField, 25, 1, 0, 102, 8, 0, // Skip to: 5895
/* 3745 */    MCD_OPC_CheckField, 20, 1, 0, 95, 8, 0, // Skip to: 5895
/* 3752 */    MCD_OPC_Decode, 213, 3, 70, // Opcode: FNMSC_S
/* 3756 */    MCD_OPC_FilterValue, 3, 73, 0, 0, // Skip to: 3834
/* 3761 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 3764 */    MCD_OPC_FilterValue, 0, 23, 0, 0, // Skip to: 3792
/* 3769 */    MCD_OPC_CheckPredicate, 9, 73, 8, 0, // Skip to: 5895
/* 3774 */    MCD_OPC_CheckField, 25, 1, 0, 66, 8, 0, // Skip to: 5895
/* 3781 */    MCD_OPC_CheckField, 20, 1, 0, 59, 8, 0, // Skip to: 5895
/* 3788 */    MCD_OPC_Decode, 174, 3, 66, // Opcode: FDIV_S
/* 3792 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 3813
/* 3797 */    MCD_OPC_CheckPredicate, 9, 45, 8, 0, // Skip to: 5895
/* 3802 */    MCD_OPC_CheckField, 20, 6, 0, 38, 8, 0, // Skip to: 5895
/* 3809 */    MCD_OPC_Decode, 218, 3, 67, // Opcode: FRECIP_S
/* 3813 */    MCD_OPC_FilterValue, 4, 29, 8, 0, // Skip to: 5895
/* 3818 */    MCD_OPC_CheckPredicate, 9, 24, 8, 0, // Skip to: 5895
/* 3823 */    MCD_OPC_CheckField, 20, 6, 0, 17, 8, 0, // Skip to: 5895
/* 3830 */    MCD_OPC_Decode, 222, 3, 67, // Opcode: FSQRT_S
/* 3834 */    MCD_OPC_FilterValue, 8, 122, 0, 0, // Skip to: 3961
/* 3839 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 3842 */    MCD_OPC_FilterValue, 0, 23, 0, 0, // Skip to: 3870
/* 3847 */    MCD_OPC_CheckPredicate, 10, 251, 7, 0, // Skip to: 5895
/* 3852 */    MCD_OPC_CheckField, 25, 1, 0, 244, 7, 0, // Skip to: 5895
/* 3859 */    MCD_OPC_CheckField, 20, 1, 0, 237, 7, 0, // Skip to: 5895
/* 3866 */    MCD_OPC_Decode, 155, 3, 71, // Opcode: FADD_D
/* 3870 */    MCD_OPC_FilterValue, 2, 23, 0, 0, // Skip to: 3898
/* 3875 */    MCD_OPC_CheckPredicate, 10, 223, 7, 0, // Skip to: 5895
/* 3880 */    MCD_OPC_CheckField, 25, 1, 0, 216, 7, 0, // Skip to: 5895
/* 3887 */    MCD_OPC_CheckField, 20, 1, 0, 209, 7, 0, // Skip to: 5895
/* 3894 */    MCD_OPC_Decode, 234, 3, 71, // Opcode: FSUB_D
/* 3898 */    MCD_OPC_FilterValue, 8, 16, 0, 0, // Skip to: 3919
/* 3903 */    MCD_OPC_CheckPredicate, 10, 195, 7, 0, // Skip to: 5895
/* 3908 */    MCD_OPC_CheckField, 20, 6, 0, 188, 7, 0, // Skip to: 5895
/* 3915 */    MCD_OPC_Decode, 194, 3, 72, // Opcode: FMOV_D
/* 3919 */    MCD_OPC_FilterValue, 12, 16, 0, 0, // Skip to: 3940
/* 3924 */    MCD_OPC_CheckPredicate, 10, 174, 7, 0, // Skip to: 5895
/* 3929 */    MCD_OPC_CheckField, 20, 6, 0, 167, 7, 0, // Skip to: 5895
/* 3936 */    MCD_OPC_Decode, 152, 3, 72, // Opcode: FABS_D
/* 3940 */    MCD_OPC_FilterValue, 14, 158, 7, 0, // Skip to: 5895
/* 3945 */    MCD_OPC_CheckPredicate, 10, 153, 7, 0, // Skip to: 5895
/* 3950 */    MCD_OPC_CheckField, 20, 6, 0, 146, 7, 0, // Skip to: 5895
/* 3957 */    MCD_OPC_Decode, 206, 3, 72, // Opcode: FNEG_D
/* 3961 */    MCD_OPC_FilterValue, 9, 203, 0, 0, // Skip to: 4169
/* 3966 */    MCD_OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 3969 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3990
/* 3974 */    MCD_OPC_CheckPredicate, 10, 124, 7, 0, // Skip to: 5895
/* 3979 */    MCD_OPC_CheckField, 20, 6, 0, 117, 7, 0, // Skip to: 5895
/* 3986 */    MCD_OPC_Decode, 165, 3, 73, // Opcode: FCMPZHS_D
/* 3990 */    MCD_OPC_FilterValue, 32, 16, 0, 0, // Skip to: 4011
/* 3995 */    MCD_OPC_CheckPredicate, 10, 103, 7, 0, // Skip to: 5895
/* 4000 */    MCD_OPC_CheckField, 20, 6, 0, 96, 7, 0, // Skip to: 5895
/* 4007 */    MCD_OPC_Decode, 167, 3, 73, // Opcode: FCMPZLS_D
/* 4011 */    MCD_OPC_FilterValue, 64, 16, 0, 0, // Skip to: 4032
/* 4016 */    MCD_OPC_CheckPredicate, 10, 82, 7, 0, // Skip to: 5895
/* 4021 */    MCD_OPC_CheckField, 20, 6, 0, 75, 7, 0, // Skip to: 5895
/* 4028 */    MCD_OPC_Decode, 169, 3, 73, // Opcode: FCMPZNE_D
/* 4032 */    MCD_OPC_FilterValue, 96, 16, 0, 0, // Skip to: 4053
/* 4037 */    MCD_OPC_CheckPredicate, 10, 61, 7, 0, // Skip to: 5895
/* 4042 */    MCD_OPC_CheckField, 20, 6, 0, 54, 7, 0, // Skip to: 5895
/* 4049 */    MCD_OPC_Decode, 171, 3, 73, // Opcode: FCMPZUO_D
/* 4053 */    MCD_OPC_FilterValue, 128, 1, 23, 0, 0, // Skip to: 4082
/* 4059 */    MCD_OPC_CheckPredicate, 10, 39, 7, 0, // Skip to: 5895
/* 4064 */    MCD_OPC_CheckField, 25, 1, 0, 32, 7, 0, // Skip to: 5895
/* 4071 */    MCD_OPC_CheckField, 20, 1, 0, 25, 7, 0, // Skip to: 5895
/* 4078 */    MCD_OPC_Decode, 157, 3, 74, // Opcode: FCMPHS_D
/* 4082 */    MCD_OPC_FilterValue, 160, 1, 23, 0, 0, // Skip to: 4111
/* 4088 */    MCD_OPC_CheckPredicate, 10, 10, 7, 0, // Skip to: 5895
/* 4093 */    MCD_OPC_CheckField, 25, 1, 0, 3, 7, 0, // Skip to: 5895
/* 4100 */    MCD_OPC_CheckField, 20, 1, 0, 252, 6, 0, // Skip to: 5895
/* 4107 */    MCD_OPC_Decode, 159, 3, 74, // Opcode: FCMPLT_D
/* 4111 */    MCD_OPC_FilterValue, 192, 1, 23, 0, 0, // Skip to: 4140
/* 4117 */    MCD_OPC_CheckPredicate, 10, 237, 6, 0, // Skip to: 5895
/* 4122 */    MCD_OPC_CheckField, 25, 1, 0, 230, 6, 0, // Skip to: 5895
/* 4129 */    MCD_OPC_CheckField, 20, 1, 0, 223, 6, 0, // Skip to: 5895
/* 4136 */    MCD_OPC_Decode, 161, 3, 74, // Opcode: FCMPNE_D
/* 4140 */    MCD_OPC_FilterValue, 224, 1, 213, 6, 0, // Skip to: 5895
/* 4146 */    MCD_OPC_CheckPredicate, 10, 208, 6, 0, // Skip to: 5895
/* 4151 */    MCD_OPC_CheckField, 25, 1, 0, 201, 6, 0, // Skip to: 5895
/* 4158 */    MCD_OPC_CheckField, 20, 1, 0, 194, 6, 0, // Skip to: 5895
/* 4165 */    MCD_OPC_Decode, 163, 3, 74, // Opcode: FCMPUO_D
/* 4169 */    MCD_OPC_FilterValue, 10, 171, 0, 0, // Skip to: 4345
/* 4174 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 4177 */    MCD_OPC_FilterValue, 0, 23, 0, 0, // Skip to: 4205
/* 4182 */    MCD_OPC_CheckPredicate, 10, 172, 6, 0, // Skip to: 5895
/* 4187 */    MCD_OPC_CheckField, 25, 1, 0, 165, 6, 0, // Skip to: 5895
/* 4194 */    MCD_OPC_CheckField, 20, 1, 0, 158, 6, 0, // Skip to: 5895
/* 4201 */    MCD_OPC_Decode, 203, 3, 71, // Opcode: FMUL_D
/* 4205 */    MCD_OPC_FilterValue, 2, 23, 0, 0, // Skip to: 4233
/* 4210 */    MCD_OPC_CheckPredicate, 10, 144, 6, 0, // Skip to: 5895
/* 4215 */    MCD_OPC_CheckField, 25, 1, 0, 137, 6, 0, // Skip to: 5895
/* 4222 */    MCD_OPC_CheckField, 20, 1, 0, 130, 6, 0, // Skip to: 5895
/* 4229 */    MCD_OPC_Decode, 215, 3, 71, // Opcode: FNMUL_D
/* 4233 */    MCD_OPC_FilterValue, 8, 23, 0, 0, // Skip to: 4261
/* 4238 */    MCD_OPC_CheckPredicate, 10, 116, 6, 0, // Skip to: 5895
/* 4243 */    MCD_OPC_CheckField, 25, 1, 0, 109, 6, 0, // Skip to: 5895
/* 4250 */    MCD_OPC_CheckField, 20, 1, 0, 102, 6, 0, // Skip to: 5895
/* 4257 */    MCD_OPC_Decode, 188, 3, 75, // Opcode: FMAC_D
/* 4261 */    MCD_OPC_FilterValue, 10, 23, 0, 0, // Skip to: 4289
/* 4266 */    MCD_OPC_CheckPredicate, 10, 88, 6, 0, // Skip to: 5895
/* 4271 */    MCD_OPC_CheckField, 25, 1, 0, 81, 6, 0, // Skip to: 5895
/* 4278 */    MCD_OPC_CheckField, 20, 1, 0, 74, 6, 0, // Skip to: 5895
/* 4285 */    MCD_OPC_Decode, 197, 3, 75, // Opcode: FMSC_D
/* 4289 */    MCD_OPC_FilterValue, 12, 23, 0, 0, // Skip to: 4317
/* 4294 */    MCD_OPC_CheckPredicate, 10, 60, 6, 0, // Skip to: 5895
/* 4299 */    MCD_OPC_CheckField, 25, 1, 0, 53, 6, 0, // Skip to: 5895
/* 4306 */    MCD_OPC_CheckField, 20, 1, 0, 46, 6, 0, // Skip to: 5895
/* 4313 */    MCD_OPC_Decode, 209, 3, 75, // Opcode: FNMAC_D
/* 4317 */    MCD_OPC_FilterValue, 14, 37, 6, 0, // Skip to: 5895
/* 4322 */    MCD_OPC_CheckPredicate, 10, 32, 6, 0, // Skip to: 5895
/* 4327 */    MCD_OPC_CheckField, 25, 1, 0, 25, 6, 0, // Skip to: 5895
/* 4334 */    MCD_OPC_CheckField, 20, 1, 0, 18, 6, 0, // Skip to: 5895
/* 4341 */    MCD_OPC_Decode, 212, 3, 75, // Opcode: FNMSC_D
/* 4345 */    MCD_OPC_FilterValue, 11, 73, 0, 0, // Skip to: 4423
/* 4350 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 4353 */    MCD_OPC_FilterValue, 0, 23, 0, 0, // Skip to: 4381
/* 4358 */    MCD_OPC_CheckPredicate, 10, 252, 5, 0, // Skip to: 5895
/* 4363 */    MCD_OPC_CheckField, 25, 1, 0, 245, 5, 0, // Skip to: 5895
/* 4370 */    MCD_OPC_CheckField, 20, 1, 0, 238, 5, 0, // Skip to: 5895
/* 4377 */    MCD_OPC_Decode, 173, 3, 71, // Opcode: FDIV_D
/* 4381 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 4402
/* 4386 */    MCD_OPC_CheckPredicate, 10, 224, 5, 0, // Skip to: 5895
/* 4391 */    MCD_OPC_CheckField, 20, 6, 0, 217, 5, 0, // Skip to: 5895
/* 4398 */    MCD_OPC_Decode, 217, 3, 72, // Opcode: FRECIP_D
/* 4402 */    MCD_OPC_FilterValue, 4, 208, 5, 0, // Skip to: 5895
/* 4407 */    MCD_OPC_CheckPredicate, 10, 203, 5, 0, // Skip to: 5895
/* 4412 */    MCD_OPC_CheckField, 20, 6, 0, 196, 5, 0, // Skip to: 5895
/* 4419 */    MCD_OPC_Decode, 221, 3, 72, // Opcode: FSQRT_D
/* 4423 */    MCD_OPC_FilterValue, 16, 122, 0, 0, // Skip to: 4550
/* 4428 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 4431 */    MCD_OPC_FilterValue, 0, 23, 0, 0, // Skip to: 4459
/* 4436 */    MCD_OPC_CheckPredicate, 9, 174, 5, 0, // Skip to: 5895
/* 4441 */    MCD_OPC_CheckField, 25, 1, 0, 167, 5, 0, // Skip to: 5895
/* 4448 */    MCD_OPC_CheckField, 20, 1, 0, 160, 5, 0, // Skip to: 5895
/* 4455 */    MCD_OPC_Decode, 154, 3, 76, // Opcode: FADDM
/* 4459 */    MCD_OPC_FilterValue, 2, 23, 0, 0, // Skip to: 4487
/* 4464 */    MCD_OPC_CheckPredicate, 9, 146, 5, 0, // Skip to: 5895
/* 4469 */    MCD_OPC_CheckField, 25, 1, 0, 139, 5, 0, // Skip to: 5895
/* 4476 */    MCD_OPC_CheckField, 20, 1, 0, 132, 5, 0, // Skip to: 5895
/* 4483 */    MCD_OPC_Decode, 233, 3, 76, // Opcode: FSUBM
/* 4487 */    MCD_OPC_FilterValue, 8, 16, 0, 0, // Skip to: 4508
/* 4492 */    MCD_OPC_CheckPredicate, 9, 118, 5, 0, // Skip to: 5895
/* 4497 */    MCD_OPC_CheckField, 20, 6, 0, 111, 5, 0, // Skip to: 5895
/* 4504 */    MCD_OPC_Decode, 193, 3, 77, // Opcode: FMOVM
/* 4508 */    MCD_OPC_FilterValue, 12, 16, 0, 0, // Skip to: 4529
/* 4513 */    MCD_OPC_CheckPredicate, 9, 97, 5, 0, // Skip to: 5895
/* 4518 */    MCD_OPC_CheckField, 20, 6, 0, 90, 5, 0, // Skip to: 5895
/* 4525 */    MCD_OPC_Decode, 151, 3, 77, // Opcode: FABSM
/* 4529 */    MCD_OPC_FilterValue, 14, 81, 5, 0, // Skip to: 5895
/* 4534 */    MCD_OPC_CheckPredicate, 9, 76, 5, 0, // Skip to: 5895
/* 4539 */    MCD_OPC_CheckField, 20, 6, 0, 69, 5, 0, // Skip to: 5895
/* 4546 */    MCD_OPC_Decode, 205, 3, 77, // Opcode: FNEGM
/* 4550 */    MCD_OPC_FilterValue, 18, 171, 0, 0, // Skip to: 4726
/* 4555 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 4558 */    MCD_OPC_FilterValue, 0, 23, 0, 0, // Skip to: 4586
/* 4563 */    MCD_OPC_CheckPredicate, 9, 47, 5, 0, // Skip to: 5895
/* 4568 */    MCD_OPC_CheckField, 25, 1, 0, 40, 5, 0, // Skip to: 5895
/* 4575 */    MCD_OPC_CheckField, 20, 1, 0, 33, 5, 0, // Skip to: 5895
/* 4582 */    MCD_OPC_Decode, 202, 3, 76, // Opcode: FMULM
/* 4586 */    MCD_OPC_FilterValue, 2, 23, 0, 0, // Skip to: 4614
/* 4591 */    MCD_OPC_CheckPredicate, 9, 19, 5, 0, // Skip to: 5895
/* 4596 */    MCD_OPC_CheckField, 25, 1, 0, 12, 5, 0, // Skip to: 5895
/* 4603 */    MCD_OPC_CheckField, 20, 1, 0, 5, 5, 0, // Skip to: 5895
/* 4610 */    MCD_OPC_Decode, 214, 3, 76, // Opcode: FNMULM
/* 4614 */    MCD_OPC_FilterValue, 8, 23, 0, 0, // Skip to: 4642
/* 4619 */    MCD_OPC_CheckPredicate, 9, 247, 4, 0, // Skip to: 5895
/* 4624 */    MCD_OPC_CheckField, 25, 1, 0, 240, 4, 0, // Skip to: 5895
/* 4631 */    MCD_OPC_CheckField, 20, 1, 0, 233, 4, 0, // Skip to: 5895
/* 4638 */    MCD_OPC_Decode, 187, 3, 78, // Opcode: FMACM
/* 4642 */    MCD_OPC_FilterValue, 10, 23, 0, 0, // Skip to: 4670
/* 4647 */    MCD_OPC_CheckPredicate, 9, 219, 4, 0, // Skip to: 5895
/* 4652 */    MCD_OPC_CheckField, 25, 1, 0, 212, 4, 0, // Skip to: 5895
/* 4659 */    MCD_OPC_CheckField, 20, 1, 0, 205, 4, 0, // Skip to: 5895
/* 4666 */    MCD_OPC_Decode, 196, 3, 78, // Opcode: FMSCM
/* 4670 */    MCD_OPC_FilterValue, 12, 23, 0, 0, // Skip to: 4698
/* 4675 */    MCD_OPC_CheckPredicate, 9, 191, 4, 0, // Skip to: 5895
/* 4680 */    MCD_OPC_CheckField, 25, 1, 0, 184, 4, 0, // Skip to: 5895
/* 4687 */    MCD_OPC_CheckField, 20, 1, 0, 177, 4, 0, // Skip to: 5895
/* 4694 */    MCD_OPC_Decode, 208, 3, 78, // Opcode: FNMACM
/* 4698 */    MCD_OPC_FilterValue, 14, 168, 4, 0, // Skip to: 5895
/* 4703 */    MCD_OPC_CheckPredicate, 9, 163, 4, 0, // Skip to: 5895
/* 4708 */    MCD_OPC_CheckField, 25, 1, 0, 156, 4, 0, // Skip to: 5895
/* 4715 */    MCD_OPC_CheckField, 20, 1, 0, 149, 4, 0, // Skip to: 5895
/* 4722 */    MCD_OPC_Decode, 211, 3, 78, // Opcode: FNMSCM
/* 4726 */    MCD_OPC_FilterValue, 24, 171, 0, 0, // Skip to: 4902
/* 4731 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 4734 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 4755
/* 4739 */    MCD_OPC_CheckPredicate, 9, 127, 4, 0, // Skip to: 5895
/* 4744 */    MCD_OPC_CheckField, 20, 6, 0, 120, 4, 0, // Skip to: 5895
/* 4751 */    MCD_OPC_Decode, 160, 6, 67, // Opcode: rnFSTOSI
/* 4755 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 4776
/* 4760 */    MCD_OPC_CheckPredicate, 9, 106, 4, 0, // Skip to: 5895
/* 4765 */    MCD_OPC_CheckField, 20, 6, 0, 99, 4, 0, // Skip to: 5895
/* 4772 */    MCD_OPC_Decode, 172, 6, 67, // Opcode: rzFSTOSI
/* 4776 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 4797
/* 4781 */    MCD_OPC_CheckPredicate, 9, 85, 4, 0, // Skip to: 5895
/* 4786 */    MCD_OPC_CheckField, 20, 6, 0, 78, 4, 0, // Skip to: 5895
/* 4793 */    MCD_OPC_Decode, 168, 6, 67, // Opcode: rpiFSTOSI
/* 4797 */    MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 4818
/* 4802 */    MCD_OPC_CheckPredicate, 9, 64, 4, 0, // Skip to: 5895
/* 4807 */    MCD_OPC_CheckField, 20, 6, 0, 57, 4, 0, // Skip to: 5895
/* 4814 */    MCD_OPC_Decode, 164, 6, 67, // Opcode: rniFSTOSI
/* 4818 */    MCD_OPC_FilterValue, 8, 16, 0, 0, // Skip to: 4839
/* 4823 */    MCD_OPC_CheckPredicate, 9, 43, 4, 0, // Skip to: 5895
/* 4828 */    MCD_OPC_CheckField, 20, 6, 0, 36, 4, 0, // Skip to: 5895
/* 4835 */    MCD_OPC_Decode, 161, 6, 67, // Opcode: rnFSTOUI
/* 4839 */    MCD_OPC_FilterValue, 10, 16, 0, 0, // Skip to: 4860
/* 4844 */    MCD_OPC_CheckPredicate, 9, 22, 4, 0, // Skip to: 5895
/* 4849 */    MCD_OPC_CheckField, 20, 6, 0, 15, 4, 0, // Skip to: 5895
/* 4856 */    MCD_OPC_Decode, 173, 6, 67, // Opcode: rzFSTOUI
/* 4860 */    MCD_OPC_FilterValue, 12, 16, 0, 0, // Skip to: 4881
/* 4865 */    MCD_OPC_CheckPredicate, 9, 1, 4, 0, // Skip to: 5895
/* 4870 */    MCD_OPC_CheckField, 20, 6, 0, 250, 3, 0, // Skip to: 5895
/* 4877 */    MCD_OPC_Decode, 169, 6, 67, // Opcode: rpiFSTOUI
/* 4881 */    MCD_OPC_FilterValue, 14, 241, 3, 0, // Skip to: 5895
/* 4886 */    MCD_OPC_CheckPredicate, 9, 236, 3, 0, // Skip to: 5895
/* 4891 */    MCD_OPC_CheckField, 20, 6, 0, 229, 3, 0, // Skip to: 5895
/* 4898 */    MCD_OPC_Decode, 165, 6, 67, // Opcode: rniFSTOUI
/* 4902 */    MCD_OPC_FilterValue, 25, 171, 0, 0, // Skip to: 5078
/* 4907 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 4910 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 4931
/* 4915 */    MCD_OPC_CheckPredicate, 10, 207, 3, 0, // Skip to: 5895
/* 4920 */    MCD_OPC_CheckField, 20, 6, 0, 200, 3, 0, // Skip to: 5895
/* 4927 */    MCD_OPC_Decode, 158, 6, 72, // Opcode: rnFDTOSI
/* 4931 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 4952
/* 4936 */    MCD_OPC_CheckPredicate, 10, 186, 3, 0, // Skip to: 5895
/* 4941 */    MCD_OPC_CheckField, 20, 6, 0, 179, 3, 0, // Skip to: 5895
/* 4948 */    MCD_OPC_Decode, 170, 6, 72, // Opcode: rzFDTOSI
/* 4952 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 4973
/* 4957 */    MCD_OPC_CheckPredicate, 10, 165, 3, 0, // Skip to: 5895
/* 4962 */    MCD_OPC_CheckField, 20, 6, 0, 158, 3, 0, // Skip to: 5895
/* 4969 */    MCD_OPC_Decode, 166, 6, 72, // Opcode: rpiFDTOSI
/* 4973 */    MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 4994
/* 4978 */    MCD_OPC_CheckPredicate, 10, 144, 3, 0, // Skip to: 5895
/* 4983 */    MCD_OPC_CheckField, 20, 6, 0, 137, 3, 0, // Skip to: 5895
/* 4990 */    MCD_OPC_Decode, 162, 6, 72, // Opcode: rniFDTOSI
/* 4994 */    MCD_OPC_FilterValue, 8, 16, 0, 0, // Skip to: 5015
/* 4999 */    MCD_OPC_CheckPredicate, 10, 123, 3, 0, // Skip to: 5895
/* 5004 */    MCD_OPC_CheckField, 20, 6, 0, 116, 3, 0, // Skip to: 5895
/* 5011 */    MCD_OPC_Decode, 159, 6, 72, // Opcode: rnFDTOUI
/* 5015 */    MCD_OPC_FilterValue, 10, 16, 0, 0, // Skip to: 5036
/* 5020 */    MCD_OPC_CheckPredicate, 10, 102, 3, 0, // Skip to: 5895
/* 5025 */    MCD_OPC_CheckField, 20, 6, 0, 95, 3, 0, // Skip to: 5895
/* 5032 */    MCD_OPC_Decode, 171, 6, 72, // Opcode: rzFDTOUI
/* 5036 */    MCD_OPC_FilterValue, 12, 16, 0, 0, // Skip to: 5057
/* 5041 */    MCD_OPC_CheckPredicate, 10, 81, 3, 0, // Skip to: 5895
/* 5046 */    MCD_OPC_CheckField, 20, 6, 0, 74, 3, 0, // Skip to: 5895
/* 5053 */    MCD_OPC_Decode, 167, 6, 72, // Opcode: rpiFDTOUI
/* 5057 */    MCD_OPC_FilterValue, 14, 65, 3, 0, // Skip to: 5895
/* 5062 */    MCD_OPC_CheckPredicate, 10, 60, 3, 0, // Skip to: 5895
/* 5067 */    MCD_OPC_CheckField, 20, 6, 0, 53, 3, 0, // Skip to: 5895
/* 5074 */    MCD_OPC_Decode, 163, 6, 72, // Opcode: rniFDTOUI
/* 5078 */    MCD_OPC_FilterValue, 26, 129, 0, 0, // Skip to: 5212
/* 5083 */    MCD_OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 5086 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 5107
/* 5091 */    MCD_OPC_CheckPredicate, 9, 31, 3, 0, // Skip to: 5895
/* 5096 */    MCD_OPC_CheckField, 20, 6, 0, 24, 3, 0, // Skip to: 5895
/* 5103 */    MCD_OPC_Decode, 220, 3, 67, // Opcode: FSITOS
/* 5107 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 5128
/* 5112 */    MCD_OPC_CheckPredicate, 9, 10, 3, 0, // Skip to: 5895
/* 5117 */    MCD_OPC_CheckField, 20, 6, 0, 3, 3, 0, // Skip to: 5895
/* 5124 */    MCD_OPC_Decode, 237, 3, 67, // Opcode: FUITOS
/* 5128 */    MCD_OPC_FilterValue, 8, 16, 0, 0, // Skip to: 5149
/* 5133 */    MCD_OPC_CheckPredicate, 9, 245, 2, 0, // Skip to: 5895
/* 5138 */    MCD_OPC_CheckField, 20, 6, 0, 238, 2, 0, // Skip to: 5895
/* 5145 */    MCD_OPC_Decode, 219, 3, 72, // Opcode: FSITOD
/* 5149 */    MCD_OPC_FilterValue, 10, 16, 0, 0, // Skip to: 5170
/* 5154 */    MCD_OPC_CheckPredicate, 9, 224, 2, 0, // Skip to: 5895
/* 5159 */    MCD_OPC_CheckField, 20, 6, 0, 217, 2, 0, // Skip to: 5895
/* 5166 */    MCD_OPC_Decode, 236, 3, 72, // Opcode: FUITOD
/* 5170 */    MCD_OPC_FilterValue, 12, 16, 0, 0, // Skip to: 5191
/* 5175 */    MCD_OPC_CheckPredicate, 10, 203, 2, 0, // Skip to: 5895
/* 5180 */    MCD_OPC_CheckField, 20, 6, 0, 196, 2, 0, // Skip to: 5895
/* 5187 */    MCD_OPC_Decode, 175, 3, 79, // Opcode: FDTOS
/* 5191 */    MCD_OPC_FilterValue, 14, 187, 2, 0, // Skip to: 5895
/* 5196 */    MCD_OPC_CheckPredicate, 10, 182, 2, 0, // Skip to: 5895
/* 5201 */    MCD_OPC_CheckField, 20, 6, 0, 175, 2, 0, // Skip to: 5895
/* 5208 */    MCD_OPC_Decode, 227, 3, 80, // Opcode: FSTOD
/* 5212 */    MCD_OPC_FilterValue, 27, 101, 0, 0, // Skip to: 5318
/* 5217 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 5220 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 5241
/* 5225 */    MCD_OPC_CheckPredicate, 10, 153, 2, 0, // Skip to: 5895
/* 5230 */    MCD_OPC_CheckField, 20, 6, 0, 146, 2, 0, // Skip to: 5895
/* 5237 */    MCD_OPC_Decode, 190, 3, 81, // Opcode: FMFVRH_D
/* 5241 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 5262
/* 5246 */    MCD_OPC_CheckPredicate, 9, 132, 2, 0, // Skip to: 5895
/* 5251 */    MCD_OPC_CheckField, 20, 6, 0, 125, 2, 0, // Skip to: 5895
/* 5258 */    MCD_OPC_Decode, 191, 3, 82, // Opcode: FMFVRL
/* 5262 */    MCD_OPC_FilterValue, 2, 23, 0, 0, // Skip to: 5290
/* 5267 */    MCD_OPC_CheckPredicate, 10, 111, 2, 0, // Skip to: 5895
/* 5272 */    MCD_OPC_CheckField, 21, 5, 0, 104, 2, 0, // Skip to: 5895
/* 5279 */    MCD_OPC_CheckField, 4, 1, 0, 97, 2, 0, // Skip to: 5895
/* 5286 */    MCD_OPC_Decode, 199, 3, 83, // Opcode: FMTVRH_D
/* 5290 */    MCD_OPC_FilterValue, 3, 88, 2, 0, // Skip to: 5895
/* 5295 */    MCD_OPC_CheckPredicate, 9, 83, 2, 0, // Skip to: 5895
/* 5300 */    MCD_OPC_CheckField, 21, 5, 0, 76, 2, 0, // Skip to: 5895
/* 5307 */    MCD_OPC_CheckField, 4, 1, 0, 69, 2, 0, // Skip to: 5895
/* 5314 */    MCD_OPC_Decode, 200, 3, 84, // Opcode: FMTVRL
/* 5318 */    MCD_OPC_FilterValue, 32, 11, 0, 0, // Skip to: 5334
/* 5323 */    MCD_OPC_CheckField, 25, 1, 0, 53, 2, 0, // Skip to: 5895
/* 5330 */    MCD_OPC_Decode, 186, 3, 85, // Opcode: FLD_S
/* 5334 */    MCD_OPC_FilterValue, 33, 16, 0, 0, // Skip to: 5355
/* 5339 */    MCD_OPC_CheckPredicate, 10, 39, 2, 0, // Skip to: 5895
/* 5344 */    MCD_OPC_CheckField, 25, 1, 0, 32, 2, 0, // Skip to: 5895
/* 5351 */    MCD_OPC_Decode, 185, 3, 86, // Opcode: FLD_D
/* 5355 */    MCD_OPC_FilterValue, 34, 16, 0, 0, // Skip to: 5376
/* 5360 */    MCD_OPC_CheckPredicate, 10, 18, 2, 0, // Skip to: 5895
/* 5365 */    MCD_OPC_CheckField, 25, 1, 0, 11, 2, 0, // Skip to: 5895
/* 5372 */    MCD_OPC_Decode, 178, 3, 87, // Opcode: FLDM
/* 5376 */    MCD_OPC_FilterValue, 36, 11, 0, 0, // Skip to: 5392
/* 5381 */    MCD_OPC_CheckField, 25, 1, 0, 251, 1, 0, // Skip to: 5895
/* 5388 */    MCD_OPC_Decode, 232, 3, 85, // Opcode: FST_S
/* 5392 */    MCD_OPC_FilterValue, 37, 16, 0, 0, // Skip to: 5413
/* 5397 */    MCD_OPC_CheckPredicate, 10, 237, 1, 0, // Skip to: 5895
/* 5402 */    MCD_OPC_CheckField, 25, 1, 0, 230, 1, 0, // Skip to: 5895
/* 5409 */    MCD_OPC_Decode, 231, 3, 86, // Opcode: FST_D
/* 5413 */    MCD_OPC_FilterValue, 38, 16, 0, 0, // Skip to: 5434
/* 5418 */    MCD_OPC_CheckPredicate, 10, 216, 1, 0, // Skip to: 5895
/* 5423 */    MCD_OPC_CheckField, 25, 1, 0, 209, 1, 0, // Skip to: 5895
/* 5430 */    MCD_OPC_Decode, 223, 3, 87, // Opcode: FSTM
/* 5434 */    MCD_OPC_FilterValue, 40, 18, 0, 0, // Skip to: 5457
/* 5439 */    MCD_OPC_CheckField, 7, 1, 0, 193, 1, 0, // Skip to: 5895
/* 5446 */    MCD_OPC_CheckField, 4, 1, 0, 186, 1, 0, // Skip to: 5895
/* 5453 */    MCD_OPC_Decode, 184, 3, 88, // Opcode: FLDR_S
/* 5457 */    MCD_OPC_FilterValue, 41, 23, 0, 0, // Skip to: 5485
/* 5462 */    MCD_OPC_CheckPredicate, 10, 172, 1, 0, // Skip to: 5895
/* 5467 */    MCD_OPC_CheckField, 7, 1, 0, 165, 1, 0, // Skip to: 5895
/* 5474 */    MCD_OPC_CheckField, 4, 1, 0, 158, 1, 0, // Skip to: 5895
/* 5481 */    MCD_OPC_Decode, 183, 3, 89, // Opcode: FLDR_D
/* 5485 */    MCD_OPC_FilterValue, 42, 23, 0, 0, // Skip to: 5513
/* 5490 */    MCD_OPC_CheckPredicate, 10, 144, 1, 0, // Skip to: 5895
/* 5495 */    MCD_OPC_CheckField, 7, 1, 0, 137, 1, 0, // Skip to: 5895
/* 5502 */    MCD_OPC_CheckField, 4, 1, 0, 130, 1, 0, // Skip to: 5895
/* 5509 */    MCD_OPC_Decode, 182, 3, 89, // Opcode: FLDRM
/* 5513 */    MCD_OPC_FilterValue, 44, 18, 0, 0, // Skip to: 5536
/* 5518 */    MCD_OPC_CheckField, 7, 1, 0, 114, 1, 0, // Skip to: 5895
/* 5525 */    MCD_OPC_CheckField, 4, 1, 0, 107, 1, 0, // Skip to: 5895
/* 5532 */    MCD_OPC_Decode, 230, 3, 88, // Opcode: FSTR_S
/* 5536 */    MCD_OPC_FilterValue, 45, 23, 0, 0, // Skip to: 5564
/* 5541 */    MCD_OPC_CheckPredicate, 10, 93, 1, 0, // Skip to: 5895
/* 5546 */    MCD_OPC_CheckField, 7, 1, 0, 86, 1, 0, // Skip to: 5895
/* 5553 */    MCD_OPC_CheckField, 4, 1, 0, 79, 1, 0, // Skip to: 5895
/* 5560 */    MCD_OPC_Decode, 229, 3, 89, // Opcode: FSTR_D
/* 5564 */    MCD_OPC_FilterValue, 46, 23, 0, 0, // Skip to: 5592
/* 5569 */    MCD_OPC_CheckPredicate, 10, 65, 1, 0, // Skip to: 5895
/* 5574 */    MCD_OPC_CheckField, 7, 1, 0, 58, 1, 0, // Skip to: 5895
/* 5581 */    MCD_OPC_CheckField, 4, 1, 0, 51, 1, 0, // Skip to: 5895
/* 5588 */    MCD_OPC_Decode, 228, 3, 89, // Opcode: FSTRM
/* 5592 */    MCD_OPC_FilterValue, 48, 18, 0, 0, // Skip to: 5615
/* 5597 */    MCD_OPC_CheckField, 25, 1, 0, 35, 1, 0, // Skip to: 5895
/* 5604 */    MCD_OPC_CheckField, 4, 4, 0, 28, 1, 0, // Skip to: 5895
/* 5611 */    MCD_OPC_Decode, 181, 3, 90, // Opcode: FLDM_S
/* 5615 */    MCD_OPC_FilterValue, 49, 23, 0, 0, // Skip to: 5643
/* 5620 */    MCD_OPC_CheckPredicate, 10, 14, 1, 0, // Skip to: 5895
/* 5625 */    MCD_OPC_CheckField, 25, 1, 0, 7, 1, 0, // Skip to: 5895
/* 5632 */    MCD_OPC_CheckField, 4, 4, 0, 0, 1, 0, // Skip to: 5895
/* 5639 */    MCD_OPC_Decode, 180, 3, 91, // Opcode: FLDM_D
/* 5643 */    MCD_OPC_FilterValue, 50, 23, 0, 0, // Skip to: 5671
/* 5648 */    MCD_OPC_CheckPredicate, 10, 242, 0, 0, // Skip to: 5895
/* 5653 */    MCD_OPC_CheckField, 25, 1, 0, 235, 0, 0, // Skip to: 5895
/* 5660 */    MCD_OPC_CheckField, 4, 4, 0, 228, 0, 0, // Skip to: 5895
/* 5667 */    MCD_OPC_Decode, 179, 3, 91, // Opcode: FLDMM
/* 5671 */    MCD_OPC_FilterValue, 52, 18, 0, 0, // Skip to: 5694
/* 5676 */    MCD_OPC_CheckField, 25, 1, 0, 212, 0, 0, // Skip to: 5895
/* 5683 */    MCD_OPC_CheckField, 4, 4, 0, 205, 0, 0, // Skip to: 5895
/* 5690 */    MCD_OPC_Decode, 226, 3, 90, // Opcode: FSTM_S
/* 5694 */    MCD_OPC_FilterValue, 53, 23, 0, 0, // Skip to: 5722
/* 5699 */    MCD_OPC_CheckPredicate, 10, 191, 0, 0, // Skip to: 5895
/* 5704 */    MCD_OPC_CheckField, 25, 1, 0, 184, 0, 0, // Skip to: 5895
/* 5711 */    MCD_OPC_CheckField, 4, 4, 0, 177, 0, 0, // Skip to: 5895
/* 5718 */    MCD_OPC_Decode, 225, 3, 91, // Opcode: FSTM_D
/* 5722 */    MCD_OPC_FilterValue, 54, 168, 0, 0, // Skip to: 5895
/* 5727 */    MCD_OPC_CheckPredicate, 10, 163, 0, 0, // Skip to: 5895
/* 5732 */    MCD_OPC_CheckField, 25, 1, 0, 156, 0, 0, // Skip to: 5895
/* 5739 */    MCD_OPC_CheckField, 4, 4, 0, 149, 0, 0, // Skip to: 5895
/* 5746 */    MCD_OPC_Decode, 224, 3, 91, // Opcode: FSTMM
/* 5750 */    MCD_OPC_FilterValue, 62, 63, 0, 0, // Skip to: 5818
/* 5755 */    MCD_OPC_ExtractField, 5, 11,  // Inst{15-5} ...
/* 5758 */    MCD_OPC_FilterValue, 128, 8, 9, 0, 0, // Skip to: 5773
/* 5764 */    MCD_OPC_CheckPredicate, 11, 126, 0, 0, // Skip to: 5895
/* 5769 */    MCD_OPC_Decode, 183, 4, 92, // Opcode: MULTU32
/* 5773 */    MCD_OPC_FilterValue, 132, 8, 9, 0, 0, // Skip to: 5788
/* 5779 */    MCD_OPC_CheckPredicate, 11, 111, 0, 0, // Skip to: 5895
/* 5784 */    MCD_OPC_Decode, 177, 4, 93, // Opcode: MULATU32
/* 5788 */    MCD_OPC_FilterValue, 144, 8, 9, 0, 0, // Skip to: 5803
/* 5794 */    MCD_OPC_CheckPredicate, 11, 96, 0, 0, // Skip to: 5895
/* 5799 */    MCD_OPC_Decode, 182, 4, 92, // Opcode: MULTS32
/* 5803 */    MCD_OPC_FilterValue, 148, 8, 86, 0, 0, // Skip to: 5895
/* 5809 */    MCD_OPC_CheckPredicate, 11, 81, 0, 0, // Skip to: 5895
/* 5814 */    MCD_OPC_Decode, 176, 4, 93, // Opcode: MULATS32
/* 5818 */    MCD_OPC_FilterValue, 63, 72, 0, 0, // Skip to: 5895
/* 5823 */    MCD_OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 5826 */    MCD_OPC_FilterValue, 0, 55, 0, 0, // Skip to: 5886
/* 5831 */    MCD_OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5834 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 5843
/* 5839 */    MCD_OPC_Decode, 130, 3, 94, // Opcode: CPRGR32
/* 5843 */    MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 5852
/* 5848 */    MCD_OPC_Decode, 132, 3, 94, // Opcode: CPWGR32
/* 5852 */    MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 5861
/* 5857 */    MCD_OPC_Decode, 129, 3, 94, // Opcode: CPRCR32
/* 5861 */    MCD_OPC_FilterValue, 3, 4, 0, 0, // Skip to: 5870
/* 5866 */    MCD_OPC_Decode, 131, 3, 94, // Opcode: CPWCR32
/* 5870 */    MCD_OPC_FilterValue, 4, 20, 0, 0, // Skip to: 5895
/* 5875 */    MCD_OPC_CheckField, 16, 5, 0, 13, 0, 0, // Skip to: 5895
/* 5882 */    MCD_OPC_Decode, 128, 3, 95, // Opcode: CPRC32
/* 5886 */    MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 5895
/* 5891 */    MCD_OPC_Decode, 255, 2, 96, // Opcode: CPOP32
/* 5895 */    MCD_OPC_Fail,
  0
};

static const uint8_t DecoderTableFPUV332[] = {
/* 0 */       MCD_OPC_ExtractField, 8, 8,  // Inst{15-8} ...
/* 3 */       MCD_OPC_FilterValue, 0, 111, 0, 0, // Skip to: 119
/* 8 */       MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 11 */      MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 32
/* 16 */      MCD_OPC_CheckPredicate, 12, 60, 12, 0, // Skip to: 3153
/* 21 */      MCD_OPC_CheckField, 26, 6, 61, 53, 12, 0, // Skip to: 3153
/* 28 */      MCD_OPC_Decode, 155, 5, 97, // Opcode: f2FADD_S
/* 32 */      MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 53
/* 37 */      MCD_OPC_CheckPredicate, 12, 39, 12, 0, // Skip to: 3153
/* 42 */      MCD_OPC_CheckField, 26, 6, 61, 32, 12, 0, // Skip to: 3153
/* 49 */      MCD_OPC_Decode, 149, 6, 97, // Opcode: f2FSUB_S
/* 53 */      MCD_OPC_FilterValue, 4, 17, 0, 0, // Skip to: 75
/* 58 */      MCD_OPC_CheckPredicate, 12, 18, 12, 0, // Skip to: 3153
/* 63 */      MCD_OPC_CheckField, 21, 11, 160, 15, 10, 12, 0, // Skip to: 3153
/* 71 */      MCD_OPC_Decode, 241, 5, 98, // Opcode: f2FMOV_S
/* 75 */      MCD_OPC_FilterValue, 6, 17, 0, 0, // Skip to: 97
/* 80 */      MCD_OPC_CheckPredicate, 12, 252, 11, 0, // Skip to: 3153
/* 85 */      MCD_OPC_CheckField, 21, 11, 160, 15, 244, 11, 0, // Skip to: 3153
/* 93 */      MCD_OPC_Decode, 153, 5, 98, // Opcode: f2FABS_S
/* 97 */      MCD_OPC_FilterValue, 7, 235, 11, 0, // Skip to: 3153
/* 102 */     MCD_OPC_CheckPredicate, 12, 230, 11, 0, // Skip to: 3153
/* 107 */     MCD_OPC_CheckField, 21, 11, 160, 15, 222, 11, 0, // Skip to: 3153
/* 115 */     MCD_OPC_Decode, 254, 5, 98, // Opcode: f2FNEG_S
/* 119 */     MCD_OPC_FilterValue, 1, 179, 0, 0, // Skip to: 303
/* 124 */     MCD_OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 127 */     MCD_OPC_FilterValue, 0, 17, 0, 0, // Skip to: 149
/* 132 */     MCD_OPC_CheckPredicate, 12, 200, 11, 0, // Skip to: 3153
/* 137 */     MCD_OPC_CheckField, 21, 11, 160, 15, 192, 11, 0, // Skip to: 3153
/* 145 */     MCD_OPC_Decode, 157, 5, 99, // Opcode: f2FCMPHSZ_S
/* 149 */     MCD_OPC_FilterValue, 32, 17, 0, 0, // Skip to: 171
/* 154 */     MCD_OPC_CheckPredicate, 12, 178, 11, 0, // Skip to: 3153
/* 159 */     MCD_OPC_CheckField, 21, 11, 160, 15, 170, 11, 0, // Skip to: 3153
/* 167 */     MCD_OPC_Decode, 165, 5, 99, // Opcode: f2FCMPLTZ_S
/* 171 */     MCD_OPC_FilterValue, 64, 17, 0, 0, // Skip to: 193
/* 176 */     MCD_OPC_CheckPredicate, 12, 156, 11, 0, // Skip to: 3153
/* 181 */     MCD_OPC_CheckField, 21, 11, 160, 15, 148, 11, 0, // Skip to: 3153
/* 189 */     MCD_OPC_Decode, 169, 5, 99, // Opcode: f2FCMPNEZ_S
/* 193 */     MCD_OPC_FilterValue, 96, 17, 0, 0, // Skip to: 215
/* 198 */     MCD_OPC_CheckPredicate, 12, 134, 11, 0, // Skip to: 3153
/* 203 */     MCD_OPC_CheckField, 21, 11, 160, 15, 126, 11, 0, // Skip to: 3153
/* 211 */     MCD_OPC_Decode, 173, 5, 99, // Opcode: f2FCMPUOZ_S
/* 215 */     MCD_OPC_FilterValue, 128, 1, 16, 0, 0, // Skip to: 237
/* 221 */     MCD_OPC_CheckPredicate, 12, 111, 11, 0, // Skip to: 3153
/* 226 */     MCD_OPC_CheckField, 26, 6, 61, 104, 11, 0, // Skip to: 3153
/* 233 */     MCD_OPC_Decode, 159, 5, 100, // Opcode: f2FCMPHS_S
/* 237 */     MCD_OPC_FilterValue, 160, 1, 16, 0, 0, // Skip to: 259
/* 243 */     MCD_OPC_CheckPredicate, 12, 89, 11, 0, // Skip to: 3153
/* 248 */     MCD_OPC_CheckField, 26, 6, 61, 82, 11, 0, // Skip to: 3153
/* 255 */     MCD_OPC_Decode, 167, 5, 100, // Opcode: f2FCMPLT_S
/* 259 */     MCD_OPC_FilterValue, 192, 1, 16, 0, 0, // Skip to: 281
/* 265 */     MCD_OPC_CheckPredicate, 12, 67, 11, 0, // Skip to: 3153
/* 270 */     MCD_OPC_CheckField, 26, 6, 61, 60, 11, 0, // Skip to: 3153
/* 277 */     MCD_OPC_Decode, 171, 5, 100, // Opcode: f2FCMPNE_S
/* 281 */     MCD_OPC_FilterValue, 224, 1, 50, 11, 0, // Skip to: 3153
/* 287 */     MCD_OPC_CheckPredicate, 12, 45, 11, 0, // Skip to: 3153
/* 292 */     MCD_OPC_CheckField, 26, 6, 61, 38, 11, 0, // Skip to: 3153
/* 299 */     MCD_OPC_Decode, 175, 5, 100, // Opcode: f2FCMPUO_S
/* 303 */     MCD_OPC_FilterValue, 2, 129, 0, 0, // Skip to: 437
/* 308 */     MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 311 */     MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 332
/* 316 */     MCD_OPC_CheckPredicate, 12, 16, 11, 0, // Skip to: 3153
/* 321 */     MCD_OPC_CheckField, 26, 6, 61, 9, 11, 0, // Skip to: 3153
/* 328 */     MCD_OPC_Decode, 252, 5, 97, // Opcode: f2FMUL_S
/* 332 */     MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 353
/* 337 */     MCD_OPC_CheckPredicate, 12, 251, 10, 0, // Skip to: 3153
/* 342 */     MCD_OPC_CheckField, 26, 6, 61, 244, 10, 0, // Skip to: 3153
/* 349 */     MCD_OPC_Decode, 132, 6, 97, // Opcode: f2FNMUL_S
/* 353 */     MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 374
/* 358 */     MCD_OPC_CheckPredicate, 12, 230, 10, 0, // Skip to: 3153
/* 363 */     MCD_OPC_CheckField, 26, 6, 61, 223, 10, 0, // Skip to: 3153
/* 370 */     MCD_OPC_Decode, 248, 5, 101, // Opcode: f2FMULA_S
/* 374 */     MCD_OPC_FilterValue, 5, 16, 0, 0, // Skip to: 395
/* 379 */     MCD_OPC_CheckPredicate, 12, 209, 10, 0, // Skip to: 3153
/* 384 */     MCD_OPC_CheckField, 26, 6, 61, 202, 10, 0, // Skip to: 3153
/* 391 */     MCD_OPC_Decode, 130, 6, 101, // Opcode: f2FNMULS_S
/* 395 */     MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 416
/* 400 */     MCD_OPC_CheckPredicate, 12, 188, 10, 0, // Skip to: 3153
/* 405 */     MCD_OPC_CheckField, 26, 6, 61, 181, 10, 0, // Skip to: 3153
/* 412 */     MCD_OPC_Decode, 250, 5, 101, // Opcode: f2FMULS_S
/* 416 */     MCD_OPC_FilterValue, 7, 172, 10, 0, // Skip to: 3153
/* 421 */     MCD_OPC_CheckPredicate, 12, 167, 10, 0, // Skip to: 3153
/* 426 */     MCD_OPC_CheckField, 26, 6, 61, 160, 10, 0, // Skip to: 3153
/* 433 */     MCD_OPC_Decode, 128, 6, 101, // Opcode: f2FNMULA_S
/* 437 */     MCD_OPC_FilterValue, 3, 90, 0, 0, // Skip to: 532
/* 442 */     MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 445 */     MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 466
/* 450 */     MCD_OPC_CheckPredicate, 12, 138, 10, 0, // Skip to: 3153
/* 455 */     MCD_OPC_CheckField, 26, 6, 61, 131, 10, 0, // Skip to: 3153
/* 462 */     MCD_OPC_Decode, 177, 5, 97, // Opcode: f2FDIV_S
/* 466 */     MCD_OPC_FilterValue, 1, 17, 0, 0, // Skip to: 488
/* 471 */     MCD_OPC_CheckPredicate, 12, 117, 10, 0, // Skip to: 3153
/* 476 */     MCD_OPC_CheckField, 21, 11, 160, 15, 109, 10, 0, // Skip to: 3153
/* 484 */     MCD_OPC_Decode, 157, 6, 98, // Opcode: f2RECIP_S
/* 488 */     MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 510
/* 493 */     MCD_OPC_CheckPredicate, 12, 95, 10, 0, // Skip to: 3153
/* 498 */     MCD_OPC_CheckField, 21, 11, 160, 15, 87, 10, 0, // Skip to: 3153
/* 506 */     MCD_OPC_Decode, 138, 6, 98, // Opcode: f2FSQRT_S
/* 510 */     MCD_OPC_FilterValue, 3, 78, 10, 0, // Skip to: 3153
/* 515 */     MCD_OPC_CheckPredicate, 12, 73, 10, 0, // Skip to: 3153
/* 520 */     MCD_OPC_CheckField, 21, 11, 160, 15, 65, 10, 0, // Skip to: 3153
/* 528 */     MCD_OPC_Decode, 219, 5, 98, // Opcode: f2FINS
/* 532 */     MCD_OPC_FilterValue, 5, 103, 0, 0, // Skip to: 640
/* 537 */     MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 540 */     MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 561
/* 545 */     MCD_OPC_CheckPredicate, 12, 43, 10, 0, // Skip to: 3153
/* 550 */     MCD_OPC_CheckField, 26, 6, 61, 36, 10, 0, // Skip to: 3153
/* 557 */     MCD_OPC_Decode, 231, 5, 97, // Opcode: f2FMAXNM_S
/* 561 */     MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 582
/* 566 */     MCD_OPC_CheckPredicate, 12, 22, 10, 0, // Skip to: 3153
/* 571 */     MCD_OPC_CheckField, 26, 6, 61, 15, 10, 0, // Skip to: 3153
/* 578 */     MCD_OPC_Decode, 238, 5, 97, // Opcode: f2FMINNM_S
/* 582 */     MCD_OPC_FilterValue, 2, 24, 0, 0, // Skip to: 611
/* 587 */     MCD_OPC_CheckPredicate, 12, 1, 10, 0, // Skip to: 3153
/* 592 */     MCD_OPC_CheckField, 21, 11, 160, 15, 249, 9, 0, // Skip to: 3153
/* 600 */     MCD_OPC_CheckField, 0, 5, 0, 242, 9, 0, // Skip to: 3153
/* 607 */     MCD_OPC_Decode, 161, 5, 99, // Opcode: f2FCMPHZ_S
/* 611 */     MCD_OPC_FilterValue, 3, 233, 9, 0, // Skip to: 3153
/* 616 */     MCD_OPC_CheckPredicate, 12, 228, 9, 0, // Skip to: 3153
/* 621 */     MCD_OPC_CheckField, 21, 11, 160, 15, 220, 9, 0, // Skip to: 3153
/* 629 */     MCD_OPC_CheckField, 0, 5, 0, 213, 9, 0, // Skip to: 3153
/* 636 */     MCD_OPC_Decode, 163, 5, 99, // Opcode: f2FCMPLSZ_S
/* 640 */     MCD_OPC_FilterValue, 6, 87, 0, 0, // Skip to: 732
/* 645 */     MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 648 */     MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 669
/* 653 */     MCD_OPC_CheckPredicate, 12, 191, 9, 0, // Skip to: 3153
/* 658 */     MCD_OPC_CheckField, 26, 6, 61, 184, 9, 0, // Skip to: 3153
/* 665 */     MCD_OPC_Decode, 204, 5, 101, // Opcode: f2FFMULA_S
/* 669 */     MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 690
/* 674 */     MCD_OPC_CheckPredicate, 12, 170, 9, 0, // Skip to: 3153
/* 679 */     MCD_OPC_CheckField, 26, 6, 61, 163, 9, 0, // Skip to: 3153
/* 686 */     MCD_OPC_Decode, 206, 5, 101, // Opcode: f2FFMULS_S
/* 690 */     MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 711
/* 695 */     MCD_OPC_CheckPredicate, 12, 149, 9, 0, // Skip to: 3153
/* 700 */     MCD_OPC_CheckField, 26, 6, 61, 142, 9, 0, // Skip to: 3153
/* 707 */     MCD_OPC_Decode, 208, 5, 101, // Opcode: f2FFNMULA_S
/* 711 */     MCD_OPC_FilterValue, 3, 133, 9, 0, // Skip to: 3153
/* 716 */     MCD_OPC_CheckPredicate, 12, 128, 9, 0, // Skip to: 3153
/* 721 */     MCD_OPC_CheckField, 26, 6, 61, 121, 9, 0, // Skip to: 3153
/* 728 */     MCD_OPC_Decode, 210, 5, 101, // Opcode: f2FFNMULS_S
/* 732 */     MCD_OPC_FilterValue, 7, 23, 0, 0, // Skip to: 760
/* 737 */     MCD_OPC_CheckPredicate, 12, 107, 9, 0, // Skip to: 3153
/* 742 */     MCD_OPC_CheckField, 26, 6, 61, 100, 9, 0, // Skip to: 3153
/* 749 */     MCD_OPC_CheckField, 5, 3, 1, 93, 9, 0, // Skip to: 3153
/* 756 */     MCD_OPC_Decode, 136, 6, 97, // Opcode: f2FSEL_S
/* 760 */     MCD_OPC_FilterValue, 8, 133, 0, 0, // Skip to: 898
/* 765 */     MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 768 */     MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 789
/* 773 */     MCD_OPC_CheckPredicate, 13, 71, 9, 0, // Skip to: 3153
/* 778 */     MCD_OPC_CheckField, 26, 6, 61, 64, 9, 0, // Skip to: 3153
/* 785 */     MCD_OPC_Decode, 154, 5, 102, // Opcode: f2FADD_D
/* 789 */     MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 810
/* 794 */     MCD_OPC_CheckPredicate, 13, 50, 9, 0, // Skip to: 3153
/* 799 */     MCD_OPC_CheckField, 26, 6, 61, 43, 9, 0, // Skip to: 3153
/* 806 */     MCD_OPC_Decode, 148, 6, 102, // Opcode: f2FSUB_D
/* 810 */     MCD_OPC_FilterValue, 4, 17, 0, 0, // Skip to: 832
/* 815 */     MCD_OPC_CheckPredicate, 13, 29, 9, 0, // Skip to: 3153
/* 820 */     MCD_OPC_CheckField, 21, 11, 160, 15, 21, 9, 0, // Skip to: 3153
/* 828 */     MCD_OPC_Decode, 240, 5, 103, // Opcode: f2FMOV_D
/* 832 */     MCD_OPC_FilterValue, 5, 17, 0, 0, // Skip to: 854
/* 837 */     MCD_OPC_CheckPredicate, 12, 7, 9, 0, // Skip to: 3153
/* 842 */     MCD_OPC_CheckField, 21, 11, 160, 15, 255, 8, 0, // Skip to: 3153
/* 850 */     MCD_OPC_Decode, 239, 5, 98, // Opcode: f2FMOVX
/* 854 */     MCD_OPC_FilterValue, 6, 17, 0, 0, // Skip to: 876
/* 859 */     MCD_OPC_CheckPredicate, 13, 241, 8, 0, // Skip to: 3153
/* 864 */     MCD_OPC_CheckField, 21, 11, 160, 15, 233, 8, 0, // Skip to: 3153
/* 872 */     MCD_OPC_Decode, 152, 5, 103, // Opcode: f2FABS_D
/* 876 */     MCD_OPC_FilterValue, 7, 224, 8, 0, // Skip to: 3153
/* 881 */     MCD_OPC_CheckPredicate, 13, 219, 8, 0, // Skip to: 3153
/* 886 */     MCD_OPC_CheckField, 21, 11, 160, 15, 211, 8, 0, // Skip to: 3153
/* 894 */     MCD_OPC_Decode, 253, 5, 103, // Opcode: f2FNEG_D
/* 898 */     MCD_OPC_FilterValue, 9, 179, 0, 0, // Skip to: 1082
/* 903 */     MCD_OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 906 */     MCD_OPC_FilterValue, 0, 17, 0, 0, // Skip to: 928
/* 911 */     MCD_OPC_CheckPredicate, 13, 189, 8, 0, // Skip to: 3153
/* 916 */     MCD_OPC_CheckField, 21, 11, 160, 15, 181, 8, 0, // Skip to: 3153
/* 924 */     MCD_OPC_Decode, 156, 5, 104, // Opcode: f2FCMPHSZ_D
/* 928 */     MCD_OPC_FilterValue, 32, 17, 0, 0, // Skip to: 950
/* 933 */     MCD_OPC_CheckPredicate, 13, 167, 8, 0, // Skip to: 3153
/* 938 */     MCD_OPC_CheckField, 21, 11, 160, 15, 159, 8, 0, // Skip to: 3153
/* 946 */     MCD_OPC_Decode, 164, 5, 104, // Opcode: f2FCMPLTZ_D
/* 950 */     MCD_OPC_FilterValue, 64, 17, 0, 0, // Skip to: 972
/* 955 */     MCD_OPC_CheckPredicate, 13, 145, 8, 0, // Skip to: 3153
/* 960 */     MCD_OPC_CheckField, 21, 11, 160, 15, 137, 8, 0, // Skip to: 3153
/* 968 */     MCD_OPC_Decode, 168, 5, 104, // Opcode: f2FCMPNEZ_D
/* 972 */     MCD_OPC_FilterValue, 96, 17, 0, 0, // Skip to: 994
/* 977 */     MCD_OPC_CheckPredicate, 13, 123, 8, 0, // Skip to: 3153
/* 982 */     MCD_OPC_CheckField, 21, 11, 160, 15, 115, 8, 0, // Skip to: 3153
/* 990 */     MCD_OPC_Decode, 172, 5, 104, // Opcode: f2FCMPUOZ_D
/* 994 */     MCD_OPC_FilterValue, 128, 1, 16, 0, 0, // Skip to: 1016
/* 1000 */    MCD_OPC_CheckPredicate, 13, 100, 8, 0, // Skip to: 3153
/* 1005 */    MCD_OPC_CheckField, 26, 6, 61, 93, 8, 0, // Skip to: 3153
/* 1012 */    MCD_OPC_Decode, 158, 5, 105, // Opcode: f2FCMPHS_D
/* 1016 */    MCD_OPC_FilterValue, 160, 1, 16, 0, 0, // Skip to: 1038
/* 1022 */    MCD_OPC_CheckPredicate, 13, 78, 8, 0, // Skip to: 3153
/* 1027 */    MCD_OPC_CheckField, 26, 6, 61, 71, 8, 0, // Skip to: 3153
/* 1034 */    MCD_OPC_Decode, 166, 5, 105, // Opcode: f2FCMPLT_D
/* 1038 */    MCD_OPC_FilterValue, 192, 1, 16, 0, 0, // Skip to: 1060
/* 1044 */    MCD_OPC_CheckPredicate, 13, 56, 8, 0, // Skip to: 3153
/* 1049 */    MCD_OPC_CheckField, 26, 6, 61, 49, 8, 0, // Skip to: 3153
/* 1056 */    MCD_OPC_Decode, 170, 5, 105, // Opcode: f2FCMPNE_D
/* 1060 */    MCD_OPC_FilterValue, 224, 1, 39, 8, 0, // Skip to: 3153
/* 1066 */    MCD_OPC_CheckPredicate, 13, 34, 8, 0, // Skip to: 3153
/* 1071 */    MCD_OPC_CheckField, 26, 6, 61, 27, 8, 0, // Skip to: 3153
/* 1078 */    MCD_OPC_Decode, 174, 5, 105, // Opcode: f2FCMPUO_D
/* 1082 */    MCD_OPC_FilterValue, 10, 129, 0, 0, // Skip to: 1216
/* 1087 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 1090 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 1111
/* 1095 */    MCD_OPC_CheckPredicate, 13, 5, 8, 0, // Skip to: 3153
/* 1100 */    MCD_OPC_CheckField, 26, 6, 61, 254, 7, 0, // Skip to: 3153
/* 1107 */    MCD_OPC_Decode, 251, 5, 102, // Opcode: f2FMUL_D
/* 1111 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 1132
/* 1116 */    MCD_OPC_CheckPredicate, 13, 240, 7, 0, // Skip to: 3153
/* 1121 */    MCD_OPC_CheckField, 26, 6, 61, 233, 7, 0, // Skip to: 3153
/* 1128 */    MCD_OPC_Decode, 131, 6, 102, // Opcode: f2FNMUL_D
/* 1132 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 1153
/* 1137 */    MCD_OPC_CheckPredicate, 13, 219, 7, 0, // Skip to: 3153
/* 1142 */    MCD_OPC_CheckField, 26, 6, 61, 212, 7, 0, // Skip to: 3153
/* 1149 */    MCD_OPC_Decode, 247, 5, 106, // Opcode: f2FMULA_D
/* 1153 */    MCD_OPC_FilterValue, 5, 16, 0, 0, // Skip to: 1174
/* 1158 */    MCD_OPC_CheckPredicate, 13, 198, 7, 0, // Skip to: 3153
/* 1163 */    MCD_OPC_CheckField, 26, 6, 61, 191, 7, 0, // Skip to: 3153
/* 1170 */    MCD_OPC_Decode, 129, 6, 106, // Opcode: f2FNMULS_D
/* 1174 */    MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 1195
/* 1179 */    MCD_OPC_CheckPredicate, 13, 177, 7, 0, // Skip to: 3153
/* 1184 */    MCD_OPC_CheckField, 26, 6, 61, 170, 7, 0, // Skip to: 3153
/* 1191 */    MCD_OPC_Decode, 249, 5, 106, // Opcode: f2FMULS_D
/* 1195 */    MCD_OPC_FilterValue, 7, 161, 7, 0, // Skip to: 3153
/* 1200 */    MCD_OPC_CheckPredicate, 13, 156, 7, 0, // Skip to: 3153
/* 1205 */    MCD_OPC_CheckField, 26, 6, 61, 149, 7, 0, // Skip to: 3153
/* 1212 */    MCD_OPC_Decode, 255, 5, 106, // Opcode: f2FNMULA_D
/* 1216 */    MCD_OPC_FilterValue, 11, 68, 0, 0, // Skip to: 1289
/* 1221 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 1224 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 1245
/* 1229 */    MCD_OPC_CheckPredicate, 13, 127, 7, 0, // Skip to: 3153
/* 1234 */    MCD_OPC_CheckField, 26, 6, 61, 120, 7, 0, // Skip to: 3153
/* 1241 */    MCD_OPC_Decode, 176, 5, 102, // Opcode: f2FDIV_D
/* 1245 */    MCD_OPC_FilterValue, 1, 17, 0, 0, // Skip to: 1267
/* 1250 */    MCD_OPC_CheckPredicate, 13, 106, 7, 0, // Skip to: 3153
/* 1255 */    MCD_OPC_CheckField, 21, 11, 160, 15, 98, 7, 0, // Skip to: 3153
/* 1263 */    MCD_OPC_Decode, 156, 6, 103, // Opcode: f2RECIP_D
/* 1267 */    MCD_OPC_FilterValue, 2, 89, 7, 0, // Skip to: 3153
/* 1272 */    MCD_OPC_CheckPredicate, 13, 84, 7, 0, // Skip to: 3153
/* 1277 */    MCD_OPC_CheckField, 21, 11, 160, 15, 76, 7, 0, // Skip to: 3153
/* 1285 */    MCD_OPC_Decode, 137, 6, 103, // Opcode: f2FSQRT_D
/* 1289 */    MCD_OPC_FilterValue, 13, 103, 0, 0, // Skip to: 1397
/* 1294 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 1297 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 1318
/* 1302 */    MCD_OPC_CheckPredicate, 13, 54, 7, 0, // Skip to: 3153
/* 1307 */    MCD_OPC_CheckField, 26, 6, 61, 47, 7, 0, // Skip to: 3153
/* 1314 */    MCD_OPC_Decode, 230, 5, 102, // Opcode: f2FMAXNM_D
/* 1318 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 1339
/* 1323 */    MCD_OPC_CheckPredicate, 13, 33, 7, 0, // Skip to: 3153
/* 1328 */    MCD_OPC_CheckField, 26, 6, 61, 26, 7, 0, // Skip to: 3153
/* 1335 */    MCD_OPC_Decode, 237, 5, 102, // Opcode: f2FMINNM_D
/* 1339 */    MCD_OPC_FilterValue, 2, 24, 0, 0, // Skip to: 1368
/* 1344 */    MCD_OPC_CheckPredicate, 13, 12, 7, 0, // Skip to: 3153
/* 1349 */    MCD_OPC_CheckField, 21, 11, 160, 15, 4, 7, 0, // Skip to: 3153
/* 1357 */    MCD_OPC_CheckField, 0, 5, 0, 253, 6, 0, // Skip to: 3153
/* 1364 */    MCD_OPC_Decode, 160, 5, 104, // Opcode: f2FCMPHZ_D
/* 1368 */    MCD_OPC_FilterValue, 3, 244, 6, 0, // Skip to: 3153
/* 1373 */    MCD_OPC_CheckPredicate, 13, 239, 6, 0, // Skip to: 3153
/* 1378 */    MCD_OPC_CheckField, 21, 11, 160, 15, 231, 6, 0, // Skip to: 3153
/* 1386 */    MCD_OPC_CheckField, 0, 5, 0, 224, 6, 0, // Skip to: 3153
/* 1393 */    MCD_OPC_Decode, 162, 5, 104, // Opcode: f2FCMPLSZ_D
/* 1397 */    MCD_OPC_FilterValue, 14, 87, 0, 0, // Skip to: 1489
/* 1402 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 1405 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 1426
/* 1410 */    MCD_OPC_CheckPredicate, 13, 202, 6, 0, // Skip to: 3153
/* 1415 */    MCD_OPC_CheckField, 26, 6, 61, 195, 6, 0, // Skip to: 3153
/* 1422 */    MCD_OPC_Decode, 203, 5, 106, // Opcode: f2FFMULA_D
/* 1426 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 1447
/* 1431 */    MCD_OPC_CheckPredicate, 13, 181, 6, 0, // Skip to: 3153
/* 1436 */    MCD_OPC_CheckField, 26, 6, 61, 174, 6, 0, // Skip to: 3153
/* 1443 */    MCD_OPC_Decode, 205, 5, 106, // Opcode: f2FFMULS_D
/* 1447 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 1468
/* 1452 */    MCD_OPC_CheckPredicate, 13, 160, 6, 0, // Skip to: 3153
/* 1457 */    MCD_OPC_CheckField, 26, 6, 61, 153, 6, 0, // Skip to: 3153
/* 1464 */    MCD_OPC_Decode, 207, 5, 106, // Opcode: f2FFNMULA_D
/* 1468 */    MCD_OPC_FilterValue, 3, 144, 6, 0, // Skip to: 3153
/* 1473 */    MCD_OPC_CheckPredicate, 13, 139, 6, 0, // Skip to: 3153
/* 1478 */    MCD_OPC_CheckField, 26, 6, 61, 132, 6, 0, // Skip to: 3153
/* 1485 */    MCD_OPC_Decode, 209, 5, 106, // Opcode: f2FFNMULS_D
/* 1489 */    MCD_OPC_FilterValue, 15, 23, 0, 0, // Skip to: 1517
/* 1494 */    MCD_OPC_CheckPredicate, 13, 118, 6, 0, // Skip to: 3153
/* 1499 */    MCD_OPC_CheckField, 26, 6, 61, 111, 6, 0, // Skip to: 3153
/* 1506 */    MCD_OPC_CheckField, 5, 3, 1, 104, 6, 0, // Skip to: 3153
/* 1513 */    MCD_OPC_Decode, 135, 6, 102, // Opcode: f2FSEL_D
/* 1517 */    MCD_OPC_FilterValue, 24, 179, 0, 0, // Skip to: 1701
/* 1522 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 1525 */    MCD_OPC_FilterValue, 0, 17, 0, 0, // Skip to: 1547
/* 1530 */    MCD_OPC_CheckPredicate, 12, 82, 6, 0, // Skip to: 3153
/* 1535 */    MCD_OPC_CheckField, 21, 11, 160, 15, 74, 6, 0, // Skip to: 3153
/* 1543 */    MCD_OPC_Decode, 183, 5, 98, // Opcode: f2FF32TOSI32_RN
/* 1547 */    MCD_OPC_FilterValue, 1, 17, 0, 0, // Skip to: 1569
/* 1552 */    MCD_OPC_CheckPredicate, 12, 60, 6, 0, // Skip to: 3153
/* 1557 */    MCD_OPC_CheckField, 21, 11, 160, 15, 52, 6, 0, // Skip to: 3153
/* 1565 */    MCD_OPC_Decode, 186, 5, 98, // Opcode: f2FF32TOSI32_RZ
/* 1569 */    MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 1591
/* 1574 */    MCD_OPC_CheckPredicate, 12, 38, 6, 0, // Skip to: 3153
/* 1579 */    MCD_OPC_CheckField, 21, 11, 160, 15, 30, 6, 0, // Skip to: 3153
/* 1587 */    MCD_OPC_Decode, 185, 5, 98, // Opcode: f2FF32TOSI32_RPI
/* 1591 */    MCD_OPC_FilterValue, 3, 17, 0, 0, // Skip to: 1613
/* 1596 */    MCD_OPC_CheckPredicate, 12, 16, 6, 0, // Skip to: 3153
/* 1601 */    MCD_OPC_CheckField, 21, 11, 160, 15, 8, 6, 0, // Skip to: 3153
/* 1609 */    MCD_OPC_Decode, 184, 5, 98, // Opcode: f2FF32TOSI32_RNI
/* 1613 */    MCD_OPC_FilterValue, 4, 17, 0, 0, // Skip to: 1635
/* 1618 */    MCD_OPC_CheckPredicate, 12, 250, 5, 0, // Skip to: 3153
/* 1623 */    MCD_OPC_CheckField, 21, 11, 160, 15, 242, 5, 0, // Skip to: 3153
/* 1631 */    MCD_OPC_Decode, 187, 5, 98, // Opcode: f2FF32TOUI32_RN
/* 1635 */    MCD_OPC_FilterValue, 5, 17, 0, 0, // Skip to: 1657
/* 1640 */    MCD_OPC_CheckPredicate, 12, 228, 5, 0, // Skip to: 3153
/* 1645 */    MCD_OPC_CheckField, 21, 11, 160, 15, 220, 5, 0, // Skip to: 3153
/* 1653 */    MCD_OPC_Decode, 190, 5, 98, // Opcode: f2FF32TOUI32_RZ
/* 1657 */    MCD_OPC_FilterValue, 6, 17, 0, 0, // Skip to: 1679
/* 1662 */    MCD_OPC_CheckPredicate, 12, 206, 5, 0, // Skip to: 3153
/* 1667 */    MCD_OPC_CheckField, 21, 11, 160, 15, 198, 5, 0, // Skip to: 3153
/* 1675 */    MCD_OPC_Decode, 189, 5, 98, // Opcode: f2FF32TOUI32_RPI
/* 1679 */    MCD_OPC_FilterValue, 7, 189, 5, 0, // Skip to: 3153
/* 1684 */    MCD_OPC_CheckPredicate, 12, 184, 5, 0, // Skip to: 3153
/* 1689 */    MCD_OPC_CheckField, 21, 11, 160, 15, 176, 5, 0, // Skip to: 3153
/* 1697 */    MCD_OPC_Decode, 188, 5, 98, // Opcode: f2FF32TOUI32_RNI
/* 1701 */    MCD_OPC_FilterValue, 25, 179, 0, 0, // Skip to: 1885
/* 1706 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 1709 */    MCD_OPC_FilterValue, 0, 17, 0, 0, // Skip to: 1731
/* 1714 */    MCD_OPC_CheckPredicate, 13, 154, 5, 0, // Skip to: 3153
/* 1719 */    MCD_OPC_CheckField, 21, 11, 160, 15, 146, 5, 0, // Skip to: 3153
/* 1727 */    MCD_OPC_Decode, 195, 5, 107, // Opcode: f2FF64TOSI32_RN
/* 1731 */    MCD_OPC_FilterValue, 1, 17, 0, 0, // Skip to: 1753
/* 1736 */    MCD_OPC_CheckPredicate, 13, 132, 5, 0, // Skip to: 3153
/* 1741 */    MCD_OPC_CheckField, 21, 11, 160, 15, 124, 5, 0, // Skip to: 3153
/* 1749 */    MCD_OPC_Decode, 198, 5, 107, // Opcode: f2FF64TOSI32_RZ
/* 1753 */    MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 1775
/* 1758 */    MCD_OPC_CheckPredicate, 13, 110, 5, 0, // Skip to: 3153
/* 1763 */    MCD_OPC_CheckField, 21, 11, 160, 15, 102, 5, 0, // Skip to: 3153
/* 1771 */    MCD_OPC_Decode, 197, 5, 107, // Opcode: f2FF64TOSI32_RPI
/* 1775 */    MCD_OPC_FilterValue, 3, 17, 0, 0, // Skip to: 1797
/* 1780 */    MCD_OPC_CheckPredicate, 13, 88, 5, 0, // Skip to: 3153
/* 1785 */    MCD_OPC_CheckField, 21, 11, 160, 15, 80, 5, 0, // Skip to: 3153
/* 1793 */    MCD_OPC_Decode, 196, 5, 107, // Opcode: f2FF64TOSI32_RNI
/* 1797 */    MCD_OPC_FilterValue, 4, 17, 0, 0, // Skip to: 1819
/* 1802 */    MCD_OPC_CheckPredicate, 13, 66, 5, 0, // Skip to: 3153
/* 1807 */    MCD_OPC_CheckField, 21, 11, 160, 15, 58, 5, 0, // Skip to: 3153
/* 1815 */    MCD_OPC_Decode, 199, 5, 107, // Opcode: f2FF64TOUI32_RN
/* 1819 */    MCD_OPC_FilterValue, 5, 17, 0, 0, // Skip to: 1841
/* 1824 */    MCD_OPC_CheckPredicate, 13, 44, 5, 0, // Skip to: 3153
/* 1829 */    MCD_OPC_CheckField, 21, 11, 160, 15, 36, 5, 0, // Skip to: 3153
/* 1837 */    MCD_OPC_Decode, 202, 5, 107, // Opcode: f2FF64TOUI32_RZ
/* 1841 */    MCD_OPC_FilterValue, 6, 17, 0, 0, // Skip to: 1863
/* 1846 */    MCD_OPC_CheckPredicate, 13, 22, 5, 0, // Skip to: 3153
/* 1851 */    MCD_OPC_CheckField, 21, 11, 160, 15, 14, 5, 0, // Skip to: 3153
/* 1859 */    MCD_OPC_Decode, 201, 5, 107, // Opcode: f2FF64TOUI32_RPI
/* 1863 */    MCD_OPC_FilterValue, 7, 5, 5, 0, // Skip to: 3153
/* 1868 */    MCD_OPC_CheckPredicate, 13, 0, 5, 0, // Skip to: 3153
/* 1873 */    MCD_OPC_CheckField, 21, 11, 160, 15, 248, 4, 0, // Skip to: 3153
/* 1881 */    MCD_OPC_Decode, 200, 5, 107, // Opcode: f2FF64TOUI32_RNI
/* 1885 */    MCD_OPC_FilterValue, 26, 47, 0, 0, // Skip to: 1937
/* 1890 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 1893 */    MCD_OPC_FilterValue, 6, 17, 0, 0, // Skip to: 1915
/* 1898 */    MCD_OPC_CheckPredicate, 13, 226, 4, 0, // Skip to: 3153
/* 1903 */    MCD_OPC_CheckField, 21, 11, 160, 15, 218, 4, 0, // Skip to: 3153
/* 1911 */    MCD_OPC_Decode, 178, 5, 107, // Opcode: f2FDTOS
/* 1915 */    MCD_OPC_FilterValue, 7, 209, 4, 0, // Skip to: 3153
/* 1920 */    MCD_OPC_CheckPredicate, 13, 204, 4, 0, // Skip to: 3153
/* 1925 */    MCD_OPC_CheckField, 21, 11, 160, 15, 196, 4, 0, // Skip to: 3153
/* 1933 */    MCD_OPC_Decode, 143, 6, 108, // Opcode: f2FSTOD
/* 1937 */    MCD_OPC_FilterValue, 27, 91, 0, 0, // Skip to: 2033
/* 1942 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 1945 */    MCD_OPC_FilterValue, 0, 17, 0, 0, // Skip to: 1967
/* 1950 */    MCD_OPC_CheckPredicate, 13, 174, 4, 0, // Skip to: 3153
/* 1955 */    MCD_OPC_CheckField, 21, 11, 160, 15, 166, 4, 0, // Skip to: 3153
/* 1963 */    MCD_OPC_Decode, 232, 5, 109, // Opcode: f2FMFVRH_D
/* 1967 */    MCD_OPC_FilterValue, 1, 17, 0, 0, // Skip to: 1989
/* 1972 */    MCD_OPC_CheckPredicate, 12, 152, 4, 0, // Skip to: 3153
/* 1977 */    MCD_OPC_CheckField, 21, 11, 160, 15, 144, 4, 0, // Skip to: 3153
/* 1985 */    MCD_OPC_Decode, 233, 5, 110, // Opcode: f2FMFVRL
/* 1989 */    MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 2011
/* 1994 */    MCD_OPC_CheckPredicate, 13, 130, 4, 0, // Skip to: 3153
/* 1999 */    MCD_OPC_CheckField, 21, 11, 160, 15, 122, 4, 0, // Skip to: 3153
/* 2007 */    MCD_OPC_Decode, 242, 5, 111, // Opcode: f2FMTVRH_D
/* 2011 */    MCD_OPC_FilterValue, 3, 113, 4, 0, // Skip to: 3153
/* 2016 */    MCD_OPC_CheckPredicate, 12, 108, 4, 0, // Skip to: 3153
/* 2021 */    MCD_OPC_CheckField, 21, 11, 160, 15, 100, 4, 0, // Skip to: 3153
/* 2029 */    MCD_OPC_Decode, 243, 5, 112, // Opcode: f2FMTVRL
/* 2033 */    MCD_OPC_FilterValue, 31, 87, 0, 0, // Skip to: 2125
/* 2038 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2041 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 2062
/* 2046 */    MCD_OPC_CheckPredicate, 13, 78, 4, 0, // Skip to: 3153
/* 2051 */    MCD_OPC_CheckField, 26, 6, 61, 71, 4, 0, // Skip to: 3153
/* 2058 */    MCD_OPC_Decode, 236, 5, 113, // Opcode: f2FMFVR_D
/* 2062 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2083
/* 2067 */    MCD_OPC_CheckPredicate, 12, 57, 4, 0, // Skip to: 3153
/* 2072 */    MCD_OPC_CheckField, 26, 6, 61, 50, 4, 0, // Skip to: 3153
/* 2079 */    MCD_OPC_Decode, 234, 5, 113, // Opcode: f2FMFVRL_2
/* 2083 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 2104
/* 2088 */    MCD_OPC_CheckPredicate, 13, 36, 4, 0, // Skip to: 3153
/* 2093 */    MCD_OPC_CheckField, 26, 6, 61, 29, 4, 0, // Skip to: 3153
/* 2100 */    MCD_OPC_Decode, 246, 5, 114, // Opcode: f2FMTVR_D
/* 2104 */    MCD_OPC_FilterValue, 6, 20, 4, 0, // Skip to: 3153
/* 2109 */    MCD_OPC_CheckPredicate, 12, 15, 4, 0, // Skip to: 3153
/* 2114 */    MCD_OPC_CheckField, 26, 6, 61, 8, 4, 0, // Skip to: 3153
/* 2121 */    MCD_OPC_Decode, 244, 5, 115, // Opcode: f2FMTVRL_2
/* 2125 */    MCD_OPC_FilterValue, 32, 16, 0, 0, // Skip to: 2146
/* 2130 */    MCD_OPC_CheckPredicate, 12, 250, 3, 0, // Skip to: 3153
/* 2135 */    MCD_OPC_CheckField, 26, 6, 61, 243, 3, 0, // Skip to: 3153
/* 2142 */    MCD_OPC_Decode, 227, 5, 116, // Opcode: f2FLD_S
/* 2146 */    MCD_OPC_FilterValue, 33, 16, 0, 0, // Skip to: 2167
/* 2151 */    MCD_OPC_CheckPredicate, 13, 229, 3, 0, // Skip to: 3153
/* 2156 */    MCD_OPC_CheckField, 26, 6, 61, 222, 3, 0, // Skip to: 3153
/* 2163 */    MCD_OPC_Decode, 226, 5, 117, // Opcode: f2FLD_D
/* 2167 */    MCD_OPC_FilterValue, 36, 16, 0, 0, // Skip to: 2188
/* 2172 */    MCD_OPC_CheckPredicate, 12, 208, 3, 0, // Skip to: 3153
/* 2177 */    MCD_OPC_CheckField, 26, 6, 61, 201, 3, 0, // Skip to: 3153
/* 2184 */    MCD_OPC_Decode, 147, 6, 116, // Opcode: f2FST_S
/* 2188 */    MCD_OPC_FilterValue, 37, 16, 0, 0, // Skip to: 2209
/* 2193 */    MCD_OPC_CheckPredicate, 13, 187, 3, 0, // Skip to: 3153
/* 2198 */    MCD_OPC_CheckField, 26, 6, 61, 180, 3, 0, // Skip to: 3153
/* 2205 */    MCD_OPC_Decode, 146, 6, 117, // Opcode: f2FST_D
/* 2209 */    MCD_OPC_FilterValue, 40, 23, 0, 0, // Skip to: 2237
/* 2214 */    MCD_OPC_CheckPredicate, 12, 166, 3, 0, // Skip to: 3153
/* 2219 */    MCD_OPC_CheckField, 26, 6, 61, 159, 3, 0, // Skip to: 3153
/* 2226 */    MCD_OPC_CheckField, 7, 1, 0, 152, 3, 0, // Skip to: 3153
/* 2233 */    MCD_OPC_Decode, 225, 5, 118, // Opcode: f2FLDR_S
/* 2237 */    MCD_OPC_FilterValue, 41, 23, 0, 0, // Skip to: 2265
/* 2242 */    MCD_OPC_CheckPredicate, 13, 138, 3, 0, // Skip to: 3153
/* 2247 */    MCD_OPC_CheckField, 26, 6, 61, 131, 3, 0, // Skip to: 3153
/* 2254 */    MCD_OPC_CheckField, 7, 1, 0, 124, 3, 0, // Skip to: 3153
/* 2261 */    MCD_OPC_Decode, 224, 5, 119, // Opcode: f2FLDR_D
/* 2265 */    MCD_OPC_FilterValue, 44, 23, 0, 0, // Skip to: 2293
/* 2270 */    MCD_OPC_CheckPredicate, 12, 110, 3, 0, // Skip to: 3153
/* 2275 */    MCD_OPC_CheckField, 26, 6, 61, 103, 3, 0, // Skip to: 3153
/* 2282 */    MCD_OPC_CheckField, 7, 1, 0, 96, 3, 0, // Skip to: 3153
/* 2289 */    MCD_OPC_Decode, 145, 6, 118, // Opcode: f2FSTR_S
/* 2293 */    MCD_OPC_FilterValue, 45, 23, 0, 0, // Skip to: 2321
/* 2298 */    MCD_OPC_CheckPredicate, 13, 82, 3, 0, // Skip to: 3153
/* 2303 */    MCD_OPC_CheckField, 26, 6, 61, 75, 3, 0, // Skip to: 3153
/* 2310 */    MCD_OPC_CheckField, 7, 1, 0, 68, 3, 0, // Skip to: 3153
/* 2317 */    MCD_OPC_Decode, 144, 6, 119, // Opcode: f2FSTR_D
/* 2321 */    MCD_OPC_FilterValue, 48, 45, 0, 0, // Skip to: 2371
/* 2326 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2329 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 2350
/* 2334 */    MCD_OPC_CheckPredicate, 12, 46, 3, 0, // Skip to: 3153
/* 2339 */    MCD_OPC_CheckField, 26, 6, 61, 39, 3, 0, // Skip to: 3153
/* 2346 */    MCD_OPC_Decode, 223, 5, 120, // Opcode: f2FLDM_S
/* 2350 */    MCD_OPC_FilterValue, 4, 30, 3, 0, // Skip to: 3153
/* 2355 */    MCD_OPC_CheckPredicate, 12, 25, 3, 0, // Skip to: 3153
/* 2360 */    MCD_OPC_CheckField, 26, 6, 61, 18, 3, 0, // Skip to: 3153
/* 2367 */    MCD_OPC_Decode, 221, 5, 120, // Opcode: f2FLDMU_S
/* 2371 */    MCD_OPC_FilterValue, 49, 45, 0, 0, // Skip to: 2421
/* 2376 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2379 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 2400
/* 2384 */    MCD_OPC_CheckPredicate, 13, 252, 2, 0, // Skip to: 3153
/* 2389 */    MCD_OPC_CheckField, 26, 6, 61, 245, 2, 0, // Skip to: 3153
/* 2396 */    MCD_OPC_Decode, 222, 5, 121, // Opcode: f2FLDM_D
/* 2400 */    MCD_OPC_FilterValue, 4, 236, 2, 0, // Skip to: 3153
/* 2405 */    MCD_OPC_CheckPredicate, 13, 231, 2, 0, // Skip to: 3153
/* 2410 */    MCD_OPC_CheckField, 26, 6, 61, 224, 2, 0, // Skip to: 3153
/* 2417 */    MCD_OPC_Decode, 220, 5, 121, // Opcode: f2FLDMU_D
/* 2421 */    MCD_OPC_FilterValue, 52, 45, 0, 0, // Skip to: 2471
/* 2426 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2429 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 2450
/* 2434 */    MCD_OPC_CheckPredicate, 12, 202, 2, 0, // Skip to: 3153
/* 2439 */    MCD_OPC_CheckField, 26, 6, 61, 195, 2, 0, // Skip to: 3153
/* 2446 */    MCD_OPC_Decode, 142, 6, 120, // Opcode: f2FSTM_S
/* 2450 */    MCD_OPC_FilterValue, 4, 186, 2, 0, // Skip to: 3153
/* 2455 */    MCD_OPC_CheckPredicate, 12, 181, 2, 0, // Skip to: 3153
/* 2460 */    MCD_OPC_CheckField, 26, 6, 61, 174, 2, 0, // Skip to: 3153
/* 2467 */    MCD_OPC_Decode, 140, 6, 120, // Opcode: f2FSTMU_S
/* 2471 */    MCD_OPC_FilterValue, 53, 45, 0, 0, // Skip to: 2521
/* 2476 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2479 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 2500
/* 2484 */    MCD_OPC_CheckPredicate, 13, 152, 2, 0, // Skip to: 3153
/* 2489 */    MCD_OPC_CheckField, 26, 6, 61, 145, 2, 0, // Skip to: 3153
/* 2496 */    MCD_OPC_Decode, 141, 6, 121, // Opcode: f2FSTM_D
/* 2500 */    MCD_OPC_FilterValue, 4, 136, 2, 0, // Skip to: 3153
/* 2505 */    MCD_OPC_CheckPredicate, 13, 131, 2, 0, // Skip to: 3153
/* 2510 */    MCD_OPC_CheckField, 26, 6, 61, 124, 2, 0, // Skip to: 3153
/* 2517 */    MCD_OPC_Decode, 139, 6, 121, // Opcode: f2FSTMU_D
/* 2521 */    MCD_OPC_FilterValue, 56, 23, 0, 0, // Skip to: 2549
/* 2526 */    MCD_OPC_CheckPredicate, 12, 110, 2, 0, // Skip to: 3153
/* 2531 */    MCD_OPC_CheckField, 26, 6, 61, 103, 2, 0, // Skip to: 3153
/* 2538 */    MCD_OPC_CheckField, 16, 5, 0, 96, 2, 0, // Skip to: 3153
/* 2545 */    MCD_OPC_Decode, 229, 5, 122, // Opcode: f2FLRW_S
/* 2549 */    MCD_OPC_FilterValue, 57, 23, 0, 0, // Skip to: 2577
/* 2554 */    MCD_OPC_CheckPredicate, 12, 82, 2, 0, // Skip to: 3153
/* 2559 */    MCD_OPC_CheckField, 26, 6, 61, 75, 2, 0, // Skip to: 3153
/* 2566 */    MCD_OPC_CheckField, 16, 5, 0, 68, 2, 0, // Skip to: 3153
/* 2573 */    MCD_OPC_Decode, 228, 5, 123, // Opcode: f2FLRW_D
/* 2577 */    MCD_OPC_FilterValue, 65, 91, 0, 0, // Skip to: 2673
/* 2582 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2585 */    MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 2607
/* 2590 */    MCD_OPC_CheckPredicate, 12, 46, 2, 0, // Skip to: 3153
/* 2595 */    MCD_OPC_CheckField, 21, 11, 160, 15, 38, 2, 0, // Skip to: 3153
/* 2603 */    MCD_OPC_Decode, 218, 5, 98, // Opcode: f2FFTOXU32_S
/* 2607 */    MCD_OPC_FilterValue, 3, 17, 0, 0, // Skip to: 2629
/* 2612 */    MCD_OPC_CheckPredicate, 12, 24, 2, 0, // Skip to: 3153
/* 2617 */    MCD_OPC_CheckField, 21, 11, 160, 15, 16, 2, 0, // Skip to: 3153
/* 2625 */    MCD_OPC_Decode, 216, 5, 98, // Opcode: f2FFTOXS32_S
/* 2629 */    MCD_OPC_FilterValue, 4, 17, 0, 0, // Skip to: 2651
/* 2634 */    MCD_OPC_CheckPredicate, 13, 2, 2, 0, // Skip to: 3153
/* 2639 */    MCD_OPC_CheckField, 21, 11, 160, 15, 250, 1, 0, // Skip to: 3153
/* 2647 */    MCD_OPC_Decode, 217, 5, 98, // Opcode: f2FFTOXU32_D
/* 2651 */    MCD_OPC_FilterValue, 5, 241, 1, 0, // Skip to: 3153
/* 2656 */    MCD_OPC_CheckPredicate, 13, 236, 1, 0, // Skip to: 3153
/* 2661 */    MCD_OPC_CheckField, 21, 11, 160, 15, 228, 1, 0, // Skip to: 3153
/* 2669 */    MCD_OPC_Decode, 215, 5, 98, // Opcode: f2FFTOXS32_D
/* 2673 */    MCD_OPC_FilterValue, 67, 91, 0, 0, // Skip to: 2769
/* 2678 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2681 */    MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 2703
/* 2686 */    MCD_OPC_CheckPredicate, 12, 206, 1, 0, // Skip to: 3153
/* 2691 */    MCD_OPC_CheckField, 21, 11, 160, 15, 198, 1, 0, // Skip to: 3153
/* 2699 */    MCD_OPC_Decode, 214, 5, 98, // Opcode: f2FFTOU32_S
/* 2703 */    MCD_OPC_FilterValue, 3, 17, 0, 0, // Skip to: 2725
/* 2708 */    MCD_OPC_CheckPredicate, 12, 184, 1, 0, // Skip to: 3153
/* 2713 */    MCD_OPC_CheckField, 21, 11, 160, 15, 176, 1, 0, // Skip to: 3153
/* 2721 */    MCD_OPC_Decode, 212, 5, 98, // Opcode: f2FFTOS32_S
/* 2725 */    MCD_OPC_FilterValue, 4, 17, 0, 0, // Skip to: 2747
/* 2730 */    MCD_OPC_CheckPredicate, 13, 162, 1, 0, // Skip to: 3153
/* 2735 */    MCD_OPC_CheckField, 21, 11, 160, 15, 154, 1, 0, // Skip to: 3153
/* 2743 */    MCD_OPC_Decode, 213, 5, 107, // Opcode: f2FFTOU32_D
/* 2747 */    MCD_OPC_FilterValue, 5, 145, 1, 0, // Skip to: 3153
/* 2752 */    MCD_OPC_CheckPredicate, 13, 140, 1, 0, // Skip to: 3153
/* 2757 */    MCD_OPC_CheckField, 21, 11, 160, 15, 132, 1, 0, // Skip to: 3153
/* 2765 */    MCD_OPC_Decode, 211, 5, 107, // Opcode: f2FFTOS32_D
/* 2769 */    MCD_OPC_FilterValue, 68, 91, 0, 0, // Skip to: 2865
/* 2774 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2777 */    MCD_OPC_FilterValue, 4, 17, 0, 0, // Skip to: 2799
/* 2782 */    MCD_OPC_CheckPredicate, 12, 110, 1, 0, // Skip to: 3153
/* 2787 */    MCD_OPC_CheckField, 21, 11, 160, 15, 102, 1, 0, // Skip to: 3153
/* 2795 */    MCD_OPC_Decode, 179, 5, 98, // Opcode: f2FF32TOFI32_RN
/* 2799 */    MCD_OPC_FilterValue, 5, 17, 0, 0, // Skip to: 2821
/* 2804 */    MCD_OPC_CheckPredicate, 12, 88, 1, 0, // Skip to: 3153
/* 2809 */    MCD_OPC_CheckField, 21, 11, 160, 15, 80, 1, 0, // Skip to: 3153
/* 2817 */    MCD_OPC_Decode, 182, 5, 98, // Opcode: f2FF32TOFI32_RZ
/* 2821 */    MCD_OPC_FilterValue, 6, 17, 0, 0, // Skip to: 2843
/* 2826 */    MCD_OPC_CheckPredicate, 12, 66, 1, 0, // Skip to: 3153
/* 2831 */    MCD_OPC_CheckField, 21, 11, 160, 15, 58, 1, 0, // Skip to: 3153
/* 2839 */    MCD_OPC_Decode, 181, 5, 98, // Opcode: f2FF32TOFI32_RPI
/* 2843 */    MCD_OPC_FilterValue, 7, 49, 1, 0, // Skip to: 3153
/* 2848 */    MCD_OPC_CheckPredicate, 12, 44, 1, 0, // Skip to: 3153
/* 2853 */    MCD_OPC_CheckField, 21, 11, 160, 15, 36, 1, 0, // Skip to: 3153
/* 2861 */    MCD_OPC_Decode, 180, 5, 98, // Opcode: f2FF32TOFI32_RNI
/* 2865 */    MCD_OPC_FilterValue, 69, 91, 0, 0, // Skip to: 2961
/* 2870 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2873 */    MCD_OPC_FilterValue, 0, 17, 0, 0, // Skip to: 2895
/* 2878 */    MCD_OPC_CheckPredicate, 13, 14, 1, 0, // Skip to: 3153
/* 2883 */    MCD_OPC_CheckField, 21, 11, 160, 15, 6, 1, 0, // Skip to: 3153
/* 2891 */    MCD_OPC_Decode, 191, 5, 98, // Opcode: f2FF64TOFI32_RN
/* 2895 */    MCD_OPC_FilterValue, 1, 17, 0, 0, // Skip to: 2917
/* 2900 */    MCD_OPC_CheckPredicate, 13, 248, 0, 0, // Skip to: 3153
/* 2905 */    MCD_OPC_CheckField, 21, 11, 160, 15, 240, 0, 0, // Skip to: 3153
/* 2913 */    MCD_OPC_Decode, 194, 5, 98, // Opcode: f2FF64TOFI32_RZ
/* 2917 */    MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 2939
/* 2922 */    MCD_OPC_CheckPredicate, 13, 226, 0, 0, // Skip to: 3153
/* 2927 */    MCD_OPC_CheckField, 21, 11, 160, 15, 218, 0, 0, // Skip to: 3153
/* 2935 */    MCD_OPC_Decode, 193, 5, 98, // Opcode: f2FF64TOFI32_RPI
/* 2939 */    MCD_OPC_FilterValue, 3, 209, 0, 0, // Skip to: 3153
/* 2944 */    MCD_OPC_CheckPredicate, 13, 204, 0, 0, // Skip to: 3153
/* 2949 */    MCD_OPC_CheckField, 21, 11, 160, 15, 196, 0, 0, // Skip to: 3153
/* 2957 */    MCD_OPC_Decode, 192, 5, 98, // Opcode: f2FF64TOFI32_RNI
/* 2961 */    MCD_OPC_FilterValue, 73, 91, 0, 0, // Skip to: 3057
/* 2966 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 2969 */    MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 2991
/* 2974 */    MCD_OPC_CheckPredicate, 12, 174, 0, 0, // Skip to: 3153
/* 2979 */    MCD_OPC_CheckField, 21, 11, 160, 15, 166, 0, 0, // Skip to: 3153
/* 2987 */    MCD_OPC_Decode, 155, 6, 98, // Opcode: f2FXTOFU32_S
/* 2991 */    MCD_OPC_FilterValue, 3, 17, 0, 0, // Skip to: 3013
/* 2996 */    MCD_OPC_CheckPredicate, 12, 152, 0, 0, // Skip to: 3153
/* 3001 */    MCD_OPC_CheckField, 21, 11, 160, 15, 144, 0, 0, // Skip to: 3153
/* 3009 */    MCD_OPC_Decode, 153, 6, 98, // Opcode: f2FXTOFS32_S
/* 3013 */    MCD_OPC_FilterValue, 4, 17, 0, 0, // Skip to: 3035
/* 3018 */    MCD_OPC_CheckPredicate, 13, 130, 0, 0, // Skip to: 3153
/* 3023 */    MCD_OPC_CheckField, 21, 11, 160, 15, 122, 0, 0, // Skip to: 3153
/* 3031 */    MCD_OPC_Decode, 154, 6, 98, // Opcode: f2FXTOFU32_D
/* 3035 */    MCD_OPC_FilterValue, 5, 113, 0, 0, // Skip to: 3153
/* 3040 */    MCD_OPC_CheckPredicate, 13, 108, 0, 0, // Skip to: 3153
/* 3045 */    MCD_OPC_CheckField, 21, 11, 160, 15, 100, 0, 0, // Skip to: 3153
/* 3053 */    MCD_OPC_Decode, 152, 6, 98, // Opcode: f2FXTOFS32_D
/* 3057 */    MCD_OPC_FilterValue, 75, 91, 0, 0, // Skip to: 3153
/* 3062 */    MCD_OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 3065 */    MCD_OPC_FilterValue, 2, 17, 0, 0, // Skip to: 3087
/* 3070 */    MCD_OPC_CheckPredicate, 12, 78, 0, 0, // Skip to: 3153
/* 3075 */    MCD_OPC_CheckField, 21, 11, 160, 15, 70, 0, 0, // Skip to: 3153
/* 3083 */    MCD_OPC_Decode, 151, 6, 98, // Opcode: f2FU32TOF_S
/* 3087 */    MCD_OPC_FilterValue, 3, 17, 0, 0, // Skip to: 3109
/* 3092 */    MCD_OPC_CheckPredicate, 12, 56, 0, 0, // Skip to: 3153
/* 3097 */    MCD_OPC_CheckField, 21, 11, 160, 15, 48, 0, 0, // Skip to: 3153
/* 3105 */    MCD_OPC_Decode, 134, 6, 98, // Opcode: f2FS32TOF_S
/* 3109 */    MCD_OPC_FilterValue, 4, 17, 0, 0, // Skip to: 3131
/* 3114 */    MCD_OPC_CheckPredicate, 13, 34, 0, 0, // Skip to: 3153
/* 3119 */    MCD_OPC_CheckField, 21, 11, 160, 15, 26, 0, 0, // Skip to: 3153
/* 3127 */    MCD_OPC_Decode, 150, 6, 108, // Opcode: f2FU32TOF_D
/* 3131 */    MCD_OPC_FilterValue, 5, 17, 0, 0, // Skip to: 3153
/* 3136 */    MCD_OPC_CheckPredicate, 13, 12, 0, 0, // Skip to: 3153
/* 3141 */    MCD_OPC_CheckField, 21, 11, 160, 15, 4, 0, 0, // Skip to: 3153
/* 3149 */    MCD_OPC_Decode, 133, 6, 108, // Opcode: f2FS32TOF_D
/* 3153 */    MCD_OPC_Fail,
  0
};

static bool checkDecoderPredicate(MCInst *Inst, unsigned Idx) {
  switch (Idx) {
  default: CS_ASSERT_RET_VAL(0 && "Invalid index!", false);
  case 0:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_HasE1));
  case 1:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_FeatureJAVA));
  case 2:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_FeatureBTST16));
  case 3:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_Has2E3));
  case 4:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_FeatureExtendLrw));
  case 5:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_HasMP1E2));
  case 6:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_Has3r2E3r3));
  case 7:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_HasE2));
  case 8:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_Has2E3) && CSKY_getFeatureBits(Inst->csh->mode, CSKY_Has10E60));
  case 9:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_FeatureFPUV2_SF));
  case 10:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_FeatureFPUV2_DF));
  case 11:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_Has3E3r1));
  case 12:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_FeatureFPUV3_SF));
  case 13:
    return (CSKY_getFeatureBits(Inst->csh->mode, CSKY_FeatureFPUV3_DF));
  }
}

#define DecodeToMCInst(fname, fieldname, InsnType) \
static DecodeStatus fname(DecodeStatus S, unsigned Idx, InsnType insn, MCInst *MI, \
		uint64_t Address, const void *Decoder, bool *DecodeComplete) \
{ \
  *DecodeComplete = true; \
  InsnType tmp; \
  switch (Idx) { \
  default: CS_ASSERT_RET_VAL(0 && "Invalid index!", MCDisassembler_Fail); \
  case 0: \
    return S; \
  case 1: \
    tmp = fieldname(insn, 5, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 5) << 0; \
    tmp |= fieldname(insn, 8, 2) << 5; \
    tmp |= fieldname(insn, 12, 1) << 7; \
    if (!Check(&S, decodeLRW16Imm8(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 2: \
    tmp = fieldname(insn, 0, 10); \
    if (!Check(&S, decodeSImmOperand_10_1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 3: \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 5) << 0; \
    tmp |= fieldname(insn, 8, 2) << 5; \
    if (!Check(&S, decodeUImmOperand_7_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 4: \
    tmp = fieldname(insn, 0, 5); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 5: \
    tmp = fieldname(insn, 2, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 6: \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 8); \
    if (!Check(&S, decodeUImmOperand_8_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 7: \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 8); \
    if (!Check(&S, decodeOImmOperand_8(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 8: \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 8); \
    if (!Check(&S, decodeUImmOperand_8_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 9: \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, decodeOImmOperand_5(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 10: \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 11: \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 12: \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 2); \
    if (!Check(&S, decodeJMPIXImmOperand(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 13: \
    tmp = fieldname(insn, 5, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 14: \
    tmp = fieldname(insn, 5, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 2, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 15: \
    tmp = fieldname(insn, 5, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 2, 3); \
    if (!Check(&S, decodeOImmOperand_3(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 16: \
    tmp = fieldname(insn, 6, 4); \
    if (!Check(&S, DecodesGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 6, 4); \
    if (!Check(&S, DecodesGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 2, 4); \
    if (!Check(&S, DecodesGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 17: \
    tmp = fieldname(insn, 2, 4); \
    if (!Check(&S, DecodesGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 6, 4); \
    if (!Check(&S, DecodesGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 18: \
    tmp = fieldname(insn, 6, 4); \
    if (!Check(&S, DecodesGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 19: \
    tmp = fieldname(insn, 2, 4); \
    if (!Check(&S, DecodesGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 20: \
    tmp = fieldname(insn, 6, 4); \
    if (!Check(&S, DecodesGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 2, 4); \
    if (!Check(&S, DecodesGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 21: \
    tmp = fieldname(insn, 5, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, decodeUImmOperand_5_1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 22: \
    tmp = fieldname(insn, 5, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 8, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, decodeUImmOperand_5_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 23: \
    tmp = fieldname(insn, 5, 3); \
    if (!Check(&S, DecodemGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 5) << 0; \
    tmp |= fieldname(insn, 8, 3) << 5; \
    if (!Check(&S, decodeUImmOperand_8_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 24: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 25: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeUImmOperand_4_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 26: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeOImmOperand_5(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 27: \
    tmp = fieldname(insn, 10, 2); \
    if (!Check(&S, decodeUImmOperand_2_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 28: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 29: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 30: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 31: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 32: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 33: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 34: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 35: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 36: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 37: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeOImmOperand_5(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 38: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeOImmOperand_5(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 39: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 40: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 41: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 18); \
    if (!Check(&S, decodeUImmOperand_18_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 42: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 18); \
    if (!Check(&S, decodeUImmOperand_18_1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 43: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 18); \
    if (!Check(&S, decodeUImmOperand_18_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 44: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 18); \
    if (!Check(&S, decodeSImmOperand_18_1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 45: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (!Check(&S, decodeImmShiftOpValue(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 46: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 5) << 0; \
    tmp |= fieldname(insn, 21, 5) << 5; \
    if (!Check(&S, DecodeRegSeqOperand(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 47: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    if (!Check(&S, decodeUImmOperand_12_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 48: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    if (!Check(&S, decodeUImmOperand_12_1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 49: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    if (!Check(&S, decodeUImmOperand_12_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 50: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    if (!Check(&S, decodeUImmOperand_12_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 51: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    if (!Check(&S, decodeUImmOperand_12_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 52: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    if (!Check(&S, decodeUImmOperand_12_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 53: \
    tmp = fieldname(insn, 0, 26); \
    if (!Check(&S, decodeSImmOperand_26_1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 54: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    if (!Check(&S, decodeOImmOperand_12(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 55: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 56: \
    tmp = fieldname(insn, 0, 16); \
    if (!Check(&S, decodeSImmOperand_16_1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 57: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 16); \
    if (!Check(&S, decodeSImmOperand_16_1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 58: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 16); \
    if (!Check(&S, decodeSImmOperand_16_1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 59: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 16); \
    if (!Check(&S, decodeUImmOperand_16_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 60: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 16); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 61: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 16); \
    if (!Check(&S, decodeUImmOperand_16_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 62: \
    tmp = fieldname(insn, 0, 16); \
    if (!Check(&S, decodeUImmOperand_16_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 63: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 16); \
    if (!Check(&S, decodeOImmOperand_16(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 64: \
    tmp = fieldname(insn, 0, 12); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 65: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 16); \
    if (!Check(&S, decodeUImmOperand_16_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 66: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 67: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 68: \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 69: \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 70: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 71: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 72: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 73: \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 74: \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 75: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 76: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64_VRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64_VRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 4); \
    if (!Check(&S, DecodesFPR64_VRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 77: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64_VRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64_VRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 78: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64_VRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64_VRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64_VRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 4); \
    if (!Check(&S, DecodesFPR64_VRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 79: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 80: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 81: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 82: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 83: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 84: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 85: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 4, 4) << 0; \
    tmp |= fieldname(insn, 21, 4) << 4; \
    if (!Check(&S, decodeUImmOperand_8_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 86: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 4, 4) << 0; \
    tmp |= fieldname(insn, 21, 4) << 4; \
    if (!Check(&S, decodeUImmOperand_8_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 87: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 4, 4) << 0; \
    tmp |= fieldname(insn, 21, 4) << 4; \
    if (!Check(&S, decodeUImmOperand_8_3(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 88: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 2); \
    if (!Check(&S, decodeUImmOperand_2_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 89: \
    tmp = fieldname(insn, 0, 4); \
    if (!Check(&S, DecodesFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 2); \
    if (!Check(&S, decodeUImmOperand_2_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 90: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 4) << 5; \
    tmp |= fieldname(insn, 21, 4) << 0; \
    if (!Check(&S, DecodeRegSeqOperandF1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 91: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 4) << 5; \
    tmp |= fieldname(insn, 21, 4) << 0; \
    if (!Check(&S, DecodeRegSeqOperandD1(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 92: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 93: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 94: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    if (!Check(&S, decodeUImmOperand_12_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 95: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 12); \
    if (!Check(&S, decodeUImmOperand_12_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 96: \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, decodeUImmOperand_5_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 15) << 0; \
    tmp |= fieldname(insn, 16, 5) << 15; \
    if (!Check(&S, decodeUImmOperand_20_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 97: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 98: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 99: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 100: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 101: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 102: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 103: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 104: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 105: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 106: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 107: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 108: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 109: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 110: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 111: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 112: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 113: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 114: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 115: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 116: \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 4) << 0; \
    tmp |= fieldname(insn, 25, 1) << 4; \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 4, 4) << 0; \
    tmp |= fieldname(insn, 21, 4) << 4; \
    if (!Check(&S, decodeUImmOperand_8_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 117: \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 4) << 0; \
    tmp |= fieldname(insn, 25, 1) << 4; \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 4, 4) << 0; \
    tmp |= fieldname(insn, 21, 4) << 4; \
    if (!Check(&S, decodeUImmOperand_8_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 118: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 2); \
    if (!Check(&S, decodeUImmOperand_2_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 119: \
    tmp = fieldname(insn, 0, 5); \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 21, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 2); \
    if (!Check(&S, decodeUImmOperand_2_0(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 120: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 5) << 5; \
    tmp |= fieldname(insn, 21, 5) << 0; \
    if (!Check(&S, DecodeRegSeqOperandF2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 121: \
    tmp = fieldname(insn, 16, 5); \
    if (!Check(&S, DecodeGPRRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 5) << 5; \
    tmp |= fieldname(insn, 21, 5) << 0; \
    if (!Check(&S, DecodeRegSeqOperandD2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 122: \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 4) << 0; \
    tmp |= fieldname(insn, 25, 1) << 4; \
    if (!Check(&S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 4, 4) << 0; \
    tmp |= fieldname(insn, 21, 4) << 4; \
    if (!Check(&S, decodeUImmOperand_8_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  case 123: \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 4) << 0; \
    tmp |= fieldname(insn, 25, 1) << 4; \
    if (!Check(&S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 4, 4) << 0; \
    tmp |= fieldname(insn, 21, 4) << 4; \
    if (!Check(&S, decodeUImmOperand_8_2(MI, tmp, Address, Decoder))) { return MCDisassembler_Fail; } \
    return S; \
  } \
}

#define DecodeInstruction(fname, fieldname, decoder, InsnType) \
static DecodeStatus fname(const uint8_t DecodeTable[], MCInst *MI, \
                                      InsnType insn, uint64_t Address, const void *Decoder) { \
  const uint8_t *Ptr = DecodeTable; \
  uint64_t CurFieldValue = 0; \
  DecodeStatus S = MCDisassembler_Success; \
  while (true) { \
    switch (*Ptr) { \
    default: \
      return MCDisassembler_Fail; \
    case MCD_OPC_ExtractField: { \
      unsigned Start = *++Ptr; \
      unsigned Len = *++Ptr; \
      ++Ptr; \
      CurFieldValue = fieldname(insn, Start, Len); \
      break; \
    } \
    case MCD_OPC_FilterValue: { \
      /* Decode the field value. */ \
      unsigned Len; \
      uint64_t Val = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      /* NumToSkip is a plain 24-bit integer. */ \
      unsigned NumToSkip = *Ptr++; \
      NumToSkip |= (*Ptr++) << 8; \
      NumToSkip |= (*Ptr++) << 16; \
      /* Perform the filter operation. */ \
      if (Val != CurFieldValue) \
        Ptr += NumToSkip; \
      break; \
    } \
    case MCD_OPC_CheckField: { \
      unsigned Start = *++Ptr; \
      unsigned Len = *++Ptr; \
      uint64_t FieldValue = fieldname(insn, Start, Len); \
      /* Decode the field value. */ \
      unsigned PtrLen = 0; \
      uint64_t ExpectedValue = decodeULEB128(++Ptr, &PtrLen); \
      Ptr += PtrLen; \
      /* NumToSkip is a plain 24-bit integer. */ \
      unsigned NumToSkip = *Ptr++; \
      NumToSkip |= (*Ptr++) << 8; \
      NumToSkip |= (*Ptr++) << 16; \
      /* If the actual and expected values don't match, skip. */ \
      if (ExpectedValue != FieldValue) \
        Ptr += NumToSkip; \
      break; \
    } \
    case MCD_OPC_CheckPredicate: { \
      unsigned Len; \
      /* Decode the Predicate Index value. */ \
      unsigned PIdx = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      /* NumToSkip is a plain 24-bit integer. */ \
      unsigned NumToSkip = *Ptr++; \
      NumToSkip |= (*Ptr++) << 8; \
      NumToSkip |= (*Ptr++) << 16; \
      /* Check the predicate. */ \
      bool Pred = checkDecoderPredicate(MI, PIdx); \
      if (!Pred) \
        Ptr += NumToSkip; \
      break; \
    } \
    case MCD_OPC_Decode: { \
      unsigned Len; \
      /* Decode the Opcode value. */ \
      unsigned Opc = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len); \
      Ptr += Len; \
      MCInst_clear(MI); \
      MCInst_setOpcode(MI, Opc); \
      bool DecodeComplete; \
      S = decoder(S, DecodeIdx, insn, MI, Address, Decoder, &DecodeComplete); \
      return S; \
    } \
    case MCD_OPC_TryDecode: { \
      unsigned Len; \
      /* Decode the Opcode value. */ \
      unsigned Opc = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len); \
      Ptr += Len; \
      /* NumToSkip is a plain 24-bit integer. */ \
      unsigned NumToSkip = *Ptr++; \
      NumToSkip |= (*Ptr++) << 8; \
      NumToSkip |= (*Ptr++) << 16; \
      /* Perform the decode operation. */ \
      MCInst_setOpcode(MI, Opc); \
      bool DecodeComplete; \
      S = decoder(S, DecodeIdx, insn, MI, Address, Decoder, &DecodeComplete); \
      if (DecodeComplete) { \
        /* Decoding complete. */ \
        return S; \
      } else { \
        /* LLVM uses a MCInst on the stack, but for our use case, */ \
        /* it is enough for now to reset the op counter. */ \
        MCInst_clear(MI); \
        /* If the decoding was incomplete, skip. */ \
        Ptr += NumToSkip; \
        /* Reset decode status. This also drops a SoftFail status that could be */ \
        /* set before the decode attempt. */ \
        S = MCDisassembler_Success; \
      } \
      break; \
    } \
    case MCD_OPC_SoftFail: { \
      /* Decode the mask values. */ \
      unsigned Len; \
      uint64_t PositiveMask = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      uint64_t NegativeMask = decodeULEB128(Ptr, &Len); \
      Ptr += Len; \
      bool Fail = (insn & PositiveMask) != 0 || (~insn & NegativeMask) != 0; \
      if (Fail) \
        S = MCDisassembler_SoftFail; \
      break; \
    } \
    case MCD_OPC_Fail: { \
      return MCDisassembler_Fail; \
    } \
    } \
  } \
  /* Bogisity detected in disassembler state machine! */ \
}


FieldFromInstruction(fieldFromInstruction_2, uint16_t)
DecodeToMCInst(decodeToMCInst_2, fieldFromInstruction_2, uint16_t)
DecodeInstruction(decodeInstruction_2, fieldFromInstruction_2, decodeToMCInst_2, uint16_t)

FieldFromInstruction(fieldFromInstruction_4, uint32_t)
DecodeToMCInst(decodeToMCInst_4, fieldFromInstruction_4, uint32_t)
DecodeInstruction(decodeInstruction_4, fieldFromInstruction_4, decodeToMCInst_4, uint32_t)
