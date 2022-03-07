#include "main.h"
int op_char(va_list p)
{
	int x = (char)va_arg(p, int);

	_putchar(x);

	return (1);
}

