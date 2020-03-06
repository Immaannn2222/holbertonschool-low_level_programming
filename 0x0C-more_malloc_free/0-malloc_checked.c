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
int *s;
s = malloc(b);
if (s == NULL)
exit(98);
return (s);
}
