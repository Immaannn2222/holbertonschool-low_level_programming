#include "lists.h"
/**
 * print_listint - prints a list
 * @h: parameter
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int n;
while (h != NULL)
{
if (n == '0')
printf("(nil)\n");
else
printf("%d\n", h->n);
h = h->next;
n++;
}
return (n);
}
