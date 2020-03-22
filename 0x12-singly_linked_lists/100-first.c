#include "lists.h"
#include <stdlib.h>
/**
 * callbefore - a function that prints before execuition
 *
 * Return: void
 */
void callbefore(void) __attribute__ ((constructor));
void callbefore(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
