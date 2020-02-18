#include"holberton.h"
/**
*puts_half - prints a half of a string
*@str : parameter character
*Return:
*/
void puts_half(char *str)
{
int i, j, x;
i = 0;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
{
x = (i + 1) / 2;
}
else
x = i / 2;
for (j  = x; j < i  ; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
