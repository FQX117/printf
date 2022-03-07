#ifndef MAIN_H
#define MAIN_H
/* Headers*/
#include <stdio.h>
#include <stdarg.h>


/*Prototypes*/
int _putchar (char c);
int _printf(const char *format, ...);
int op_numbers(va_list arg);
int op_string(va_list p);
int op_char(va_list p);

#endif
