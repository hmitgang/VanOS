#include <string.h>

void* memchr(const void* s, int c, size_t n) {
    for(size_t i = 0; i < n; i++) {
        if(((char*) s)[i] == (char) c) {
            return (char *) s + i;
        }
    }
    return NULL;
}
