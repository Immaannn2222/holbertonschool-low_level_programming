#include "holberton.h"
#include <stdlib.h>
/**
*alloc_grid - returns a pointer t
*@width: int
*@height: int
*
*Return: null
*/
int **alloc_grid(int width, int height)
{
int **s = NULL;
int i, j;
if (width < 1 || height < 1)
return (NULL);
else
{
s = malloc(height * sizeof(int));
if (s == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
s[i] = malloc(sizeof(int) * width);
if (s[i] == NULL)
{
for (; i >= 0; i--)
free(s[i]);
free(s);
return (NULL);
}
for (j = 0; j < width; j++)
s[i][j] = 0;
}
return (s);
}
}
