#include "holberton.h"
/**
*_strlen_recursion - prints a string in reverse
*@s : parameter designing a character
*Return: n
*/
int _strlen_recursion(char *s)
{
int n = 0;
if (*s != '\0')
{
s++;
_strlen_recursion(s++);
}
n += *s;
return (n);
}
