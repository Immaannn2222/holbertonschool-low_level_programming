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
i++;
if (capi[i] <= 32 && capi[i] >= 47)
capi[i + 10] = capi[i + 10] - 32;
return (capi);
}
