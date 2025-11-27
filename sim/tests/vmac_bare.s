# sim/tests/bare_minimum.s - Measure baseline overhead
.section .text
.global _start

_start:
    # Signal completion immediately (no vector operations)
    li t0, 1
    lui t1, 0x1
    sw t0, 0(t1)

hang:
    j hang
