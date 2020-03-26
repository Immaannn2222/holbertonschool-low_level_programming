#include "holberton.h"
/**
 * clear_bit - if a bit is 1 convert it to 0 otherwise leave it
 * @n: pointer to the number
 * @index: offset for the change
 *
 * Return:n
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n &= ~(1 << index);
return (1);
}
