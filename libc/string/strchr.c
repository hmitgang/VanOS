#include <string.h>

// Locates the first occurrence of c (converted to a char) in the string pointed to by s. 
// The terminating null character is considered to be part of the string.
// @return Pointer to the located character, or @code NULL if the character does not occur in the string.
char* strchr(const char* s, int c) {
    while(*s) {
        if(*s == (char) c) {
            return (char*) s;
        }
    }
    return NULL;
}
