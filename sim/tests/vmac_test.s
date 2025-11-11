# sim/tests/vmac_test.s - Test VMUL operation
.section .text
.global _start
.include "opcodes.inc"

_start:
    # Load test vectors
    li s0, 0x100     # vector A
    li s1, 0x140     # vector B  
    li s2, 0x180     # vector C (accumulator)
    li s3, 0x200     # result
    
    # Load vector A into v1
    mv a0, s0
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V1 << 7) | OPCODE_CUSTOM0)
    
    # Load vector B into v2
    mv a0, s1
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V2 << 7) | OPCODE_CUSTOM0)

    mv a0, s2
    .word ((FUNCT7_VLD << 25) | (0 << 20) | (A0 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)

    
    # VMUL: v3 = v1 * v2
    .word ((FUNCT7_VMAC << 25) | (V2 << 20) | (V1 << 15) | (0 << 12) | (V3 << 7) | OPCODE_CUSTOM0)
    
    # Store result
    mv a0, s2
    .word ((FUNCT7_VST << 25) | (V3 << 20) | (A0 << 15) | (0 << 12) | (0 << 7) | OPCODE_CUSTOM0)
    
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

.org 0x200
result:
    .space 32
