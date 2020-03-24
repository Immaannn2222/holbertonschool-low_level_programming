#include "lists.h"
/**
 * reverse_listint - revese the order of a list
 * @head: the list
 *
 *
 *Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *before;
listint_t *actual;
listint_t *after;
before = NULL;
after = NULL;
actual = *head;
while (actual != NULL)
{
after = actual->next;
actual->next = before;
before = actual;
actual = after;
}
*head = before;
return (*head);
}
