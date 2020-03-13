#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - a variadic function that prints strings
 * @n: number of arguments
 * @separator : a pointer to the commas
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *arr;
unsigned int i = 0;
va_list args;
va_start(args, n);
if (separator == NULL)
return;
while (i < n)
{
arr = va_arg(args, char*);
if (arr == NULL)
{
printf("nil");
}
printf("%s", arr);
if (i != n - 1)
printf("%s", separator);
i++;
}
printf("\n");
va_end(args);
}
