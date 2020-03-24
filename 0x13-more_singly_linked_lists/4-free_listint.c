#include "lists.h"
/**
 * free_listint - frees a list
 * @head: the lsit
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *trav;
while (head != NULL)
{
trav = head->next;
free(head->str);
free(head);
head = trav;
}
}
