#include "holberton.h"
#include <stdio.h>
/**
*_strchr - Returns a pointer to the first occurrence of the character c in s
*@s : a pointer
*@c : a character
*Return:0
*/
char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0 ; s[i] != '\0'; i++)
{
if (s[i] == c)
{
s = &s[i];
return (s);
}
}
return (NULL);
}
