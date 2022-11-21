#include <string.h>

// Locates the first occurrence in the string pointed to by s1 of any character from the
// string pointed to by s2.
// @return Pointer to the character, or a null pointer if no character from s2 occurs in s1.
char *strpbrk(const char *s1, const char *s2) {
    while(*s1) {
        if (strchr(s2, *s1)) {
            return (char*) s1;
        }
        s1++;
    }
    return NULL;
}
