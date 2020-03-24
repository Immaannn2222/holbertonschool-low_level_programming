#include "lists.h"
/**
 * add_nodeint_end - adds node at the end
 * @head: a double pointer to the head of the list
 * @n: the filling
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_end;
listint_t *final;
new_end = malloc(sizeof(listint_t));
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
