#ifndef _STDLIB_H
#define _STDLIB_H 1

#include <sys/cdefs.h>

#include <stdio.h> // For TODO

#ifdef __cplusplus
extern "C" {
#endif

#define TODO(message) {printf("[TODO] %s", message); abort();}

__attribute__((__noreturn__))
void abort(void);

#ifdef __cplusplus
}
#endif

#endif
