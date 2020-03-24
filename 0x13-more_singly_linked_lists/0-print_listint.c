#include "lists.h"
/**
* print_listint - prints a list using a pre-defined structure
* @h: parameter pointing to the nodes of list
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t n = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
n++;
}
return (n);
}
