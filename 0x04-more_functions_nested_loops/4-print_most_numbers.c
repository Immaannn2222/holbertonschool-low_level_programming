#include "holberton.h"
/**
*print_most_numbers - prints almost all numbers
*@void: empty
*
*Return: 0
*/
void print_most_numbers(void)
{
char ch;
for (ch = 48; ch <= 57; ch++)
{
if (ch != 50 && ch != 52)
{
_putchar(ch);
}
}
_putchar('\n');
}
