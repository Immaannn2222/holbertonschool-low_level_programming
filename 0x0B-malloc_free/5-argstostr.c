#include "holberton.h"
#include <stdlib.h>
/**
*alloc_grid - returns a pointer t
*@width: int
*@height: int
*
*Return: null
*/
char *argstostr(int ac, char **av)
{
char *s;
int i;
if ((av == NULL) || (ac == 0))
return (NULL);
s = malloc (sizeof(char) * ac);
if (s == NULL)
return (NULL);
else 
for (i = 0; i < ac; i++)
return (av);
}
