#include "holberton.h"
#include <math.h>
/**
 * binary_to_uint - converts from binary to decimal
 * @b: a pointer pointing to 0 and 1
 *
 * Return: decim or 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0, y = 1;
int i;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
i--;
while (i >= 0)
{
if (b[i] == '1')
x = x + y;
y = y * 2;
i--;
}
return (x);
}
