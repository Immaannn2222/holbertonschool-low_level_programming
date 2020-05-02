#include "lists.h"
/**
 * free_dlistint - frees up a DLL
 * @head: pointer
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *trav;
while (h != NULL)
{
trav = head->next;
free(head);
head = trav;
}
}
