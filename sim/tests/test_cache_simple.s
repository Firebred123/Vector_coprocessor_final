# sim/tests/test_cache_simple.s - Simple test for cache simulation

.section .text
.global _start

_start:
    # Initialize stack pointer
    li sp, 0x7FFC
    
    # Simple test sequence
    li t0, 0x1000
    li t1, 0x12345678
    sw t1, 0(t0)      # Store to memory (cache miss)
    lw t2, 0(t0)      # Load from memory (cache hit)
    
    # Test complete
    li t3, 0xDEADBEEF
    li t4, 0x2000
    sw t3, 0(t4)
    
    # Loop forever
done:
    nop
    nop
    j done
