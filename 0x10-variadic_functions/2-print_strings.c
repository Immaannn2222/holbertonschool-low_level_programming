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
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
arr = va_arg(args, char*);
if (arr == NULL)
printf("nil");
else
printf("%s", arr);
if (separator && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
