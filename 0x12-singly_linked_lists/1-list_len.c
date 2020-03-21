#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - a program that lists number of elments
 * @h: a struct type pointer
 *
 * Return: number of the nodes
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h != NULL && h->str != NULL)
{
h = h->next;
n++;
}
return (n);
}





