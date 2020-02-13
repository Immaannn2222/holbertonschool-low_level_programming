#include <stdio.h>
/**
*main- original
*@void : parameter
*Return: 0
*
*/
int main(void)
{
int i;
int s;
for (i = 0 ; i <= 1024 ; i++)
{
if (i % 3 == 0 || i % 5 == 0)
s += i;
}
printf("%d\n", s);
return (0);
}
