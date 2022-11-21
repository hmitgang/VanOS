#include <string.h>

void* memmove(void* dest, const void* src, size_t n) {
    if (dest < src) {
        for (size_t i = 0; i < n; i++) {
            ((char*)dest)[i] = ((char*)src)[i];
        }
    } else {
        for (size_t i = n; i != 0; i--) {
            ((char*)dest)[i-1] = ((char*)src)[i-1];
        }
    }
    return dest;
}