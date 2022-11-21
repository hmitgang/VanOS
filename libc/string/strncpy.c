#include <string.h>

// The strncpy() function shall copy no more than n characters from the
// null-terminated string pointed to by src to the memory pointed to by dest. 
// The destination shall be padded with null characters.
// @warning A terminating null byte will not be written to the resulting dest
// string when the length of the src string is greater than or equal to n
// (this follows from the above description, it's not a new constraint).
// @return The pointer dest; the function has no failure mode and no error return.
char *strncpy(char * __restrict dest, const char * __restrict src, size_t n) {
    char* ret = dest;

    while(n-- && (*dest++ = *src++));
    return ret;
}
