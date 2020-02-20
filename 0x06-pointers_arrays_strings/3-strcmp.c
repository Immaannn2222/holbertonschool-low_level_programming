#include"holberton.h"
/**
* _strcmp - attach two strings together overwriting the null
* @s1 : parameter character
* @s2 : parameter character
*Return:
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while ( i != '\0' && i != '\0' && s1[i] == s2[i])
i++;
return (s1[i] - s2[i]);
}
