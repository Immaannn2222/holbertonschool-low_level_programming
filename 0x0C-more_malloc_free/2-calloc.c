#include "holberton.h"
#include <stdlib.h>
/**
*_calloc - concatenates two strings
*@nmemb : unsigned int
*@size : size of each element
*
*Return: null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
if ((nmemb == 0) || (size == 0))
return (NULL);
s = malloc(size * nmemb);
if (s == NULL)
return (NULL);
return (s);
}
