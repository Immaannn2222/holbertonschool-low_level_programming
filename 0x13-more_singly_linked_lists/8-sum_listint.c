#include "lists.h"
/**
 * sum_listint - sums the integers in nodes
 * @head: the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
while (head->next != NULL)
{
sum += head->n;
head = head->next;
}
sum += head->n;
return (sum);
}
return (0);
}
