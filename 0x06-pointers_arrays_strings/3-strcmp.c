#include"holberton.h"
/**
* _strcmp - attach two strings together overwriting the null
* @s1 : parameter character
* @s2 : parameter character
*Return: f
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, f = 0;
while (i != '\0' && i != '\0' && s1[i] == s2[i])
i++;
f = (s1[i] - s2[i]);
return (f);
}
