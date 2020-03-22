#include "lists.h"
/**
 * add_node_end - adds a node at the end of the lisy
 * @head:a double pointer to the node to be added
 * @str: the string to be duplicated
 *
 * Return: he address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_end;
list_t *final;
unsigned int i;
new_end = malloc(sizeof(list_t));
if (new_end == NULL)
return (NULL);
new_end->str = strdup(str);
for (i = 0; str[i] != '\0'; ++i)
{
new_end->len = i + 1;
}
new_end->next = NULL;
if (*head == NULL)
{
*head = new_end;
return (new_end);
}
else
while (final != NULL)
final = final->next;
final->next = new_end;
return (new_end);
}
