#include "holberton.h"
/**
*is_palindrome - looks for palindrome
*@s : parameter designing a character
*Return: 1 if true 0 otherwise
*/
int is_palindrome(char *s)
{
char *result = 0;
if (*s != '\0')
{
s++;
is_palindrome(s--);
*result = *s;
}
if (*result == *s)
return (1);
else
return (0);
}
