#include "main.h"

/**
 * main - tes docs
 * Return: inte
 */
/* more headers goes there */

int main(void)
{
	int i, arr_len;
	char list[] = "_putchar";
	/* the arrary length in c */
	arr_len = sizeof(list) / sizeof(list[0]);
	for (i = 0; i < arr_len - 1; i++)
	{
		_putchar(list[i]);
	}
	_putchar('\n');
	return (0);
}
