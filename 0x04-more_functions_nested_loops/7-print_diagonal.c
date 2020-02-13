#include "holberton.h"
/**
*print_diagonal - prints a diagonal line
*@n : an integer parameter
*
*Return: 0
*/
void print_diagonal(int n)
{
int i;
for (i = 1; i <= n ; i++)
{
_putchar('/');
for (i = 1; i <= n ; i++)
{  
_putchar('\n');
}
}
}
