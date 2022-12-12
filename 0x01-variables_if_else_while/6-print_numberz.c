#include <stdio.h>

/**
 * main - tes docs
 * Return: inte
 */
/* more headers goes there */

int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch % 10 + '0');
	}
	putchar('\n');
	return (0);
}
