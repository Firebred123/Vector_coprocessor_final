
/* sim/tests/link.ld - Linker script for RISC-V test programs */

MEMORY
{
    RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 32K
}

SECTIONS
{
    . = 0x00000000;
    
    .text : {
        *(.text)
        *(.text.*)
    } > RAM
    
    .data : {
        *(.data)
        *(.data.*)
    } > RAM
    
    .bss : {
        *(.bss)
        *(.bss.*)
    } > RAM
    
    .rodata : {
        *(.rodata)
        *(.rodata.*)
    } > RAM
    
    /DISCARD/ : {
        *(.comment)
        *(.note.*)
    }
}

