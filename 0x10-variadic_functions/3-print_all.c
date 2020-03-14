#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - a variadic function that prints any given input
 * @format: a list of eligible types
 * Return:
 */
void print_all(const char * const format, ...)
{
va_list p;
int x = 0, y = 0;
char *str;

va_start(p, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(p, int));
				y = 1;
				break;
			case 'i':
				printf("%i", va_arg(p, int));
				y = 1;
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				y = 1;
				break;
			case 's':
				str = va_arg(p, char *);
				if (str == NULL)
				{
					printf("%p", str);
					break;
				}
				printf("%s", str);
				y = 1;
				break;
			default:
				y = 0;
		}
		if ((y) && (format[x + 1] != '\0'))
			printf(", ");
	x++;
	}
printf("\n");
va_end(p);
}
