#ifndef _THROW_H_
#define _THROW_H_


void __debug(const char * file, const char * func, int line, const char * format, ...);


#define debug(...)  __debug(__FILE__, __func__, __LINE__, __VA_ARGS__)



void __throw(const char * file, const char * func, int line, const char * format, ...);


#define throw(...)  __throw(__FILE__, __func__, __LINE__, __VA_ARGS__)


#endif
