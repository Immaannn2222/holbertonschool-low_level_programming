#include"holberton.h"
/**
* rot13 - encodes a string into rot13
* @m: parameter desigining a character
*
* Return: m
*/
char *rot13(char *m)
{
int i, j;
char alph[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
char rrot[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
for (i = 0; m[i] != '\0' ; i++)
{
j = 0;
while (m[j])
{
if (m[i] == alph[j])
{
m[i] = rrot[j];
break;
}
j++;
}
}
return (m);
}
