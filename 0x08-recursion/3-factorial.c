#include "holberton.h"
/**
*factorial - prints the factorial of a number
*@n : parameter designing an integer
*Return: n
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n > 0)
{
return (n * factorial(n - 1));
}
return (1);
}
