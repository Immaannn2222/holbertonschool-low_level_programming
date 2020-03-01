#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - a function that adds the name of a program
*@argc : The number of command line arguments
*@argv : An array containing the program command line arguments
*
*Return: 0
*/
int main(int argc, char *argv[])
{
int i, j;
int x = 0;
int y = 0;

for (i = 1; i < argc; i++)
{
y = atoi(argv[i]);
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < 48 || argv[i][j] > 57)
{
printf("Error\n");
return (1);
}
}
x = x + y;
}
printf("%d\n", x);
return (0);
}
