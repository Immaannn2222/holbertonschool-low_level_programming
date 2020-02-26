#include "holberton.h"
/**
*_puts_recursion - prints a string in reverse
*@s : parameter designing a character
*Return: s
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s--);
_putchar(*s);
}
}
