.section .text.init
.globl _start
_start:
    li sp, 0x3000
    call main
hang: j hang
