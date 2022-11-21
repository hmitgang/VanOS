#include <string.h>

// Appends not more than n characters (a null character and characters that follow it 
// are not appended) from the array pointed to by src to the end of the string pointed
// to by dest. The initial character of src overwrites the null character at the end of
// dest. A terminating null character is always appended to the result. Thus, dest should
// accommodate strlen(src)+n+1 characters. Source and destination may not overlap.
// @return The pointer dest; the function has no failure mode and no error return.
char *strncat(char* dest, const char* src, size_t n) {
    char* ret = dest;
    while(*dest) dest++;
    while(n-- && *src) *dest++ = *src++;
    *dest = '\0';
    return ret;
}
