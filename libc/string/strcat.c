#include <string.h>

char* strcat(char * __restrict dest, const char * __restrict src) {
    char* spd = dest;

    while(*spd) spd++;
    do { *(spd++) = *(src++); } while(*src);

    return dest;
}
