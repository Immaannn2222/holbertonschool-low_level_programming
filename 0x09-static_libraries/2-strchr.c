#include "holberton.h"
/**
*_strchr - Returns a pointer to the first occurrence of the character c in s
*@s : a pointer
*@c : a character
*Return:0
*/
char *_strchr(char *s, char c)
{
int i = 0, j = 0;
while (s[j] != '\0')
j++;
for (i = 0 ; i <= j; i++)
{
if (s[i] == c)
{
s = &s[i];
return (s);
}
}
return (0);
}
