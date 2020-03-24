#include "lists.h"
/**
 * listint_len - function that returns number of elements in a linked list
 * @h: pointer to the elements
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t m = 0;
while (h != NULL)
{
h = h->next;
m++;
}
return (m);
}
