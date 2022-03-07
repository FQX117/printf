#include "main.h"
#include <unistd.h>

/*
*/int _putchar(char c, int *k)
{
*k += 1;
	return (write(1, &c, 1));
}
