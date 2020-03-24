#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: double pointer to the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *trav;
if (head != NULL)
{
while (*head != NULL)
{
trav = (*head)->next;
free(*head);
*head = trav;
}
*head = NULL;
}
}
