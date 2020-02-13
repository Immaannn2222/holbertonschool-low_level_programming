#include "holberton.h"
/**
*print_numbers - looks for character type
*@void : parameter
*Return:void
*/
void print_numbers(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
_putchar(x);
}
_putchar('\n');
}
