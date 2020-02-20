#include"holberton.h"
/**
* _strcmp - attach two strings together overwriting the null
* @s1 : parameter character
* @s2 : parameter character
*Return:
*/
int _strcmp(char *s1, char *s2)
{
if (s1[0] != s2[0])
{  
return (s1[0] - s2[0]);
}
if (s1[0] == s2[0])
{
return (0);
}
else
return (s2[0] - s1[0]);
}
