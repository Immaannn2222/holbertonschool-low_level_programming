#include "holberton.h"
/**
*print_diagonal - prints a diagonal line
*@n : an integer parameter
*
*Return: 0
*/
void print_diagonal(int n)
{
{
int m, t;
m = 0;
while (m < n)
{
for (t = m; t > 0; t--)
_putchar(32);
_putchar(92);
_putchar(10);
m++;
}
if (n <= 0)
_putchar(10);
}
}
