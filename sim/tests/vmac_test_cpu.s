# sim/tests/vmac_test_cpu.s - CPU-only version of VMAC test
.section .text
.global _start
.include "opcodes.inc"

_start:
    # Load base addresses
    li s0, 0x100     # vector A
    li s1, 0x140     # vector B  
    li s2, 0x180     # vector C (accumulator)
    
    # Initialize loop counter
    li t0, 8         # 8 elements
    li t1, 0         # index
    
loop:
    # Calculate addresses for current element
    slli t2, t1, 2   # t2 = index * 4 (byte offset)
    add t3, s0, t2   # A[i] address
    add t4, s1, t2   # B[i] address  
    add t5, s2, t2   # C[i] address
    
    # Load A[i], B[i], C[i]
    lw a0, 0(t3)     # a0 = A[i]
    lw a1, 0(t4)     # a1 = B[i]
    lw a2, 0(t5)     # a2 = C[i]
    
    # Compute: C[i] = A[i] * B[i] + C[i]
    mul a3, a0, a1   # a3 = A[i] * B[i]
    add a3, a3, a2   # a3 += C[i]
    
    # Store result
    sw a3, 0(t5)
    
    # Increment and loop
    addi t1, t1, 1
    blt t1, t0, loop
    
    # Signal completion
    li t0, 1
    lui t1, 0x1
    sw t0, 0(t1)

hang:
    j hang

.org 0x100
vector_a:
    .word 1, 2, 3, 4, 5, 6, 7, 8

.org 0x140
vector_b:
    .word 10, 10, 10, 10, 10, 10, 10, 10

.org 0x180
vector_c:
    .word 100, 100, 100, 100, 100, 100, 100, 100
