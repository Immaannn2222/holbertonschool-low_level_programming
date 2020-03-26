#include "holberton.h"
/**
 * count - counts the sets
 * @x: its operator
 *
 * Return: x
 */

unsigned long int count(unsigned long int x)
{
unsigned long int c = 0;
while (x)
{
c += x & 1;
x >>= 1;
}
return (c);
}
/**
 * flip_bits - returns number of flips needed to transform n to m
 *@n: number1
 *@m: number2
 *
 * Return: result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (count(n ^ m));
}
