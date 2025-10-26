# sim/tests/minimal_test.s
# Minimal test to verify basic functionality

.section .text
.globl _start

_start:
    # Initialize
    li x1, 0
    li x2, 0
    
    # Simple arithmetic
    li x3, 5
    li x4, 10
    add x5, x3, x4     # x5 = 15
    
    # Simple memory test
    li x6, 0x2000
    sw x5, 0(x6)       # Store 15 to 0x2000
    lw x7, 0(x6)       # Load it back
    
    # Signal completion
    li x8, 0x1000
    li x9, 1
    sw x9, 0(x8)       # Write 1 to 0x1000
    
    # Infinite loop
done:
    j done
    nop
    nop
