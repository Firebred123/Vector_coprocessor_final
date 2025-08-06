# sim/tests/matmul_8x8.s - Simple test version
.section .text
.global _start
.include "opcodes.inc"

_start:
    # Use fixed addresses in data section
    li s0, 0xa0      # matrix_a address  
    li s1, 0x1a0     # matrix_b address
    li s2, 0x2a0     # matrix_c address (result)
    li s4, 0x80      # zero_vector address
    li s3, 8         # Loop counter
    
    # Debug: Store initial values
    li t0, 0xDEAD
    lui t1, 0x2
    sw t0, 0(t1)

main_loop:
    # Initialize v10 to zero
    mv a0, s4
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V10 << 7) | OPCODE_CUSTOM0)
    
    # Load from matrix A
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V8 << 7) | OPCODE_CUSTOM0)
    
    # Load from matrix B  
    mv a0, s1
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V9 << 7) | OPCODE_CUSTOM0)
    
    # VMAC: v10 = v8 * v9 + v10
    .word ((FUNCT7_VMAC << 25) | (V9 << 20) | (V8 << 15) | (0 << 12) | (V10 << 7) | OPCODE_CUSTOM0)
    
    # Store to matrix C
    mv a0, s2
    .word ((FUNCT7_VST << 25) | (V10 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Update pointers
    addi s0, s0, 32
    addi s1, s1, 32
    addi s2, s2, 32
    
    # Loop
    addi s3, s3, -1
    bnez s3, main_loop
    
    # Signal completion
    li t0, 1
    lui t1, 0x1
    sw t0, 0(t1)

hang:
    j hang

# Place data at specific addresses
.org 0x80
zero_vector:
    .word 0, 0, 0, 0, 0, 0, 0, 0

.org 0xa0
matrix_a:
    .word 1, 2, 3, 4, 5, 6, 7, 8
    .word 2, 3, 4, 5, 6, 7, 8, 9
    .word 3, 4, 5, 6, 7, 8, 9, 10
    .word 4, 5, 6, 7, 8, 9, 10, 11
    .word 5, 6, 7, 8, 9, 10, 11, 12
    .word 6, 7, 8, 9, 10, 11, 12, 13
    .word 7, 8, 9, 10, 11, 12, 13, 14
    .word 8, 9, 10, 11, 12, 13, 14, 15

.org 0x1a0
matrix_b:
    .word 1, 1, 1, 1, 1, 1, 1, 1
    .word 2, 2, 2, 2, 2, 2, 2, 2
    .word 3, 3, 3, 3, 3, 3, 3, 3
    .word 4, 4, 4, 4, 4, 4, 4, 4
    .word 5, 5, 5, 5, 5, 5, 5, 5
    .word 6, 6, 6, 6, 6, 6, 6, 6
    .word 7, 7, 7, 7, 7, 7, 7, 7
    .word 8, 8, 8, 8, 8, 8, 8, 8

.org 0x2a0
matrix_c:
    .space 256
