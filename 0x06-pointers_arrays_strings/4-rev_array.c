#include"holberton.h"
/**
* reverse_array - a function that reverses an array of strings
* @a: parameter desigining an array
* @n: an integer
* Return:
*/
void reverse_array(int *a, int n)
{
int i, x;
n = n - 1;
for (i = 0; i < n / 2 ; i++)
{
x = a[i];
a[i] = a[n - i];
a[n - i] = x;
}
}
