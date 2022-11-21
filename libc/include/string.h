#ifndef _STRING_H
#define _STRING_H 1

#include <sys/cdefs.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void* memchr(const void* s, int c, size_t n);
int memcmp(const void* s1, const void* s2, size_t n);
void* memcpy(void* __restrict dest, const void* __restrict src, size_t n);
void* memmove(void* dest, const void* src, size_t n);
void* memset(void* s, int c, size_t n);

char* strcat(char * __restrict dest, const char * __restrict src);
char* strchr(const char* s, int c);
int strcmp(const char* s1, const char* s2);
int strcoll(const char *s1, const char *s2); // TODO
char* strcpy(char* __restrict dest, const char* __restrict src);
size_t strcspn(const char *s1, const char *s2);
char* strerror(int errnum); // TODO
size_t strlen(const char* s);
char *strncat(char *dest, const char *src, size_t n);
int strncmp(const char * s1, const char * s2, size_t n);
char *strncpy(char * __restrict dest, const char * __restrict src, size_t n);
char *strpbrk(const char *s1, const char *s2);
char *strrchr(const char *s, int c);
size_t strspn(const char *s1, const char *s2);
char *strstr(const char *s1, const char *s2);
char *strtok(char * __restrict str, const char * __restrict delim); // TODO
size_t strxfrm(char * __restrict dest, const char * __restrict src, size_t n); // TODO


#ifdef __cplusplus
}
#endif

#endif
