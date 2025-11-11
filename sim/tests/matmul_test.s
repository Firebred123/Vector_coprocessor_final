# sim/tests/matmul_test.s - Comprehensive matrix multiply test
.section .text
.global _start
.include "opcodes.inc"

_start:
    # =========================================================================
    # Test Case 1: 2x2 Matrix Multiply
    # Matrix A:        Matrix B:        Expected Result C:
    # [1  2]           [5  6]           [19  22]
    # [3  4]           [7  8]           [43  50]
    # =========================================================================
    
    li s0, 0x100     # Matrix A (2x2)
    li s1, 0x120     # Matrix B (2x2)
    li s2, 0x200     # Result C (2x2)
    
    # Load matrix A into v1
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    # Load matrix B into v2
    mv a0, s1
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V2 << 7) | OPCODE_CUSTOM0)
    
    # 2x2 Matrix multiply: v3 = A * B
    # funct3[2:0] = 000 for 2x2
    .word ((FUNCT7_VMMUL << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)
    
    # Store result
    mv a0, s2
    .word ((FUNCT7_VST << 25) | (V3 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Test Case 2: 2x2 Matrix Multiply (Different values)
    # Matrix A:        Matrix B:        Expected Result C:
    # [2   3]          [1   0]          [11   6]
    # [4   5]          [3   2]          [19  10]
    # =========================================================================
    
    li s0, 0x140     # Matrix A (2x2)
    li s1, 0x160     # Matrix B (2x2)
    li s2, 0x220     # Result C (2x2)
    
    # Load matrix A into v4
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V4 << 7) | OPCODE_CUSTOM0)
    
    # Load matrix B into v5
    mv a0, s1
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V5 << 7) | OPCODE_CUSTOM0)
    
    # 2x2 Matrix multiply: v6 = A * B
    .word ((FUNCT7_VMMUL << 25) | (V5 << 20) | (V4 << 15) | (0 << 12) | (V6 << 7) | OPCODE_CUSTOM0)
    
    # Store result
    mv a0, s2
    .word ((FUNCT7_VST << 25) | (V6 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Test Case 3: Identity Matrix Test
    # Matrix A:        Matrix I:        Expected Result C:
    # [1  2]           [1  0]           [1  2]
    # [3  4]           [0  1]           [3  4]
    # =========================================================================
    
    li s0, 0x180     # Matrix A (2x2)
    li s1, 0x1A0     # Identity Matrix (2x2)
    li s2, 0x240     # Result C (2x2)
    
    # Load matrix A into v7
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V7 << 7) | OPCODE_CUSTOM0)
    
    # Load identity matrix into v8
    mv a0, s1
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V8 << 7) | OPCODE_CUSTOM0)
    
    # 2x2 Matrix multiply: v9 = A * I
    .word ((FUNCT7_VMMUL << 25) | (V8 << 20) | (V7 << 15) | (0 << 12) | (V9 << 7) | OPCODE_CUSTOM0)
    
    # Store result
    mv a0, s2
    .word ((FUNCT7_VST << 25) | (V9 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Test Case 4: Zero Matrix Test
    # Matrix A:        Matrix Zero:     Expected Result C:
    # [1  2]           [0  0]           [0  0]
    # [3  4]           [0  0]           [0  0]
    # =========================================================================
    
    li s0, 0x1C0     # Matrix A (2x2)
    li s1, 0x1E0     # Zero Matrix (2x2)
    li s2, 0x260     # Result C (2x2)
    
    # Load matrix A into v10
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V10 << 7) | OPCODE_CUSTOM0)
    
    # Load zero matrix into v11
    mv a0, s1
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V11 << 7) | OPCODE_CUSTOM0)
    
    # 2x2 Matrix multiply: v12 = A * Zero
    .word ((FUNCT7_VMMUL << 25) | (V11 << 20) | (V10 << 15) | (0 << 12) | (V12 << 7) | OPCODE_CUSTOM0)
    
    # Store result
    mv a0, s2
    .word ((FUNCT7_VST << 25) | (V12 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Signal completion
    li t0, 1
    lui t1, 0x1
    sw t0, 0(t1)

hang:
    j hang

# =========================================================================
# Test Data Section
# =========================================================================

.org 0x100  # Test 1: Matrix A (2x2)
matrix_a_test1:
    .word 1, 2      # Row 0
    .word 3, 4      # Row 1
    .word 0, 0, 0, 0  # Padding

.org 0x120  # Test 1: Matrix B (2x2)
matrix_b_test1:
    .word 5, 6      # Row 0
    .word 7, 8      # Row 1
    .word 0, 0, 0, 0  # Padding

.org 0x140  # Test 2: Matrix A (2x2)
matrix_a_test2:
    .word 2, 3      # Row 0
    .word 4, 5      # Row 1
    .word 0, 0, 0, 0  # Padding

.org 0x160  # Test 2: Matrix B (2x2)
matrix_b_test2:
    .word 1, 0      # Row 0
    .word 3, 2      # Row 1
    .word 0, 0, 0, 0  # Padding

.org 0x180  # Test 3: Matrix A (2x2)
matrix_a_test3:
    .word 1, 2      # Row 0
    .word 3, 4      # Row 1
    .word 0, 0, 0, 0  # Padding

.org 0x1A0  # Test 3: Identity Matrix (2x2)
identity_matrix:
    .word 1, 0      # Row 0
    .word 0, 1      # Row 1
    .word 0, 0, 0, 0  # Padding

.org 0x1C0  # Test 4: Matrix A (2x2)
matrix_a_test4:
    .word 1, 2      # Row 0
    .word 3, 4      # Row 1
    .word 0, 0, 0, 0  # Padding

.org 0x1E0  # Test 4: Zero Matrix (2x2)
zero_matrix:
    .word 0, 0      # Row 0
    .word 0, 0      # Row 1
    .word 0, 0, 0, 0  # Padding

# Results will be stored starting at 0x200
.org 0x200
results:
    .space 256  # Space for all results
