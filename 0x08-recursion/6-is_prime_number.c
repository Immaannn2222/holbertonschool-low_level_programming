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
if (n == 1)
{
return (0);
}
if (n % i == 0)
return (0);
else
return (check(n, i + 1));
}
/**
*is_prime_number -  check if a given number is a prime or no
*@n : an integer
*Return: m
*/
int is_prime_number(int n)
{
int m;
m = check(n, 1);
return (m);
}
