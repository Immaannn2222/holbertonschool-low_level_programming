#include "holberton.h"
/**
*_pow_recursion - returns x*y
*@x : parameter designing a integer
*@y : an integer that should be bigger than 0
*Return: x
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y--));
}
