#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: parameter
 * Return: void
 *
 */
void print_triangle(int size)
{
int i;
int j;
int m;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = size - i ; j > 1 ; j--)
_putchar(' ');
for (m = 0; m <= i ; m++)
_putchar(35);
_putchar('\n');
}
}
else
_putchar('\n');
}
