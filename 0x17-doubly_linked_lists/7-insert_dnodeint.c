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
dlistint_t *new = NULL;
dlistint_t *tmp = *h;
unsigned int i = 0;
new = malloc(sizeof(dlistint_t));
if (new == NULL || (*h == NULL && idx != 0))
{
return (NULL);
}
new->n = n;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
if (i == idx)
{
return (add_dnodeint_end(h, n));
}
while (tmp)
{
if (i == idx)
{
new->next = tmp;
new->prev = tmp->prev;
tmp->prev->next = new;
tmp->prev = new;
return (new);
}
i++;
tmp = tmp->next;
}
return (NULL);
}
