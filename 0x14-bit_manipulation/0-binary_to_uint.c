#include "holberton.h"
/**
 * 
 * 
 * 
 * 
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0, dec = 0;
int  rem, binary = 1;
if (!b)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
num = ((*b) - '0') + num * 10;
b++;
}
while (num != 0)
{
rem = num % 10;
num /= 10;
dec += rem *binary;
binary *= 2;
}
return (dec);
}