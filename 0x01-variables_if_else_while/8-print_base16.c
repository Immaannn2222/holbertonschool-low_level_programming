#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-outputs a message
*@void:nothing to say
*Return:0
*
*/
int main(void)
{
int n = 97;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (n = 97; n < 103; n++)
{
putchar(n);
}
putchar(10);
return (0);
}