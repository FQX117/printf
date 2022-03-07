#include"main.h"

int op_numbers(va_list arg)
{
	unsigned int i, p, r;

	int n = va_arg(arg, int), num = 0;
    /**
     * if statment needed to make a negitive
     * sys will not put the "-" by itself and must be manual
     * */
	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}
/** end of if **/
	p = 1;
	r = i;

	while (r > 9)
	{
		p *= 10;
		r /= 10;
	}

	for (; p >= 1; p /= 10)
	{
		_putchar(((i / p) % 10) + '0');
		num++;
	}
	return (num);
}