#include"holberton.h"
/**
* _stract - attach two strings together overwriting the null
* @src : parameter character
* @dest : parameter character
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0 ; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
return (dest);
}
