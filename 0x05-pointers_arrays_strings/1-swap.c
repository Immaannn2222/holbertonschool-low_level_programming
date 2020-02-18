#include"holberton.h"
/**
*swap_int - swaps 2 integers
*@a : parameter integer
*@b : parameter  integer
*Return:
*/
void swap_int(int *a, int *b)
{
int c;
c = *a; 
*a = *b;
*b = c;
}
