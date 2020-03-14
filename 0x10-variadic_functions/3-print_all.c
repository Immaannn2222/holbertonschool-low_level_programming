#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - a variadic function that prints 4 types
 * @format : number of arguments
 * Return:
 */
void print_all(const char * const format, ...)
{
va_list arr;
char *p, *s;
int i;
double f;
va_start(arr, format);
while (*p != '\0' && *p != '%')
{
p++;
{
        putchar(*p);
        continue;
}
{
if (*p == i)
{
i = va_arg(arr, int);
printf("%d", i);
break;
}
else
f = va_arg(arr, double);
printf("%f",f);
break;
while (*s != '\0')
s = va_arg(arr, char*);
s++;
break;
}
putchar (*p);
break;
}
printf("\n");
va_end(arr);
}
