#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    printf("for H: %d\n", r);
    
    r = _islower('o');
    _putchar(r + '0');
    printf("for o:  %d\n", r);
    
    
    r = _islower(108);
    _putchar(r + '0');
    printf("for 108:  %d\n", r);
    
    _putchar('\n');
    return (0);
}
