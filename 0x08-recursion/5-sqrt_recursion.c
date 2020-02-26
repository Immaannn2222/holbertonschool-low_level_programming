#include "holberton.h"
/**
*power - checks if an integer is the square root of a number
*@n : parameter designing an integer
*@i : integer
*
*Return: i
*/
int power(int n, int i)
{
if (n == i * i)
{
return (i);
}
else if (i * i > n)
return (-1);
else
return (power(n, i + 1));
}
/**
*_sqrt_recursion -  returns the natural square root of a number
*@n : an integer
*Return: m
*/
int _sqrt_recursion(int n)
{
int m;
m = power(n, 1);
return (m);
}
