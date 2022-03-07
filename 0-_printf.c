#include "main.h"
int _printf(const char *format, ...)
{
	const char *p;
	
	
	
	va_list ap;
	

	if (!format)
	{
		return (-1);
	}
	va_start(ap, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		p++;
		switch (*p)
		{
		case 'c': _char(ap);
			break;
		case 's': _string(ap);
			break;
		case '%':_putchar('%');
			break;
		case 'd': _numbers(ap);
			 break;
		case 'i':_numbers(ap);
		    break;
		
		default:
			_putchar('%');
			_putchar(*p);
		}
	}
	va_end(ap);
	return (*p);
}