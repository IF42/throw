#ifndef _THROW_H_
#define _THROW_H_


#include <signal.h>
#include <stdarg.h>
#include <stdio.h>


void 
__throw(
    const char * file
    , int line
    , const char * format, ...);


#define throw(...) \
    __throw(__FILE__, __LINE__, __VA_ARGS__)

#endif
