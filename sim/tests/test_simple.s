# test_simple.s - Minimal test to verify completion detection
.section .text
.global _start

_start:
    # Just write 1 to address 0x1000 and loop
    li t0, 1           # Load 1 into t0
    lui t1, 0x1        # Load 0x1000 into t1
    sw t0, 0(t1)       # Store 1 to address 0x1000
    
hang:
    j hang             # Infinite loop

.section .data
.align 4
data:
    .word 0x12345678
