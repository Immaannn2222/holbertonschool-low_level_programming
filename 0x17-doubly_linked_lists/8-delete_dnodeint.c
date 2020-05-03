#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: the head pointer
 * @index: the position
 *
 * Return: 1 on success -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *erase = *head;
unsigned int n = 0;
if (*head == NULL)
return (-1);
for (n = 0; n != index ; n++)
{
if (erase == NULL)
return (-1);
erase = erase->next;
}
if (n == 0)
{
*head = erase->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
erase->prev->next = erase->next;
if (erase->next != NULL)
erase->next->prev = erase->prev;
}
free(erase);
return (1);
}
