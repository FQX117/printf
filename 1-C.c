 #include "main.h"
/*
*/int _char(va_list p, int *k)
{
	int x = (char)va_arg(p, int);

	_putchar((x), k);

	return (1);
}

