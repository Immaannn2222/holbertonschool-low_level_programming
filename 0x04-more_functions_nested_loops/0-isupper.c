#include "holberton.h"
/**
*_isupper - looks for character type
*@c : parameter designing a character
*Return:1 if lowercase or 0 if uppercase
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
