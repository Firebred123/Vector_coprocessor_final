# sim/tests/vmac_multi_test.s - Multiple VMAC test cases
.section .text
.global _start
.include "opcodes.inc"

_start:
    # =========================================================================
    # Test Case 1: Basic VMAC (positive numbers)
    # v3 = v1 * v2 + v3
    # [1,2,3,4,5,6,7,8] * [10,10,10,10,10,10,10,10] + [100,100,100,100,100,100,100,100]
    # Expected: [110,120,130,140,150,160,170,180]
    # =========================================================================
    
    # Load vector A into v1
    li s0, 0x100
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    # Load vector B into v2
    li s0, 0x120
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V2 << 7) | OPCODE_CUSTOM0)
    
    # Load vector C into v3 (accumulator)
    li s0, 0x140
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)
    
    # VMAC: v3 = v1 * v2 + v3
    .word ((FUNCT7_VMAC << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)
    
    # Store result of test 1
    li s0, 0x200
    mv a0, s0
    .word ((FUNCT7_VST << 25) | (V3 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Test Case 2: VMAC with zeros
    # v6 = v4 * v5 + v6
    # [0,1,0,1,0,1,0,1] * [5,5,5,5,5,5,5,5] + [10,10,10,10,10,10,10,10]
    # Expected: [10,15,10,15,10,15,10,15]
    # =========================================================================
    
    # Load vector A (alternating 0,1) into v4
    li s0, 0x160
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V4 << 7) | OPCODE_CUSTOM0)
    
    # Load vector B (all 5s) into v5
    li s0, 0x180
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V5 << 7) | OPCODE_CUSTOM0)
    
    # Load vector C (all 10s) into v6
    li s0, 0x1A0
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V6 << 7) | OPCODE_CUSTOM0)
    
    # VMAC: v6 = v4 * v5 + v6
    .word ((FUNCT7_VMAC << 25) | (V5 << 20) | (V4 << 15) | (0 << 12) | (V6 << 7) | OPCODE_CUSTOM0)
    
    # Store result of test 2
    li s0, 0x220
    mv a0, s0
    .word ((FUNCT7_VST << 25) | (V6 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Test Case 3: VMAC with negative numbers (2's complement)
    # v9 = v7 * v8 + v9
    # [-1,-2,-3,-4,1,2,3,4] * [2,2,2,2,2,2,2,2] + [100,100,100,100,100,100,100,100]
    # Expected: [98,96,94,92,102,104,106,108]
    # =========================================================================
    
    # Load vector A (mixed positive/negative) into v7
    li s0, 0x1C0
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V7 << 7) | OPCODE_CUSTOM0)
    
    # Load vector B (all 2s) into v8
    li s0, 0x1E0
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V8 << 7) | OPCODE_CUSTOM0)
    
    # Load vector C (all 100s) into v9
    li s0, 0x140  # Reuse the 100s from earlier
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V9 << 7) | OPCODE_CUSTOM0)
    
    # VMAC: v9 = v7 * v8 + v9
    .word ((FUNCT7_VMAC << 25) | (V8 << 20) | (V7 << 15) | (0 << 12) | (V9 << 7) | OPCODE_CUSTOM0)
    
    # Store result of test 3
    li s0, 0x240
    mv a0, s0
    .word ((FUNCT7_VST << 25) | (V9 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Test Case 4: Chain VMAC operations
    # First: v10 = v1 * v2 + v10 (v10 starts at 0)
    # Then:  v10 = v1 * v2 + v10 (accumulate again)
    # Expected: [20,40,60,80,100,120,140,160] after both operations
    # =========================================================================
    
    # Load zeros into v10
    li s0, 0x260
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V10 << 7) | OPCODE_CUSTOM0)
    
    # First VMAC: v10 = v1 * v2 + v10
    .word ((FUNCT7_VMAC << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V10 << 7) | OPCODE_CUSTOM0)
    
    # Store result of test 4
    li s0, 0x280
    mv a0, s0
    .word ((FUNCT7_VST << 25) | (V10 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Test Case 5: Large numbers test
    # v13 = v11 * v12 + v13
    # [1000,2000,3000,4000,5000,6000,7000,8000] * [100,100,100,100,100,100,100,100] + [50000,50000,...]
    # Expected: [150000,250000,350000,450000,550000,650000,750000,850000]
    # =========================================================================
    
    # Load large vector A into v11
    li s0, 0x2A0
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V11 << 7) | OPCODE_CUSTOM0)
    
    # Load vector B (all 100s) into v12
    li s0, 0x2C0
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V12 << 7) | OPCODE_CUSTOM0)
    
    # Load vector C (all 50000s) into v13
    li s0, 0x2E0
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V13 << 7) | OPCODE_CUSTOM0)
    
    # VMAC: v13 = v11 * v12 + v13
    .word ((FUNCT7_VMAC << 25) | (V12 << 20) | (V11 << 15) | (0 << 12) | (V13 << 7) | OPCODE_CUSTOM0)
    
    # Store result of test 5
    li s0, 0x300
    mv a0, s0
    .word ((FUNCT7_VST << 25) | (V13 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Signal completion
    li t0, 1
    lui t1, 0x1
    sw t0, 0(t1)

hang:
    j hang

# =========================================================================
# Test Data
# =========================================================================

.org 0x100  # Test 1: Vector A
test1_vec_a:
    .word 1, 2, 3, 4, 5, 6, 7, 8

.org 0x120  # Test 1: Vector B
test1_vec_b:
    .word 10, 10, 10, 10, 10, 10, 10, 10

.org 0x140  # Test 1 & 3: Vector C (all 100s)
test1_vec_c:
    .word 100, 100, 100, 100, 100, 100, 100, 100

.org 0x160  # Test 2: Vector A (alternating)
test2_vec_a:
    .word 0, 1, 0, 1, 0, 1, 0, 1

.org 0x180  # Test 2: Vector B (all 5s)
test2_vec_b:
    .word 5, 5, 5, 5, 5, 5, 5, 5

.org 0x1A0  # Test 2: Vector C (all 10s)
test2_vec_c:
    .word 10, 10, 10, 10, 10, 10, 10, 10

.org 0x1C0  # Test 3: Vector A (negative numbers in 2's complement)
test3_vec_a:
    .word 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFD, 0xFFFFFFFC  # -1, -2, -3, -4
    .word 1, 2, 3, 4

.org 0x1E0  # Test 3: Vector B (all 2s)
test3_vec_b:
    .word 2, 2, 2, 2, 2, 2, 2, 2

.org 0x200  # Test 1 Result
test1_result:
    .space 32

.org 0x220  # Test 2 Result
test2_result:
    .space 32

.org 0x240  # Test 3 Result
test3_result:
    .space 32

.org 0x260  # Test 4: Initial zeros
test4_zeros:
    .word 0, 0, 0, 0, 0, 0, 0, 0

.org 0x280  # Test 4 Result
test4_result:
    .space 32

.org 0x2A0  # Test 5: Large vector A
test5_vec_a:
    .word 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000

.org 0x2C0  # Test 5: Vector B (all 100s)
test5_vec_b:
    .word 100, 100, 100, 100, 100, 100, 100, 100

.org 0x2E0  # Test 5: Vector C (all 50000s)
test5_vec_c:
    .word 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000

.org 0x300  # Test 5 Result
test5_result:
    .space 32
