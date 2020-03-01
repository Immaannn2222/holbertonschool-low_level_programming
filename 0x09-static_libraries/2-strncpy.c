#include"holberton.h"
/**
* _strncpy - copies two strings
* @src : parameter character
* @dest : parameter character
* @n : integer
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0')
{
i++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
