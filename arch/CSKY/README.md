# CSKY module

Disassembler for the C-SKY (CSKY) architecture, the 32-bit embedded ISA from
T-Head/XuanTie (formerly C-SKY Microsystems). Covers both the 16- and 32-bit
instruction forms, 478 instructions and 164 registers.

Generated with `auto-sync` from the CSKY backend in `llvm-capstone` (LLVM
18.1.2). CSKY is an *experimental* LLVM target, so building `llvm-tblgen` for
it needs `-DLLVM_EXPERIMENTAL_TARGETS_TO_BUILD=CSKY`, not
`-DLLVM_TARGETS_TO_BUILD`.

## Modes

`CS_ARCH_CSKY` with one of:

| mode                | core                |
|---------------------|---------------------|
| (none)              | generic, decode all |
| `CS_MODE_CSKY_801`  | CK801               |
| `CS_MODE_CSKY_802`  | CK802               |
| `CS_MODE_CSKY_803`  | CK803 / CK803S      |
| `CS_MODE_CSKY_807`  | CK807               |
| `CS_MODE_CSKY_810`  | CK810               |
| `CS_MODE_CSKY_860`  | CK860               |

The base ISA generations are cumulative (E1 < E2 < 2E3 < 3E7 < 7E10 < 10E60).
Only CK801/CK802 are narrow enough that claiming the wider generations would
mis-decode, so they are the only modes `CSKY_getFeatureBits` filters on. Every
other optional extension is reported as present, because a disassembler should
decode as much as it can.

## Output conventions

Two deliberate differences from `csky-elfabiv2-objdump` (binutils):

- **Register names.** This module prints ABI names (`a0`, `l1`, `sp`, `lr`);
  objdump prints architectural names (`r0`, `r5`, `r14`, `r15`).
- **Mnemonics.** LLVM's instruction names carry the operand width, so you get
  `andn32`, `ld32.b`, `br16` where objdump prints `andn`, `ld.b`, `br`.

Immediates print as hex. LLVM aliases are applied, so `mov r0, r0` disassembles
as `nop`.

`lrw` prints the *address* of the literal pool entry (`lrw a0, [0x600]`), not
the value stored there. objdump prints the value because it has the whole image;
Capstone only sees the buffer it was handed.

## Validation

Checked against `csky-elfabiv2-objdump` on 288KB of real CK803S firmware
(a Baofeng DM-32UV image), comparing only instructions where both tools agree
on the instruction boundary:

| region      | instructions | mnemonic agreement |
|-------------|--------------|--------------------|
| `0x02000`   | 202          | 100%               |
| `0x10000`   | 377          | 100%               |
| `0x40000`   | 349          | 100%               |
| `0x60000`   | 1468         | 100%               |
| `0x80000`   | 920          | 100%               |

Of 55 operand-level differences, 52 are the formatting conventions above
(objdump prints immediates in decimal: `movi r0, 48` vs `movi16 a0, 0x30`) and
the remaining 3 are the `lrw` pool-address case, verified by reading the pool
word directly.

A separate whole-range run over `0x10000..0x20000` compared 25,814 instructions
with 100% mnemonic agreement.

## Hand fixes to generated files

Three problems in the generated output are corrected by
`suite/auto-sync/inc_patches/CSKY/`, which `ASUpdater` re-applies after each
regeneration:

1. **Decoder functions were never instantiated.** The TableGen backend emits the
   `DecodeInstruction` / `DecodeToMCInst` / `FieldFromInstruction` macros but
   never expands them for CSKY, leaving `decodeInstruction_2` and
   `decodeInstruction_4` undefined. RISCV (the other 16/32-bit target) carries
   both instantiations; CSKY now does too.

2. **Mangled operand separators.** The asm strings for `cprcr32`, `cprgr32`,
   `cpwcr32` and `cpwgr32` are `"$rz, <$cpid, ${usdef}>"` in LLVM, but the
   generator turned the `<`, `,` and `>` into parts of identifiers
   (`printOperand(MI_1_O)`). Restored to the LLVM form.

3. **C++ leaking into generated C.** The alias-condition code called
   `MCOp.evaluateAsConstantImm()` and `MCOp.isBareSymbolRef()`; replaced with
   `MCOperand_isImm` / `MCOperand_getImm` / `MCOperand_isExpr`.

`CSKYDisassembler.c` and `CSKYInstPrinter.c` also needed the usual manual
cleanup after translation: LLVM's class and target-registration preamble
removed, `auto` given a concrete type, `MI.insert(...)` rewritten as
`MCInst_insert0`, `ListSeparator` replaced with an explicit first-item flag, and
the llvm-mc command-line options (`NoAliases`, `ArchRegNames`) turned into fixed
constants.

`printOperand` loses LLVM's `Modifier` parameter. LLVM asserts it is always
empty ("No modifiers supported") and C has no default arguments, so the
generated 3-argument call sites are the only ones that exist.

LLVM consults `MCInstrDesc::TSFlags` to decide whether an immediate is an
address. Capstone's `MCInstrDesc` carries no `TSFlags` and the generator does
not emit them, so immediates print as hex throughout.
