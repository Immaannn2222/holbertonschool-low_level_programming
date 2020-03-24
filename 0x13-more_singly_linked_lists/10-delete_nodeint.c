#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: list
 * @index: the index
 *
 * Return:1 for SUCCESS or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *further;
listint_t *tmp;
unsigned int i = 0;
if (*head == NULL)
return (-1);
tmp = *head;
if (index == 0)
{
*head = tmp->next;
free(tmp);
return (1);
}
while (tmp->next != NULL && i < index)
{
further = tmp;
tmp = tmp->next;
i++;
}
if (i < index)
return (-1);
further->next = tmp->next;
free(tmp);
return (-1);
}
