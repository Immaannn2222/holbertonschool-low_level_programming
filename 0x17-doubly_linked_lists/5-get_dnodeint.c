#include "lists.h"
/**
 * get_dnodeint_at_index - seraches for a node
 * @head: the main list
 * @index: element searched
 *
 * Return: null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int n = 0;
while (head != NULL)
{
if (n == index)
return (head);
head = head->next;
n++;
}
return (NULL);
}
