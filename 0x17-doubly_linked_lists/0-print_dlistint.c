#include "lists.h"
/**
 * print_dlistint - prints all elements of a double linked list(DLL)
 * @h: a pointer to the nodes of the lsit
 *
 * Return: numbe of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t x = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
x++;
}
return (x);
}
