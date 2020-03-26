#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n:the number
 * @index: the position
 *
 * Return: b
 */
int get_bit(unsigned long int n, unsigned int index)
{
int b;
b = (n >> index) & 1;
return (b);
}
