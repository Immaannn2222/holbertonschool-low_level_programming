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
