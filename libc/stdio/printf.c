#include <stdio.h>
#include <stdarg.h>

char* convert(unsigned int num, int base);
int putchars(const char* s);

int printf(const char* __restrict format, ...) {
    va_list args;
    va_start(args, format);
    char *s;
    unsigned int i;
    int err = 0;
    
    for(; *format; format++) {
        if(*format != '%') {
            putchar(*format);
            continue;
        }
        if(!*(++format)) {
            err = -1;
            goto end;
        }

        switch (*format)
        {
        case 'd':
            i = va_arg(args, int);
            if (i < 0) {
                putchar('-');
                i = -i;
            }
            putchars(convert(i, 10));
            break;
        case 'x':
            i = va_arg(args, int);
            putchars(convert(i, 16));
            break;
        case 'c': i = va_arg(args, int);
            putchar(i);
            break;
        case 's':
            s = va_arg(args, const char *);
            putchars(s);
            break;
        case '%':
            putchar('%');
            break;
        default:
            err = -1;
            goto end;
        }
    }

end:
    va_end(args); 
    return err;
}

char* convert(unsigned int num, int base) {
    static char digit[]= "0123456789ABCDEF";
    static char buffer[50]; 
    char *ptr;

    ptr = &buffer[49]; 
    *ptr = '\0';

    do 
    { 
        *--ptr = digit[num % base]; 
        num /= base; 
    }while(num != 0); 

    return ptr; 
}

int putchars(const char* s) {
    while(*s) {
        putchar(*s++);
    }
    return 0;
}