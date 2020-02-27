#include "holberton.h"
/**
 * _strlen_recursion- returns the length of a string
 * @s: parameter
 *
 * Return: len
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
return (1 + _strlen_recursion(++s));
else
return (0);
}

/**
 * pal - checks if its a palindrome
 * @s: char
 * @l: integer
 *
 * Return: pal
 */
int pal(char *s, int l)
{
if (l <= 1)
return (1);
else if (*s == s[l - 1])
return (pal(s + 1, l - 2));
else
return (0);
}

/**
 * is_palindrome - checks if palindrome
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
int l;
l = _strlen_recursion(s);
if (l <= 1)
return (1);
return (pal(s, l));
}
