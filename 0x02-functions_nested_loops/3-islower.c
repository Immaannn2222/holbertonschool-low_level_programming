#include "holberton.h"
/**
*_islower - looks for character type
*@c : parameter designing a character
*Return:1 if lowercase or 0 if uppercase
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
