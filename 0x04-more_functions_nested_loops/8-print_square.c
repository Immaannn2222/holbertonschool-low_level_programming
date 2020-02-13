#include "holberton.h"
/**
*print_square - prints a square
*@size : the size of the square
*
*Return: 0
*/
void print_square(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar(10);
}
if (size <= 0)
_putchar(10);
}
