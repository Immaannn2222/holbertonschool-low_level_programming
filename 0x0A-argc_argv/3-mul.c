#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - a function that mutiplies 2 integers
*@argc : The number of command line arguments
*@argv : An array containing the program command line arguments
*
*Return: 0 otherwise 1
*/
int main(int argc, char *argv[])
{
int mult = 0;
if (argc == 3)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
