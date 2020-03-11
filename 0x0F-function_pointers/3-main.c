#include"3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - the main function that will operate
*@argc : number of arguments
*@argv: pointer to the arguments passed to the program
*Return: a result
*/
int main(int argc, char *argv[])
{
int x, y, result = 0;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1])
{
printf("Error\n");
exit(99);
}
x = atoi(argv[1]);
y = atoi(argv[3]);
result = (*get_op_func(argv[2])) (x, y);
printf("%d\n", result);
return (0);
}
