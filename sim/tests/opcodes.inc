# sim/tests/opcodes.inc - Register and opcode definitions

# Standard RISC-V register definitions
.equ X0,  0
.equ X1,  1
.equ X2,  2
.equ X3,  3
.equ X4,  4
.equ X5,  5
.equ X6,  6
.equ X7,  7
.equ X8,  8
.equ X9,  9
.equ X10, 10
.equ X11, 11
.equ X12, 12
.equ X13, 13
.equ X14, 14
.equ X15, 15
.equ X16, 16
.equ X17, 17
.equ X18, 18
.equ X19, 19
.equ X20, 20
.equ X21, 21
.equ X22, 22
.equ X23, 23
.equ X24, 24
.equ X25, 25
.equ X26, 26
.equ X27, 27
.equ X28, 28
.equ X29, 29
.equ X30, 30
.equ X31, 31

# ABI register names
.equ ZERO, 0
.equ RA,   1
.equ SP,   2
.equ GP,   3
.equ TP,   4
.equ T0,   5
.equ T1,   6
.equ T2,   7
.equ S0,   8
.equ FP,   8
.equ S1,   9
.equ A0,   10
.equ A1,   11
.equ A2,   12
.equ A3,   13
.equ A4,   14
.equ A5,   15
.equ A6,   16
.equ A7,   17
.equ S2,   18
.equ S3,   19
.equ S4,   20
.equ S5,   21
.equ S6,   22
.equ S7,   23
.equ S8,   24
.equ S9,   25
.equ S10,  26
.equ S11,  27
.equ T3,   28
.equ T4,   29
.equ T5,   30
.equ T6,   31

# Vector register definitions (using standard register numbers)
.equ V0,   0
.equ V1,   1
.equ V2,   2
.equ V3,   3
.equ V4,   4
.equ V5,   5
.equ V6,   6
.equ V7,   7
.equ V8,   8
.equ V9,   9
.equ V10,  10
.equ V11,  11
.equ V12,  12
.equ V13,  13
.equ V14,  14
.equ V15,  15
.equ V16,  16
.equ V17,  17
.equ V18,  18
.equ V19,  19
.equ V20,  20
.equ V21,  21
.equ V22,  22
.equ V23,  23
.equ V24,  24
.equ V25,  25
.equ V26,  26
.equ V27,  27
.equ V28,  28
.equ V29,  29
.equ V30,  30
.equ V31,  31

# Custom opcode definitions (matching custom_opcodes.vh)
.equ OPCODE_CUSTOM0, 0x0B    # 7'b0001011
.equ FUNCT7_VLD,     0x01    # 7'b0000001  
.equ FUNCT7_VST,     0x02    # 7'b0000010
.equ FUNCT7_VMAC,    0x03    # 7'b0000011
