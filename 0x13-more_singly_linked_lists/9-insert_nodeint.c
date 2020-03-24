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
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
if (idx == 0)
new->n = n;
new->next = (*head);
(*head) = new;
return (new);
}