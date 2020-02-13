#include "holberton.h"
/**
 * more_numbers - prints alphabet 10 times
 * @void : parameter
 * Return: 0
 *
 */
void more_numbers(void)
{
int i, x, m, r;
for (i = 0 ; i <= 9 ; i++)
{
for (x = 0; x <= 14; x++)
{
m = x / 10;
r = x % 10;
if (m > 0)
_putchar(m + '0');
_putchar(r + '0');
}
_putchar('\n');
}
}
