#include "holberton.h"

/**
*rev_string - prints a string in reverse
*@s : parameter character
*Return:
*/

void rev_string(char *s)
{
int i = 0, j = 0;
char c;
while (s[i] != '\0')
i++;
for (j = 0; j <= i / 2; j++)
{
c = s[j];
s[j] = s[i - 1 - j];
s[i - 1 - j] = c;
}
}
