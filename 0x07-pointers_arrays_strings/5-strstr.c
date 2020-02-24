#include "holberton.h"
/**
*_strstr - locates a substring
*@haystack : parameter designing a character
*@needle : parameter searching for
*Return: haystack
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
while (haystack[i] == needle[0])
{
i = i + 1;
}
haystack++;
}
return (haystack);
}
return (0);
}

