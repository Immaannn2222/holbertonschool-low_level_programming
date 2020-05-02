#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: a pointer
 *
 * Return: the sun or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
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
