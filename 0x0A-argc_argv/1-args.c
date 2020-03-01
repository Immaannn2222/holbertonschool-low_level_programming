#include "holberton.h"
#include <stdio.h>
/**
*main - prints the number of arguments passed into a program
*@argc : The number of command line arguments
*@argv : An array containing the program command line arguments
*
*Return: 0
*/
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
