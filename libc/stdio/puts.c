#include <stdio.h>

int puts(const char* s) {
    
    // TODO: add error handling
    while(*s) {
        putchar(*s);
    }
    putchar('\n');
    return 0;
}