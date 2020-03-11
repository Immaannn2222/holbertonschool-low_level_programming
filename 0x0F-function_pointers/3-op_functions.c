#include"3-calc.h"
#include <stdlib.h>
/**
*op_add - a fuction to sum up 2 integers
*@a : an integer
*@b : an integer
*Return: result
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
*op_sub - function for substitution
*@a : an integer
*@b : an intege
*Return: resu
*/
int op_sub(int a, int b)
{
if (a > b)
return (a - b);
else
(-(a - b));
}

/**
*op_mul - a function for multiplication
*@a : an integer
*@b : an intege
*Return: ress
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
*op_div - a function for division
*@a : an integer
*@b : an intege
*Return: res
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
*op_mod - a function to calculate the rest in a division
*@a : an integer
*@b : an intege
*Return: resd
*/
int op_mod(int a, int b);
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
