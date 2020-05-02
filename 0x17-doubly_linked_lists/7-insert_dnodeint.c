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
if (idx == 0)
{
new->next = *h;
*h = new;
return (new);
}
tmp = *h;
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

