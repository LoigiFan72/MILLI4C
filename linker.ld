/* Reconstructed from ELF sections */

OUTPUT_FORMAT("elf32-littlearm")
ENTRY(_start)

MEMORY
{
    ROM  (rx)  : ORIGIN = 0x00100000, LENGTH = 0x53CB98  /* .text */
    RAM  (rwx) : ORIGIN = 0x006C9000, LENGTH = 0x31874C /* covers .data + .bss */
}

SECTIONS
{
    /* Text section in ROM */
    .text : {
        *(.text*)
    } > ROM

    /* Finalization code */
    .fini : {
        *(.fini*)
    } > ROM

    /* Read-only data, mapped to RAM here because ELF shows WA flags */
    .rodata : {
        *(.rodata*)
    } > RAM

    /* Memory region placeholder (empty section) */
    .memregion : {
        *(.memregion*)
    } > RAM

    /* Initialized data */
    .data : {
        *(.data*)
    } > RAM

    /* Uninitialized data */
    .bss : {
        *(.bss*)
        *(COMMON)
    } > RAM
}
