#include "holberton.h"
/**
*_strspn - returns n bytes
*@s : parameter designing a character
*@accept : kfoj
*Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j = 0, x = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
x = x + 1;
break;
}
}
if (accept[j] == '\0')
break;
}
return (x);
}
