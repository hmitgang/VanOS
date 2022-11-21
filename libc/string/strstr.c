#include <string.h>

// Locates the first occurrence in the string pointed to by s1 of the sequence of
// characters (excluding the terminating null character) in the string pointed to by s2.
// @return Pointer to the located string, or a null pointer if the string is not found.
// If s2 points to a string with zero length, the function returns s1.
char *strstr(const char *s1, const char *s2) {
    size_t n = strlen(s2);
    while(*s1) {
        if(!memcmp(s1, s2, n)) {
            return (char*) s1;
        }
        s1++;
    }
    return NULL;
}
