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
n = 1 + _strlen_recursion(++s);
}
return (n);
}
