#include"holberton.h"
/**
* _strcmp - attach two strings together overwriting the null
* @s1 : parameter character
* @s2 : parameter character
*Return: f
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, cre = 0;
while (s1[i] != '\0' || s2[i] != '\0')
{
if (s1[i] != s2[i])
{
cre = s1[i] - s2[i];
break;
}
else
cre = 0;
i++;
}
return (cre);
}
