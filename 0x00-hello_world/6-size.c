#include <stdio.h>

int main(void)
{
	printf("Size of a char: %lx byte(s)\n", sizeof(char));
	printf("Size of an int: %lx byte(s)\n", sizeof(int));
 	printf("Size of a long int: %lx byte(s)\n", sizeof(long));
        printf("Size of a long long int: %lx byte(s)\n", sizeof(long long));
        printf("Size of a float: %lx byte(s)\n", sizeof(float));
	return 0;
}
