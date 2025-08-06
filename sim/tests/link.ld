/* sim/tests/link.ld */
OUTPUT_ARCH( "riscv" )
ENTRY( _start )

MEMORY
{
  ram (rxai!w) : ORIGIN = 0x00000000, LENGTH = 32K
}

SECTIONS
{
  .text :
  {
    *(.text.init)
    *(.text)
  } > ram

  .data :
  {
    *(.data)
  } > ram
}
