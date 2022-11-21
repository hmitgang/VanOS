#include <string.h>

char *strcpy(char* __restrict dest, const char* __restrict src) {
    char* p = dest;
    while( (*dest++ = *src++) );
    return p;
}
