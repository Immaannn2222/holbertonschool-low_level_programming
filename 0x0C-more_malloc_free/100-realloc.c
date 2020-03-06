#include "holberton.h"
#include <stdlib.h>
/**
*_realloc - reallocate a memory
*@new_size : unsigned int
*@old_size : string number 1
*@ptr : a pointer
*Return: null
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
