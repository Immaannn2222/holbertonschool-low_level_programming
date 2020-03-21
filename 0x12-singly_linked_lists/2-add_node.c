#include "lists.h"
/**
 * add_node - function to add a node at the begininning
 * @head: the new element
 * @str: the duplicated string
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int i;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
for (i = 0; str[i] != '\0'; ++i)
{
new->len = i + 1;
}
new->next = (*head);
(*head) = new;
return (new);
}
