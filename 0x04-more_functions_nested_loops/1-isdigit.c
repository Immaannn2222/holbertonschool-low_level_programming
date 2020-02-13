#include "holberton.h"
/**
*_isdigit - looks for character type
*@c : parameter designing a character
*Return:1 if a digit or 0 if not
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

