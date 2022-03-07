#include "main.h"
int _char(va_list p)
{
	int x = (char)va_arg(p, int);

	_putchar(x);

	return (1);
}

