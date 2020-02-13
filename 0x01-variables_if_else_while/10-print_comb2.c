#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - all the main code goes here
 * @void : parameter
 * Return: 0
 *
 */
int main(void)
{
	int n;
	int t;

	t = 0;

	for (t = 0 ; t <=  9 ; t++)
	{
	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(t + 48);
		putchar(n + 48);
		if (n * 10 + t < 99)
		{
		putchar(054);
		putchar(040);
		}
	}
	}
	putchar(012);
	return (0);
}
