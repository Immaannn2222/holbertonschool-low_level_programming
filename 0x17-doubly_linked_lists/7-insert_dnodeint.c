#include"lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: a double pointer to the list
 * @idx: the index
 * @n: the contnet of the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *tmp;
unsigned int i = 0;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
new->prev = NULL;
if (idx == 0)
{
new->next = *h;
*h = new;
return (new);
}
tmp = *h;
while (tmp != NULL)
{
if (i == idx - 1)
{
new->next = tmp->next;
new->n = n;
new->prev = tmp;
tmp->next = new;
if (new->next != NULL)
new->next->prev = new;
return (new);
}
i++;
tmp = (tmp)->next;
}
return (NULL);
}

