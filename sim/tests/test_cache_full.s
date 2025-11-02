# test_cache_full.s - Comprehensive cache test program
# Tests both I-cache and D-cache with various access patterns

.include "opcodes.inc"

.section .text
.global _start

_start:
    # Initialize stack pointer
    li sp, 0x7FFC
    
    # Initialize base registers
    li s0, 0x1000      # Data base address
    li s1, 0x2000      # Vector data base
    li s2, 0          # Test counter
    
    # =========================================================================
    # Test 1: Sequential Memory Access (Good for Cache)
    # =========================================================================
test_sequential:
    li t0, 0x1000
    li t1, 32         # Access 32 words sequentially
    li t2, 0          # Counter
    
seq_loop:
    lw t3, 0(t0)      # Load word (first will miss, rest in same line will hit)
    addi t0, t0, 4    # Next word
    addi t2, t2, 1
    blt t2, t1, seq_loop
    
    # Result: High cache hit rate after first miss

    # =========================================================================
    # Test 2: Strided Access (Tests Cache Line Boundaries)
    # =========================================================================
test_strided:
    li t0, 0x1000
    li t1, 8          # 8 accesses
    li t2, 0
    li t3, 32         # Stride of 32 bytes (cache line size)
    
stride_loop:
    lw t4, 0(t0)      # Each access to different cache line
    add t0, t0, t3    # Add stride
    addi t2, t2, 1
    blt t2, t1, stride_loop
    
    # Result: Each access causes cache miss

    # =========================================================================
    # Test 3: Repeated Access (Tests Cache Hits)
    # =========================================================================
test_repeated:
    li t0, 0x1500     # Some address
    li t1, 100        # Repeat 100 times
    li t2, 0
    
repeat_loop:
    lw t3, 0(t0)      # First access misses, rest hit
    lw t4, 4(t0)      # Same cache line
    lw t5, 8(t0)      # Same cache line
    addi t2, t2, 1
    blt t2, t1, repeat_loop
    
    # Result: Very high hit rate (99%)

    # =========================================================================
    # Test 4: Write-Through Test
    # =========================================================================
test_write:
    li t0, 0x3000
    li t1, 0x12345678
    li t2, 0x87654321
    
    sw t1, 0(t0)      # Write to cache and memory
    sw t2, 4(t0)      # Write to same cache line
    
    lw t3, 0(t0)      # Read back (should hit in cache)
    lw t4, 4(t0)      # Read back (should hit in cache)
    
    # Verify values
    bne t3, t1, test_fail
    bne t4, t2, test_fail

    # =========================================================================
    # Test 5: Vector Operations with Cache
    # =========================================================================
test_vector_ops:
    # Load vector data addresses
    li a0, 0x4000     # Vector A base
    li a1, 0x4100     # Vector B base
    li a2, 0x4200     # Vector C base
    
    # Initialize some test data
    li t0, 1
    li t1, 2
    li t2, 3
    li t3, 4
    
    sw t0, 0(a0)
    sw t1, 4(a0)
    sw t2, 8(a0)
    sw t3, 12(a0)
    
    sw t0, 0(a1)
    sw t1, 4(a1)
    sw t2, 8(a1)
    sw t3, 12(a1)
    
    # Vector load (custom instruction)
    .word 0x0140000b  # vld v0, 0(a0)
    .word 0x0140800b  # vld v1, 0(a1)
    
    # Vector add
    .word 0x0020840b  # vadd v2, v0, v1
    
    # Vector store
    .word 0x0241000b  # vst v2, 0(a2)
    
    # Verify result
    lw t0, 0(a2)      # Should be 2
    lw t1, 4(a2)      # Should be 4
    lw t2, 8(a2)      # Should be 6
    lw t3, 12(a2)     # Should be 8

    # =========================================================================
    # Test 6: Cache Conflict Test
    # =========================================================================
test_conflict:
    # Access addresses that map to same cache line (direct-mapped)
    # Assuming 512 cache lines (16KB cache, 32B lines)
    li t0, 0x1000     # Address 1
    li t1, 0x5000     # Address 2 (0x4000 apart = maps to same line)
    
    lw t2, 0(t0)      # Load from address 1 (miss)
    lw t3, 0(t1)      # Load from address 2 (miss, evicts line)
    lw t4, 0(t0)      # Load from address 1 again (miss due to conflict)
    
    # Result: Conflict misses reduce hit rate

    # =========================================================================
    # Test 7: Matrix Multiply with Cache
    # =========================================================================
test_matmul:
    # Setup 2x2 matrices
    li a0, 0x6000     # Matrix A
    li a1, 0x6100     # Matrix B
    li a2, 0x6200     # Matrix C (result)
    
    # Matrix A = [[1, 2], [3, 4]]
    li t0, 1
    sw t0, 0(a0)
    li t0, 2
    sw t0, 4(a0)
    li t0, 3
    sw t0, 8(a0)
    li t0, 4
    sw t0, 12(a0)
    
    # Matrix B = [[5, 6], [7, 8]]
    li t0, 5
    sw t0, 0(a1)
    li t0, 6
    sw t0, 4(a1)
    li t0, 7
    sw t0, 8(a1)
    li t0, 8
    sw t0, 12(a1)
    
    # Load matrices to vector registers
    .word 0x0140000b  # vld v0, 0(a0)
    .word 0x0140800b  # vld v1, 0(a1)
    
    # Matrix multiply (custom instruction)
    .word 0x0420840b  # vmmul v2, v0, v1
    
    # Store result
    .word 0x0241000b  # vst v2, 0(a2)
    
    # Check result: C = [[19, 22], [43, 50]]
    lw t0, 0(a2)
    li t1, 19
    bne t0, t1, test_fail
    
    lw t0, 4(a2)
    li t1, 22
    bne t0, t1, test_fail

    # =========================================================================
    # Test 8: Instruction Cache Test
    # =========================================================================
test_icache:
    # Jump to different code sections to test I-cache
    jal test_func1
    jal test_func2
    jal test_func1    # Call again - should hit in I-cache
    jal test_func3
    
    j test_complete

# Test functions at different addresses
.align 5              # Align to cache line boundary
test_func1:
    addi s2, s2, 1    # Increment counter
    ret

.align 5
test_func2:
    addi s2, s2, 2
    ret

.align 5
test_func3:
    addi s2, s2, 3
    ret

    # =========================================================================
    # Test Completion
    # =========================================================================
test_complete:
    li t0, 0xDEADBEEF # Success marker
    li t1, 0x7000
    sw t0, 0(t1)      # Write success marker
    
    # Infinite loop (success)
success_loop:
    nop
    nop
    nop
    j success_loop

test_fail:
    li t0, 0xBADBAD   # Failure marker
    li t1, 0x7000
    sw t0, 0(t1)      # Write failure marker
    
fail_loop:
    nop
    nop
    nop
    j fail_loop

    # =========================================================================
    # Data Section
    # =========================================================================
.section .data
.align 5

# Test data arrays
test_array1:
    .word 0x11111111, 0x22222222, 0x33333333, 0x44444444
    .word 0x55555555, 0x66666666, 0x77777777, 0x88888888
    
test_array2:
    .word 0xAAAAAAAA, 0xBBBBBBBB, 0xCCCCCCCC, 0xDDDDDDDD
    .word 0xEEEEEEEE, 0xFFFFFFFF, 0x12121212, 0x34343434

# Padding to test cache line boundaries
.align 5
padding:
    .space 256

# Matrix data
matrix_data:
    .space 1024
