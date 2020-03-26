#include "holberton.h"
/**
 * print_binary - delivers the binary of a number
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int m = 4611686018427387904, i = 0;
while (m > 0)
{
if (((n & m) == 0) && ((i != 0) || (m >> 1 == 0)))
_putchar('0');
if ((n & m) != 0)
{
_putchar('1');
i++;
}
m = m >> 1;
}
}
