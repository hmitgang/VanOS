#include <string.h>

int memcmp(const void* s1, const void* s2, size_t n) {
    const char* p1 = s1;
    const char* p2 = s2;
    while(n--) {
        if(*p1 != *p2) {
            return *p1 - *p2;
        } else {
            p1++;
            p2++;
        }
    }
    return 0;
}