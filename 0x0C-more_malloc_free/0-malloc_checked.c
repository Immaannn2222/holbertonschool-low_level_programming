#include "holberton.h"
#include <stdlib.h>
/**
*malloc_checked - allocates memory
*@b : unsigned int
*
*Return: null
*/
void *malloc_checked(unsigned int b)
{
char *s;
s = malloc(sizeof(char) * b);
if (s == NULL)
return ("98");
else 
return (s);
}
