#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  coins
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0;
int x = 0;
int m = 0;
char coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
m = atoi(argv[1]);
if (m < 0)
{
printf("0\n");
return (0);
}
for (i = 0; coins[i] != '\0'; i++)
{
if (m % coins[i] == 0)
{
x = x + (m / coins[i]);
printf("%d\n", x);
return (0);
}
else
{
if (m >= coins[i])
x = x + (m / coins[i]);
m = m % coins[i];
}
}
return (0);
}
