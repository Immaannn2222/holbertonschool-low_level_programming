#include "holberton.h"
/**
*_memcpy - 
*@dest : parameter designing a character
*@src : parametre designing a character
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while ( i <= n)
{
dest [i] = src[i];
i++;
}
return (dest);
} 
