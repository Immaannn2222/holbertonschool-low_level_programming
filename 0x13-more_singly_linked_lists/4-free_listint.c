#include "lists.h"
/**
 * free_listint - frees up a list
 * @head: the list concerned
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *trav;
while (head != NULL)
{
trav = head->next;
free(head);
head = trav;
}
}
