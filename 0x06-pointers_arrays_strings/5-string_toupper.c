#include"holberton.h"
/**
* string_toupper - a function that appends two strings
* @charr: parameter desigining a character
*
* Return: charr
*/
char *string_toupper(char *charr)
{
int i;
for (i = 0; charr[i] != 0; i++)
if (charr[i] >= 97 &&  charr[i] <= 122)
{
charr[i] = charr [i] - 32;
}
return (charr);
}
