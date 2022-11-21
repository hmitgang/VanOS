#include <string.h>

#include <kernel/tty.h>
#include <stdio.h>
 
/* Check if the compiler thinks you are targeting the wrong operating system. */
#if defined(__linux__)
#error "You are not using a cross-compiler, you will most certainly run into trouble"
#endif
 
/* This tutorial will only work for the 32-bit ix86 targets. */
#if !defined(__i386__)
#error "This tutorial needs to be compiled with a ix86-elf compiler"
#endif
 
 
void kernel_main(void) 
{
	/* Initialize terminal interface */
	terminal_initialize();

    char x[16] = "Harrison";
    char y[16];

	printf("Hello %s! You are %d (or %x) years old!\n 100%% cool!", x, 21, 21);

	/* Newline support is left as an exercise. */
	// terminal_writestring("\nHello, kernel World!\nWelcome to VanOS\nMy name is harrison.");
}

