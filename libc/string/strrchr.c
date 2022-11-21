#include <string.h>

char *strrchr(const char *s, int c) {
    char* ret = NULL;
    do {
        if( *s == (char)c )
            ret = (char*) s;
    } while(*s++);
    return ret;
}
