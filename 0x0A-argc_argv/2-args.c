#include "holberton.h"
#include <stdio.h>
/**
*main - prints every argument passed into a program
*@argc : The number of command line arguments
*@argv : An array containing the program command line arguments
*
*Return: 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
