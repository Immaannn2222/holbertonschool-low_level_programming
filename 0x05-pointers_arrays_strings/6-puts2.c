#include"holberton.h"
/**
*puts2 - prints every other character in a string
*@str : parameter character
*Return:
*/
void puts2(char *str)
{
int i;
while (str[i] != '\0')
{
i++;
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
