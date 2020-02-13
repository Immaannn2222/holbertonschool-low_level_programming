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
int n = 97;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n < 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
