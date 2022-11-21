#include <string.h>

void* memcpy(void* __restrict dest, const void* __restrict src, size_t n) {

    for (size_t i = 0; i < n; i++) {
        ((char*)dest)[i] = ((char*)src)[i];
    }
    
    return dest;
}
