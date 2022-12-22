#include "main.h"
#include <ctype.h>

/**
 * print_sign - tes docs
 * @n: int
 * Return: inte
 */
/* more headers goes there */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
