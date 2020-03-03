#include "holberton.h"
#include <stdlib.h>
/**
*create_array - creates an array of char with specific char at start
*@size : teh size of an array
*@c : specific start
*
*Return: null
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;
ar =  malloc(size * sizeof(char));
if (size <= 0 || ar == NULL)
{
return (NULL);
}
for (i = 0 ; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
