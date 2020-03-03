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
int i, j, m = 0;
char *s;
if (s1 == NULL && s2 == NULL)
return ("");
while (s1[i] != '\0')
i++;
for (j = 0; s2[j] < '\0' ; j++)
{
}
s = malloc ((i + j + 1) * sizeof(char));
while (s1[m] != '\0' && s2[m] <= '\0')
{
s[m] = s1[m] + s2[m];
m++;
}
return (s);
}

 
