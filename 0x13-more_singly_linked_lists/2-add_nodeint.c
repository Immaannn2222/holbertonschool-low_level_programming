#include "lists.h"
/**
 * add_nodeint - used to add a node at the start of the list
 * @head: a double pointer to the list
 * @n: filling
 *
 * Return: address of the element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = (*head);
(*head) = new;
return (new);
}
