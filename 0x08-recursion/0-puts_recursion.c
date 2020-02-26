#include "holberton.h"
/**
*_puts_recursion - prints a string
*@s : parameter designing a character
*Return: s
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar (*s),
++s;
_puts_recursion(s);
}
else
_putchar('\n');
}
