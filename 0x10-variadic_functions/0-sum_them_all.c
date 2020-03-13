#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - a variadic function that sumsm all its arguments
 * @n : number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int sum = 0;
unsigned int i;
va_start(valist, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(valist, int);
va_end(valist);
return (sum);
}
