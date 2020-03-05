#include "holberton.h"
#include <stdlib.h>
/**
*array_range - displays an array of integers
*@min : unsigned int
*@max : size of each element
*
*Return: null
*/
int *array_range(int min, int max)
{
int *s;
int i, j = 0;
if (min > max)
return (NULL);
s = malloc(sizeof(int) * ((max - min) + 1));
if (s == NULL)
return (NULL);
for (i = min; i <= max ; i++)
{
s[j] = i;
j++;
}
return (s);
}
