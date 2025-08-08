# sim/tests/debug_mem.s - Display memory at specific locations
.section .text
.global _start
.include "opcodes.inc"

_start:
    # First, do a simple test
    li s0, 0x100     # source
    li s1, 0x200     # dest
    
    # Load from 0x100
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    # Store to 0x200  
    mv a0, s1
    .word ((FUNCT7_VST << 25) | (V1 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Now write some markers to help identify memory
    li t0, 0xDEADBEEF
    li t1, 0x1FC
    sw t0, 0(t1)     # Write marker just before 0x200
    
    li t0, 0xCAFEBABE
    li t1, 0x220
    sw t0, 0(t1)     # Write marker just after stored data
    
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

.org 0x1FC
    .word 0xAAAAAAAA  # Marker before result

.org 0x200
result_space:
    .space 32

.org 0x220
    .word 0xBBBBBBBB  # Marker after result
