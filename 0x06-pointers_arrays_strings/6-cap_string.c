#include"holberton.h"
/**
* cap_string - a function that capitalizes all words
* @capi: parameter desigining a character
*
* Return: capi
*/
char *cap_string(char *capi)
{
int i = 0, j = 0;
char s[] = {9, 10, 11, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;
for (i = 0; capi[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (capi[i - 1] == s[j])
{
if (capi[i] >= 97 && capi[i] <= 122)
capi[i] = capi[i] - 32;
}
}
}
return (capi);
}
