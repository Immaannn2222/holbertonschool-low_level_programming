#include"holberton.h"
/**
*print_rev - prints a string in reverse
*@s : parameter character
*Return:
*/
void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
i--; 
} 
_putchar('\n');
}
