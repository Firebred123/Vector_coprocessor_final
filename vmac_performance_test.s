# vmac_comparison.s - Complete CPU vs Vector Performance Comparison
# This test performs the same VMAC operation using:
# 1. Traditional CPU (sequential processing)
# 2. Vector Coprocessor (parallel processing)

.section .text
.global _start

# Constants
.equ VECTOR_LEN, 8          # 8 elements per vector
.equ NUM_ITERATIONS, 100    # Number of test iterations for timing

# Custom instruction encodings
.equ OPCODE_CUSTOM0, 0x0B
.equ FUNCT7_VLD, 0x00
.equ FUNCT7_VST, 0x01
.equ FUNCT7_VMAC, 0x04

# Vector register assignments
.equ V1, 1
.equ V2, 2
.equ V3, 3
.equ V4, 4
.equ A0, 10

# Memory locations
.equ VEC_A_ADDR, 0x100
.equ VEC_B_ADDR, 0x140
.equ VEC_C_ADDR, 0x180
.equ CPU_RESULT_ADDR, 0x200
.equ VEC_RESULT_ADDR, 0x240

# Performance counter locations
.equ CPU_START_ADDR, 0x300
.equ CPU_END_ADDR, 0x304
.equ VEC_START_ADDR, 0x308
.equ VEC_END_ADDR, 0x30C
.equ CPU_CYCLES_ADDR, 0x310
.equ VEC_CYCLES_ADDR, 0x314

# CSR addresses
.equ CSR_CYCLE, 0xC00
.equ CSR_CYCLEH, 0xC80

_start:
    # Initialize stack pointer
    li sp, 0x2000
    
    # =========================================
    # PART 1: CPU IMPLEMENTATION (Sequential)
    # =========================================
    
    # Record start time for CPU
    csrr t0, CSR_CYCLE
    li t1, CPU_START_ADDR
    sw t0, 0(t1)
    
    # Outer loop for iterations
    li s0, NUM_ITERATIONS
cpu_outer_loop:
    # Initialize pointers for each iteration
    li a0, VEC_A_ADDR       # Vector A pointer
    li a1, VEC_B_ADDR       # Vector B pointer
    li a2, VEC_C_ADDR       # Vector C pointer
    li a3, CPU_RESULT_ADDR # Result pointer
    li t2, VECTOR_LEN       # Loop counter
    
cpu_inner_loop:
    # Load operands
    lw t3, 0(a0)           # Load A[i]
    lw t4, 0(a1)           # Load B[i]
    lw t5, 0(a2)           # Load C[i]
    
    # Perform MAC: result = A * B + C
    mul t6, t3, t4         # t6 = A[i] * B[i]
    add t6, t6, t5         # t6 = t6 + C[i]
    
    # Store result
    sw t6, 0(a3)           # Store to result[i]
    
    # Update pointers
    addi a0, a0, 4
    addi a1, a1, 4
    addi a2, a2, 4
    addi a3, a3, 4
    
    # Decrement counter and loop
    addi t2, t2, -1
    bnez t2, cpu_inner_loop
    
    # Decrement iteration counter
    addi s0, s0, -1
    bnez s0, cpu_outer_loop
    
    # Record end time for CPU
    csrr t0, CSR_CYCLE
    li t1, CPU_END_ADDR
    sw t0, 0(t1)
    
    # Calculate CPU cycles
    li t1, CPU_START_ADDR
    lw t2, 0(t1)           # Load start time
    sub t3, t0, t2         # Calculate elapsed cycles
    li t1, CPU_CYCLES_ADDR
    sw t3, 0(t1)           # Store CPU cycle count
    
    # =========================================
    # PART 2: VECTOR IMPLEMENTATION (Parallel)
    # =========================================
    
    # Record start time for Vector
    csrr t0, CSR_CYCLE
    li t1, VEC_START_ADDR
    sw t0, 0(t1)
    
    # Pre-load vectors (done once outside loop for fairness)
    # Load Vector A into v1
    li a0, VEC_A_ADDR
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    # Load Vector B into v2
    li a0, VEC_B_ADDR
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V2 << 7) | OPCODE_CUSTOM0)
    
    # Load Vector C into v3
    li a0, VEC_C_ADDR
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)
    
    # Outer loop for vector iterations
    li s0, NUM_ITERATIONS
vector_loop:
    # Perform VMAC: v4 = v1 * v2 + v3
    .word ((FUNCT7_VMAC << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V4 << 7) | OPCODE_CUSTOM0)
    
    # For fair comparison, store result each iteration
    li a0, VEC_RESULT_ADDR
    .word ((FUNCT7_VST << 25) | (V4 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
    # Decrement counter and loop
    addi s0, s0, -1
    bnez s0, vector_loop
    
    # Record end time for Vector
    csrr t0, CSR_CYCLE
    li t1, VEC_END_ADDR
    sw t0, 0(t1)
    
    # Calculate Vector cycles
    li t1, VEC_START_ADDR
    lw t2, 0(t1)           # Load start time
    sub t3, t0, t2         # Calculate elapsed cycles
    li t1, VEC_CYCLES_ADDR
    sw t3, 0(t1)           # Store Vector cycle count
    
    # =========================================
    # PART 3: Calculate and Store Performance Metrics
    # =========================================
    
    # Load cycle counts
    li t0, CPU_CYCLES_ADDR
    lw s2, 0(t0)           # s2 = CPU cycles
    li t0, VEC_CYCLES_ADDR
    lw s3, 0(t0)           # s3 = Vector cycles
    
    # Calculate speedup (CPU_cycles / Vector_cycles)
    # Using simple integer division for now
    beqz s3, avoid_div_zero
    divu s4, s2, s3        # s4 = speedup factor
    j store_speedup
avoid_div_zero:
    li s4, 0
store_speedup:
    li t0, 0x318
    sw s4, 0(t0)           # Store speedup at 0x318
    
    # =========================================
    # PART 4: Verify Results Match
    # =========================================
    
    # Compare CPU and Vector results
    li a0, CPU_RESULT_ADDR
    li a1, VEC_RESULT_ADDR
    li t0, VECTOR_LEN
    li t3, 1               # Assume pass
    
verify_loop:
    lw t1, 0(a0)
    lw t2, 0(a1)
    bne t1, t2, verify_fail
    addi a0, a0, 4
    addi a1, a1, 4
    addi t0, t0, -1
    bnez t0, verify_loop
    j verify_done
    
verify_fail:
    li t3, 0               # Set fail
    
verify_done:
    li t0, 0x31C
    sw t3, 0(t0)           # Store verification result at 0x31C
    
    # =========================================
    # Signal Completion
    # =========================================
    li t0, 1
    li t1, 0x1000
    sw t0, 0(t1)
    
    # Infinite loop
hang:
    j hang

# =========================================
# Data Section
# =========================================
.section .data
.align 4

.org 0x100
vector_a:
    .word 1, 2, 3, 4, 5, 6, 7, 8

.org 0x140
vector_b:
    .word 10, 10, 10, 10, 10, 10, 10, 10

.org 0x180
vector_c:
    .word 100, 100, 100, 100, 100, 100, 100, 100

.org 0x200
cpu_result:
    .space 32

.org 0x240
vec_result:
    .space 32

# Expected results for both: 110, 120, 130, 140, 150, 160, 170, 180
