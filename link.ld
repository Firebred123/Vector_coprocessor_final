MEMORY { ram : ORIGIN = 0x00000000, LENGTH = 16K }
SECTIONS {
  . = 0x00000000;
  .text : { *(.text.init) *(.text*) } > ram
  .rodata : { *(.rodata*) } > ram
  .data : { *(.data*) } > ram
  .bss : { *(.bss*) *(COMMON) } > ram
}
