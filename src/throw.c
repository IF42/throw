#include "throw.h"


#include <signal.h>
#include <stdarg.h>
#include <stdio.h>


void __debug(const char * file, const char * func, int line, const char * format, ...) {
    va_list args;
    va_start(args, format);

    fprintf(stderr, "%s:%s:%d: ", file, func, line);
    vfprintf(stderr, format, args); 

    va_end(args);
}


void __throw(const char * file, const char * func, int line, const char * format, ...) {
    va_list args;
    va_start(args, format);

    fprintf(stderr, "%s:%s:%d: ", file, func, line);
    vfprintf(stderr, format, args); 

    va_end(args);

    raise(SIGABRT);                                                         
}

