#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: the list
 * @idx: the index
 * @n: the filling
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *tmp;
unsigned int i = 0;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
tmp = *head;
while (i != idx - 1 && tmp != NULL)
{
tmp = tmp->next;
i++;
if (tmp == NULL)
return (NULL);
}
new->next = (tmp)->next;
(tmp)->next = new;

return (new);
}
