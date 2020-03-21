#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * print_list - a program to print list using lists
 * @h: a struct type pointer
 *
 * Return: number of the nodes
 */

size_t print_list(const list_t *h)
{
size_t n = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil) \n");
else
printf("[%u] %s \n", h->len, h->str);
h = h->next;
n++;
}
return (n);
}
