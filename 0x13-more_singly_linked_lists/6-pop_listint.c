#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: double pointer head
 *
 * Return: the value of delted node
 */
int pop_listint(listint_t **head)
{
listint_t *tmp = *head;
int m;
if (tmp == NULL)
return (0);
*head = (*head)->next;
m = tmp->n;
free(tmp);
return (m);
}
