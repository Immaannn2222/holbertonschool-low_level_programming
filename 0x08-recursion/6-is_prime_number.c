#include "holberton.h"
/**
*check - checks if an integer is the square root of a number
*@n : parameter designing an integer
*@i : integer
*
*Return: i
*/
int check(int n, int i)
{
if (n == i)
{
return (1);
}
else if (!(n % i))
{
return (0);
}
else
return (check(n, i + 1));
}
/**
*is_prime_number -  check if a given number is a prime or no
*@n : an integer
*Return: 1 if prime 0 otherwise
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (check(n, 2));
}
