#include "holberton.h"
/**
*_strlen_recursion - prints a string in reverse
*@s : parameter designing a character
*Return: n
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
return(1 + _strlen_recursion(++s));
else
return (0);
}

