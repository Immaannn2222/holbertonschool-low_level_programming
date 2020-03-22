#include"lists.h"
/**
 * free_list - frees up a list
 * @head: the list concerned
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *trav;
while (head != NULL)
{
trav = head->next;
free(head->str);
free(head);
head = trav;
}
}
