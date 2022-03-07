#ifndef MAIN_H
#define MAIN_H
/* Headers*/
#include <stdio.h>
#include <stdarg.h>



/*Prototypes*/
int _putchar (char c, int *k);
int _printf(const char *format, ...);
int _numbers(va_list arg, int *k);
int _string(va_list p, int *k);
int _char(va_list p, int *k);



#endif
