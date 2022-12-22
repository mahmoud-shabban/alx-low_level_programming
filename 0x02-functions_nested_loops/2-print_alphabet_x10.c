#include "main.h"


/**
 * print_alphabet_x10 - tes docs
 */

/* more headers goes there */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		print_alphabet();
	}
}

/**
 * print_alphabet - tess docs
 *
 * Description: this si sma je
 */
void print_alphabet(void)
{
	char c, n;

	n = '\n';
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar(n);
}

