#include"holberton.h"
/**
*rev_string - prints a string in reverse
*@s : parameter character
*Return:
*/
void rev_string(char *s)
{
int i, j, x;
while (s[i] != '\0')
{
i++;
x = i - 1;
for (j = 0; j <= i / 2; j++)
{
x = s[i - j];
s[i - j] = s[j];
s[j] = x;
}
}
}
