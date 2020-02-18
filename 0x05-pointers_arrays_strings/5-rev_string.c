#include"holberton.h"
/**
*rev_string - prints a string in reverse
*@s : parameter character
*Return:
*/
void rev_string(char *s)
{
int i, j;
i = 0;
j = 0;
while (s[i] != '\0')
{
i++;
_putchar(s[i]);
}
_putchar('\n');
for (j = i - 1 ; j >= 0  ; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
