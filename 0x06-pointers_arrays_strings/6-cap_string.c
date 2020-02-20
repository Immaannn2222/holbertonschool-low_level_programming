#include"holberton.h"
/**
* cap_string - a function that capitalizes all words
* @capi: parameter desigining a character
*
* Return: capi
*/
char *cap_string(char *capi)
{
int i;
for (i = 0; capi[i] != '\0'; i++)
{
if (capi[i - 1] == 32 || capi[i - 1 ] == 46 || capi[i - 1] == 10 || capi [i - 1] == 10)
{
if (capi[i] >= 97 && capi[i] <= 122) 
capi[i] = capi[i] - 32;
}
}
return (capi);
}
