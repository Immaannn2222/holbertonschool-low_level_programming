#include "holberton.h"
/**
*print_line - prints line
*@n : an integer parameter
*
*Return: 0
*/
void print_line(int n)
{
int i;
for (i = 1; i <= n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
