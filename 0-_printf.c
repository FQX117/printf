#include "main.h"
/*
*/int _printf(const char *format, ...)
{
const char *p;
int k = 0;
va_list ap;
		if (!format)
{

		return (-1); }
	va_start(ap, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p, &k);
			continue; }
		p++;
		switch (*p)
		{
		case 'c'
			: _char(ap, &k);
			break;
		case 's'
			: _string(ap, &k);
			break;
		case '%'
			:_putchar('%', &k);
			break;
		case 'd'
			: _numbers(ap, &k);
			break;
		case 'i'
			:_numbers(ap, &k);
			break;
		default:
			_putchar('%', &k);
			_putchar(*p, &k); } }
	va_end(ap);
	return (k); }
