# sim/tests/matmul_8x8_test.s - 8x8 Matrix Multiply Test
.section .text
.global _start
.include "opcodes.inc"

_start:
    # =========================================================================
    # 8x8 Matrix Multiply Test
    # 
    # Challenge: An 8x8 matrix has 64 elements, but one vector register
    # can only hold 8 elements (256 bits / 32 bits per element)
    #
    # Solution: Load matrix row by row into separate vector registers
    # Matrix A: v0-v7 (8 rows, 8 elements each)
    # Matrix B: v8-v15 (8 rows, 8 elements each)
    # =========================================================================
    
    # =========================================================================
    # Load Matrix A (8x8) - Row by Row
    # =========================================================================
    li s0, 0x100     # Base address for Matrix A
    
    # Load row 0 of A into v0
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V0 << 7) | OPCODE_CUSTOM0)
    
    # Load row 1 of A into v1
    addi a0, s0, 32  # 8 words * 4 bytes = 32 bytes
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    # Load row 2 of A into v2
    addi a0, s0, 64
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V2 << 7) | OPCODE_CUSTOM0)
    
    # Load row 3 of A into v3
    addi a0, s0, 96
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)
    
    # Load row 4 of A into v4
    addi a0, s0, 128
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V4 << 7) | OPCODE_CUSTOM0)
    
    # Load row 5 of A into v5
    addi a0, s0, 160
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V5 << 7) | OPCODE_CUSTOM0)
    
    # Load row 6 of A into v6
    addi a0, s0, 192
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V6 << 7) | OPCODE_CUSTOM0)
    
    # Load row 7 of A into v7
    addi a0, s0, 224
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V7 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Load Matrix B (8x8) - Row by Row
    # =========================================================================
    li s1, 0x200     # Base address for Matrix B
    
    # Load row 0 of B into v8
    mv a0, s1
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V8 << 7) | OPCODE_CUSTOM0)
    
    # Load row 1 of B into v9
    addi a0, s1, 32
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V9 << 7) | OPCODE_CUSTOM0)
    
    # Load row 2 of B into v10
    addi a0, s1, 64
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V10 << 7) | OPCODE_CUSTOM0)
    
    # Load row 3 of B into v11
    addi a0, s1, 96
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V11 << 7) | OPCODE_CUSTOM0)
    
    # Load row 4 of B into v12
    addi a0, s1, 128
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V12 << 7) | OPCODE_CUSTOM0)
    
    # Load row 5 of B into v13
    addi a0, s1, 160
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V13 << 7) | OPCODE_CUSTOM0)
    
    # Load row 6 of B into v14
    addi a0, s1, 192
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V14 << 7) | OPCODE_CUSTOM0)
    
    # Load row 7 of B into v15
    addi a0, s1, 224
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V15 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # ISSUE: Current hardware design expects matrix in single vector!
    # This test shows the limitation - we need to modify the hardware
    # to accept base register + count, or pass starting register number
    # =========================================================================
    
    # Perform 8x8 Matrix Multiply
    # funct3 = 010 for 8x8
    # This would need hardware modification to know A is in v0-v7, B in v8-v15
    .word ((FUNCT7_VMMUL << 25) | (V8 << 20) | (V0 << 15) | (2 << 12) | (V0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Store Result (8x8) - Row by Row
    # Result would be in v0-v7 after computation
    # =========================================================================
    li s2, 0x300     # Base address for Result C
    
    # Store row 0 of C from v0
    mv a0, s2
    .word ((FUNCT7_VST << 25) | (V0 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Store row 1 of C from v1
    addi a0, s2, 32
    .word ((FUNCT7_VST << 25) | (V1 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Store row 2 of C from v2
    addi a0, s2, 64
    .word ((FUNCT7_VST << 25) | (V2 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Store row 3 of C from v3
    addi a0, s2, 96
    .word ((FUNCT7_VST << 25) | (V3 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Store row 4 of C from v4
    addi a0, s2, 128
    .word ((FUNCT7_VST << 25) | (V4 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Store row 5 of C from v5
    addi a0, s2, 160
    .word ((FUNCT7_VST << 25) | (V5 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Store row 6 of C from v6
    addi a0, s2, 192
    .word ((FUNCT7_VST << 25) | (V6 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Store row 7 of C from v7
    addi a0, s2, 224
    .word ((FUNCT7_VST << 25) | (V7 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Signal completion
    li t0, 1
    lui t1, 0x1
    sw t0, 0(t1)

hang:
    j hang

# =========================================================================
# Test Data Section - 8x8 Identity Matrix Test
# Matrix A = Identity, so C = B
# =========================================================================

.org 0x100  # Matrix A (8x8) - Identity Matrix
matrix_a_8x8:
    # Row 0: [1, 0, 0, 0, 0, 0, 0, 0]
    .word 1, 0, 0, 0, 0, 0, 0, 0
    # Row 1: [0, 1, 0, 0, 0, 0, 0, 0]
    .word 0, 1, 0, 0, 0, 0, 0, 0
    # Row 2: [0, 0, 1, 0, 0, 0, 0, 0]
    .word 0, 0, 1, 0, 0, 0, 0, 0
    # Row 3: [0, 0, 0, 1, 0, 0, 0, 0]
    .word 0, 0, 0, 1, 0, 0, 0, 0
    # Row 4: [0, 0, 0, 0, 1, 0, 0, 0]
    .word 0, 0, 0, 0, 1, 0, 0, 0
    # Row 5: [0, 0, 0, 0, 0, 1, 0, 0]
    .word 0, 0, 0, 0, 0, 1, 0, 0
    # Row 6: [0, 0, 0, 0, 0, 0, 1, 0]
    .word 0, 0, 0, 0, 0, 0, 1, 0
    # Row 7: [0, 0, 0, 0, 0, 0, 0, 1]
    .word 0, 0, 0, 0, 0, 0, 0, 1

.org 0x200  # Matrix B (8x8) - Simple pattern
matrix_b_8x8:
    # Row 0: [1, 2, 3, 4, 5, 6, 7, 8]
    .word 1, 2, 3, 4, 5, 6, 7, 8
    # Row 1: [2, 3, 4, 5, 6, 7, 8, 9]
    .word 2, 3, 4, 5, 6, 7, 8, 9
    # Row 2: [3, 4, 5, 6, 7, 8, 9, 10]
    .word 3, 4, 5, 6, 7, 8, 9, 10
    # Row 3: [4, 5, 6, 7, 8, 9, 10, 11]
    .word 4, 5, 6, 7, 8, 9, 10, 11
    # Row 4: [5, 6, 7, 8, 9, 10, 11, 12]
    .word 5, 6, 7, 8, 9, 10, 11, 12
    # Row 5: [6, 7, 8, 9, 10, 11, 12, 13]
    .word 6, 7, 8, 9, 10, 11, 12, 13
    # Row 6: [7, 8, 9, 10, 11, 12, 13, 14]
    .word 7, 8, 9, 10, 11, 12, 13, 14
    # Row 7: [8, 9, 10, 11, 12, 13, 14, 15]
    .word 8, 9, 10, 11, 12, 13, 14, 15

# Expected Result C (Identity * B = B)
# Should match Matrix B exactly

.org 0x300  # Result Matrix C (8x8)
matrix_c_8x8:
    .space 256  # 64 words * 4 bytes = 256 bytes
