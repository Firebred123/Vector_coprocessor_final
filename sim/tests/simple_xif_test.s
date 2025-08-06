# sim/tests/simple_xif_test.s - Simple test to verify XIF handshake

.section .text
.global _start
.include "opcodes.inc"

_start:
    # Set up a simple test address
    lui a0, 0x10      # Load upper immediate: a0 = 0x10000
    
    # Signal that we've started
    li t0, 0xDEAD
    lui t1, 0x2
    sw t0, 0(t1)      # Store debug marker at 0x2000
    
    # Try a simple vector load instruction
    # This should trigger the XIF interface
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    # If we get here, the XIF handshake worked
    li t0, 0xBEEF
    lui t1, 0x2
    sw t0, 4(t1)      # Store success marker at 0x2004
    
    # Signal completion
    li t0, 1
    lui t1, 0x1       # Address 0x1000
    sw t0, 0(t1)      # Store completion flag

hang:
    j hang

.section .data
.align 4
test_data:
    .word 0x12345678, 0x9ABCDEF0, 0x11111111, 0x22222222
    .word 0x33333333, 0x44444444, 0x55555555, 0x66666666
