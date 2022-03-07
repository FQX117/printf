#include"main.h"

int _numbers(va_list arg, int *k)
{
	unsigned int i, p, r;
/*
*/int n = va_arg(arg, int), num = 0;
  if (n < 0)
	{
		_putchar(('-'), k);
		i = n * -1;
	}
	else
	{
		i = n;
	}
	p = 1;
	r = i;

	while (r > 9)
	{
		p *= 10;
		r /= 10;
	}

	for (; p >= 1; p /= 10)
	{
		_putchar((((i / p) % 10) + '0'), k);
		num++;
	}
	return (num);
}
