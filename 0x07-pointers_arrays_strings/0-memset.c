#include "holberton.h"
/**
*_memset - fill n bytes with constant b
*@b : parameter designing a character
*Return:s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
