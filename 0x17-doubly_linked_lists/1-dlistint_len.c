#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: a pointer to the nodes of the list
 * 
 * Return: length of tle DLL
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t x;
while (h != NULL)
{
h = h->next;
x++;
}
return (x);
}