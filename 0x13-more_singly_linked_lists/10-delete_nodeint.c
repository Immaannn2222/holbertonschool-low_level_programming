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
listint_t *tmp = *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = tmp->next;
free(tmp);
return (1);
}
while (tmp != NULL && i < index - 1)
{
i++;
}
tmp = tmp->next;
if (tmp == NULL || tmp->next == NULL)
return (-1);
further = tmp->next->next;
{
free(tmp->next);
tmp->next = further;
}
return (1);
}
