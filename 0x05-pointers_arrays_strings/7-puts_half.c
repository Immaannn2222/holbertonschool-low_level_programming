#include"holberton.h"
/**
*puts_half - prints a half of a string 
*@str : parameter character
*Return:
*/
void puts_half(char *str)
{
int i, j;
i = 0;
j = i / 2;
while (str[i] != '\0')
{
i++;
} 
for (j  = i/2 ; j <= i  ; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
