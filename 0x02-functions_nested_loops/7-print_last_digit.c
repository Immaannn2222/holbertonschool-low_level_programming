#include "holberton.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @n: parameter designing a number
 * Return: m or -m depending on nature of ineteger
 */
int print_last_digit(int n)
{
int m;
m = n % 10;
if (n >= 0)
{
_putchar(m + '0');
return (m);
}
else
{
_putchar(-m + '0');
return (-m);
}
}
