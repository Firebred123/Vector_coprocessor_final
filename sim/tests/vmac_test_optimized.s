# sim/tests/vmac_test_optimized.s - Minimal scalar overhead version
# Reduces CPU cycles between vector instructions
.section .text
.global _start
.include "opcodes.inc"

_start:
    # Pre-load ALL addresses into registers ONCE at the start
    # This removes repeated li/mv instructions between vector ops
    li a0, 0x100     # vector A address (stays in a0)
    li a1, 0x140     # vector B address (stays in a1)  
    li a2, 0x180     # vector C address (stays in a2)
    
    # =========================================================================
    # VECTOR OPERATIONS - Back to back with minimal gaps
    # =========================================================================
    
    # VLD v1, (a0)  - Load vector A
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    # VLD v2, (a1)  - Load vector B  
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A1 << 15) | (0 << 12) | (V2 << 7) | OPCODE_CUSTOM0)
    
    # VLD v3, (a2)  - Load vector C (accumulator)
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A2 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)
    
    # VMAC v3, v1, v2  - v3 = v1 * v2 + v3
    .word ((FUNCT7_VMAC << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)
    
    # VST v3, (a2)  - Store result back to C
    .word ((FUNCT7_VST << 25) | (V3 << 20) | (A2 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # =========================================================================
    # Signal completion
    # =========================================================================
    li t0, 1
    lui t1, 0x1        # t1 = 0x1000
    sw t0, 0(t1)       # Store 1 at address 0x1000

hang:
    j hang

# =========================================================================
# Data Section
# =========================================================================
.org 0x100
vector_a:
    .word 1, 2, 3, 4, 5, 6, 7, 8

.org 0x140
vector_b:
    .word 10, 20, 30, 40, 50, 60, 70, 80

.org 0x180
vector_c:
    .word 100, 100, 100, 100, 100, 100, 100, 100

.org 0x200
result:
    .space 32
