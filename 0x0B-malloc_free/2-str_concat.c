#include "holberton.h"
#include <stdlib.h>
/**
*str_concat - concatenates 2 strings
*@s1: string 1
*@s2: string 2
*
*Return: null
*/
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, p = 0;
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
s = malloc(sizeof(char) * (i + j) +1);
if (s == NULL)
return (NULL);
for (p = 0; p < i; p++)
s[p] = s1[p];
for (p = 0; p < j; p++)
s[p + i] = s2[p];
s[i + j] = '\0';
return (s);
}
