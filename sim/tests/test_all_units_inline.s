# sim/tests/test_all_units_fixed.s - Test all vector operations (fixed version)
.section .text
.global _start

# Define opcodes inline (instead of include)
.equ OPCODE_CUSTOM0, 0x0B
.equ FUNCT7_VLD, 0x01
.equ FUNCT7_VST, 0x02
.equ FUNCT7_VMAC, 0x03
.equ FUNCT7_VMMUL, 0x04
.equ FUNCT7_VADD, 0x05
.equ FUNCT7_VSUB, 0x06
.equ FUNCT7_VMUL, 0x07
.equ MATSIZE_2X2, 0x00

# Register mappings
.equ A0, 10
.equ S0, 8
.equ T0, 5
.equ T1, 6

# Vector registers
.equ V1, 1
.equ V2, 2
.equ V3, 3
.equ V4, 4
.equ V5, 5
.equ V6, 6
.equ V7, 7
.equ V8, 8
.equ V9, 9
.equ V10, 10
.equ V11, 11
.equ V12, 12

_start:
    # =========================================================================
    # TEST 1: Vector Load (VLD)
    # =========================================================================
    li s0, 0x100
    mv a0, s0
    # vld v1, (a0)
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    li s0, 0x120
    mv a0, s0
    # vld v2, (a0)
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V2 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # TEST 2: Vector Add (VADD) 
    # v3 = v1 + v2
    # =========================================================================
    # vadd v3, v1, v2
    .word ((FUNCT7_VADD << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)
    
    # Store VADD result
    li s0, 0x200
    mv a0, s0
    # vst v3, (a0)
    .word ((FUNCT7_VST << 25) | (V3 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # TEST 3: Vector Subtract (VSUB)
    # v4 = v1 - v2
    # =========================================================================
    # vsub v4, v1, v2
    .word ((FUNCT7_VSUB << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V4 << 7) | OPCODE_CUSTOM0)
    
    # Store VSUB result
    li s0, 0x220
    mv a0, s0
    # vst v4, (a0)
    .word ((FUNCT7_VST << 25) | (V4 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # TEST 4: Vector Multiply (VMUL)
    # v5 = v1 * v2
    # =========================================================================
    # vmul v5, v1, v2
    .word ((FUNCT7_VMUL << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V5 << 7) | OPCODE_CUSTOM0)
    
    # Store VMUL result
    li s0, 0x240
    mv a0, s0
    # vst v5, (a0)
    .word ((FUNCT7_VST << 25) | (V5 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # TEST 5: Vector MAC (VMAC)
    # v6 = v1 * v2 + v6 (accumulator)
    # =========================================================================
    # Load accumulator values
    li s0, 0x140
    mv a0, s0
    # vld v6, (a0)
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V6 << 7) | OPCODE_CUSTOM0)
    
    # Perform VMAC: v6 = v1 * v2 + v6
    .word ((FUNCT7_VMAC << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V6 << 7) | OPCODE_CUSTOM0)
    
    # Store VMAC result
    li s0, 0x260
    mv a0, s0
    # vst v6, (a0)
    .word ((FUNCT7_VST << 25) | (V6 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # TEST 6: 2x2 Matrix Multiply (VMMUL)
    # =========================================================================
    # Load 2x2 matrices
    li s0, 0x160
    mv a0, s0
    # vld v7, (a0) - Matrix A
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V7 << 7) | OPCODE_CUSTOM0)
    
    li s0, 0x180
    mv a0, s0
    # vld v8, (a0) - Matrix B
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V8 << 7) | OPCODE_CUSTOM0)
    
    # vmmul.2x2 v9, v7, v8
    .word ((FUNCT7_VMMUL << 25) | (V8 << 20) | (V7 << 15) | (MATSIZE_2X2 << 12) | (V9 << 7) | OPCODE_CUSTOM0)
    
    # Store result
    li s0, 0x280
    mv a0, s0
    # vst v9, (a0)
    .word ((FUNCT7_VST << 25) | (V9 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
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
