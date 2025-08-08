# sim/tests/vector_test.s - Simple test to verify basic operations
.section .text
.global _start
.include "opcodes.inc"

_start:
    # Test 1: Load known values and store them back
    li s0, 0x100     # source address
    li s1, 0x200     # destination address
    
    # Load vector from 0x100
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    # Store vector to 0x200  
    mv a0, s1
    .word ((FUNCT7_VST << 25) | (V1 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Signal completion
    li t0, 1
    lui t1, 0x1
    sw t0, 0(t1)

hang:
    j hang

.org 0x100
test_data:
    .word 0x11111111, 0x22222222, 0x33333333, 0x44444444
    .word 0x55555555, 0x66666666, 0x77777777, 0x88888888

.org 0x200
result_space:
    .space 32
