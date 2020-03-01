#include "holberton.h"
/**
*_print_rev_recursion - prints a string in reverse
*@s : parameter designing a character
*Return: s
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s--);
result = _putchar(*s);
}
if (*result == *s)
return (1);
else
return (0);
}
