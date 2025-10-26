# sim/tests/test_all_units.s - Test all vector operations
.section .text
.global _start
.include "opcodes.inc"

_start:
    # =========================================================================
    # TEST 1: Vector Load (VLD)
    # =========================================================================
    li s0, 0x100
    mv a0, s0
    vld v1, (a0)        # Load 8 words from 0x100 into v1
    
    li s0, 0x120
    mv a0, s0
    vld v2, (a0)        # Load 8 words from 0x120 into v2
    
    # =========================================================================
    # TEST 2: Vector Add (VADD) 
    # v3 = v1 + v2
    # =========================================================================
    vadd v3, v1, v2
    
    # Store VADD result
    li s0, 0x200
    mv a0, s0
    vst v3, (a0)
    
    # =========================================================================
    # TEST 3: Vector Subtract (VSUB)
    # v4 = v1 - v2
    # =========================================================================
    vsub v4, v1, v2
    
    # Store VSUB result
    li s0, 0x220
    mv a0, s0
    vst v4, (a0)
    
    # =========================================================================
    # TEST 4: Vector Multiply (VMUL)
    # v5 = v1 * v2
    # =========================================================================
    vmul v5, v1, v2
    
    # Store VMUL result
    li s0, 0x240
    mv a0, s0
    vst v5, (a0)
    
    # =========================================================================
    # TEST 5: Vector MAC (VMAC)
    # v6 = v1 * v2 + v6 (accumulator)
    # =========================================================================
    # Load accumulator values
    li s0, 0x140
    mv a0, s0
    vld v6, (a0)
    
    # Perform VMAC
    vmac v6, v1, v2
    
    # Store VMAC result
    li s0, 0x260
    mv a0, s0
    vst v6, (a0)
    
    # =========================================================================
    # TEST 6: 2x2 Matrix Multiply (VMMUL)
    # =========================================================================
    # Load 2x2 matrices
    li s0, 0x160
    mv a0, s0
    vld v7, (a0)        # Matrix A (2x2)
    
    li s0, 0x180
    mv a0, s0
    vld v8, (a0)        # Matrix B (2x2)
    
    # 2x2 Matrix multiply
    vmmul.2x2 v9, v7, v8
    
    # Store result
    li s0, 0x280
    mv a0, s0
    vst v9, (a0)
    
    # =========================================================================
    # TEST 7: 4x4 Matrix Multiply (VMMUL)
    # =========================================================================
    # Load 4x4 matrices (simplified - using same data)
    vmmul.4x4 v10, v1, v2
    
    # Store result
    li s0, 0x2A0
    mv a0, s0
    vst v10, (a0)
    
    # =========================================================================
    # TEST 8: Chained Operations
    # =========================================================================
    vadd v11, v3, v4    # Add previous results
    vmul v12, v11, v5   # Multiply with another result
    
    # Store chained result
    li s0, 0x2C0
    mv a0, s0
    vst v12, (a0)
    
    # Signal completion
    li t0, 1
    lui t1, 0x1
    sw t0, 0(t1)

hang:
    j hang

# =========================================================================
# Test Data Section
# =========================================================================

.org 0x100  # Vector A (for basic ops)
vec_a:
    .word 10, 20, 30, 40, 50, 60, 70, 80

.org 0x120  # Vector B (for basic ops)
vec_b:
    .word 5, 5, 5, 5, 5, 5, 5, 5

.org 0x140  # Accumulator for VMAC
vec_acc:
    .word 100, 100, 100, 100, 100, 100, 100, 100

.org 0x160  # 2x2 Matrix A
matrix_a_2x2:
    .word 1, 2
    .word 3, 4
    .word 0, 0, 0, 0  # Padding

.org 0x180  # 2x2 Matrix B
matrix_b_2x2:
    .word 5, 6
    .word 7, 8
    .word 0, 0, 0, 0  # Padding

# Results will be stored starting at 0x200
.org 0x200
results:
    .space 256  # Space for all results
