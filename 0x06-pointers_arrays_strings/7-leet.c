#include"holberton.h"
/**
* leet - encodes a string into 1337
* @co: parameter desigining a character
*
* Return: co
*/
char *leet(char *co)
{
int i, j;
char x[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
char n[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
for (i = 0; co[i] != '\0'; i++)
{
for (j = 0; x[j] != '\0'; j++)
{
if (co[i] == x[j])
co[i] = n[j];
}
}
return (co);
}
