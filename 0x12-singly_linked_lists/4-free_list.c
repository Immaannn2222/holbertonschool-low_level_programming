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
head = head->next;
while (head != NULL)
trav = head;
free(trav->next);
free(trav->str);
free(trav);
}
