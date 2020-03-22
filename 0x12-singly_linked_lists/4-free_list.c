#include"lists.h"
/**
 * free_list - frees up a list
 * @head: the list concerned
 *
 * Return: void
 */
void free_list(list_t *head)
{
while (head != NULL)
free(head->str);
free(head->next);
free(head);
}
