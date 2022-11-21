#include <string.h>

// Computes the length of the maximum initial segment of the string pointed to
// by s1 which consists entirely of characters not from the string pointed to by s2.
// @return Length of the segment.
size_t strcspn(const char *s1, const char *s2) {
    size_t ret = 0;
    while(*s1) {
        if(strchr(s2, *s1)) {
            return ret;
        }
        ret++;
        s1++;
    }
    return ret;
}