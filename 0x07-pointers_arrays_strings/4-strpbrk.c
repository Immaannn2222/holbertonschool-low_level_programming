#include "holberton.h"
/**
* _strpbrk - that searches a string for any of a set of bytes
*@s : parameter designing a character
*@accept : a character
*Return:s
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
++s;
return (s);
}
if (accept[j] == '\0')
break;
}
return (0);
}

