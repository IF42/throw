#include "throw.h"


void 
__throw(
    const char * file
    , int line
    , const char * format, ...)
{
    va_list args;
    va_start(args, format);

    fprintf(stderr, "%s:%d: ", file, line);
    vfprintf(stderr, format, args); 

    va_end(args);

    raise(SIGABRT);                                                         
}

