#include "holberton.h"
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory
*@str : a char
*
*Return: null
*/
char *_strdup(char *str)
{
char *new;
unsigned int i = 0, j = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
new = malloc((i + 1) * sizeof(char));
if (new == NULL)
return (NULL);
for (j = 0; j <= i; j++)
{
str[j] = new[j];
}
new[j] = '\0';
return (new);
}
