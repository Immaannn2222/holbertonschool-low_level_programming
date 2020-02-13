#include <stdio.h>
#include <stdlib.h>
/**
 * main - first 50 items of fibonacci
 * @void : argument for isalpha function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n[50];
int m;
n[0] = 0;
n[1] = 1;
n[2] = 2;
for (m = 2; m < 52; m++)
{
n[m] = n[m - 2] + n[m - 1];
if (m != 52)
printf("%ld, ", n[m]);
else
printf("%ld\n", n[m]);
}
return (0);
}
