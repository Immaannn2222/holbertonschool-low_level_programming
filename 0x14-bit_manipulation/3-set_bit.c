#include "holberton.h"
/**
 *set_bit - sets a bit to 1
 * @n: a pointer to the number
 * @index: the position
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int b;
if (index > 63)
return (-1);
b = 1 << index;
*n |= b;
return (1);
}
