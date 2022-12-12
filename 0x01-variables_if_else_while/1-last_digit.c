#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - tes docs
 * Return: inte
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_d = n % 10;
	if (last_d > 5)
	{
		printf("%d is positive", last_d);
	}
	else if (last_d == 0)
	{
		printf("%d is zero", last_d);
	}
	else if (last_d < 0)
	{
		printf("%d is negative", last_d);
	}

	return (0);
}
