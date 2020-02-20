#include"holberton.h"
/**
* _strcmp - attach two strings together overwriting the null
* @s1 : parameter character
* @s2 : parameter character
*Return:
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0;
while ( i != '\0' && j != '\0' && s1[i] != s2[j])
{
i++;
j++;
}
if (s1[i] != s2[j])
{
return (s1[i] - s2[j]);
}
if (s1[i] == s2[j])
{
return (0);
}
else
return (s2[i] - s1[j]);
}
