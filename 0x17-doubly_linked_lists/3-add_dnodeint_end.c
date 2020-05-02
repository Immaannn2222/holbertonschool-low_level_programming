#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: a pointer to the list
 * @n: content of the node added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_end;
dlistint_t *final;
new_end = malloc(sizeof(dlistint_t));
final = *head;
if (new_end == NULL)
return (NULL);
new_end->n = n;
new_end->next = NULL;
if (*head == NULL)
{
*head = new_end;
return (new_end);
}
else
while (final->next != NULL)
final = final->next;
final->next = new_end;
return (new_end);
}
