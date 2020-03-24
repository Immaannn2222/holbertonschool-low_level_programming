#include "lists.h"
/**
 * get_nodeint_at_index - seraches for a node
 * @head: the main list
 * @index: element searched
 *
 * Return: null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *trav = head;
while (trav != NULL)
{
if (trav->n == index)
return (trav);
trav = trav->next;
}
return (NULL);
}
