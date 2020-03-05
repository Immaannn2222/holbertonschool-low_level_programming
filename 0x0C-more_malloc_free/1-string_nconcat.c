#include "holberton.h"
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings
*@n : unsigned int
*@s1 : string number 1
*@s2 : string number 2
*Return: null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, p = 0, j = 0;
char *s;
if (s1 != NULL)
{
while (s1[i] != '\0')
i++;
}
if (s2 != NULL)
{
while (s2[j] != '\0')
j++;
}
s = malloc(sizeof(char) * (i + n) + 1);
if (s == NULL)
return ("");
for (p = 0; p < i; p++)
s[p] = s1[p];
for (p = 0; p < n; p++)
s[p + i] = s2[p];
s[i + n] = '\0';
return (s);
}
