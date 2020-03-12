#include <stdlib.h>
#include <stdio.h>

/**
 * fun - checks a function
 * @s: the char to check
 * @x: the integer to check
 * Return: 0
 */
void fun(char *s, int x)
{
int i;
for (i = 0 ; i < x ; i++)
{
printf("%02x", s[i] & 0xff);
if (i != x - 1)
printf(" ");
}
printf("\n");
}

/**
 * main - prints the opcodes
 * @argc: number arguments
 * @argv: double pointer of arguments
 * Return: 1 or 0 or 2
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
fun((char *)&main, atoi(argv[1]));
return (0);
}
