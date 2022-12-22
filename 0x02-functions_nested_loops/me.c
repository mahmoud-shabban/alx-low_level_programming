#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;
	int r;
	c = 'A';
	r = islower(c);
	printf("%d", r);
	return(0);
}
