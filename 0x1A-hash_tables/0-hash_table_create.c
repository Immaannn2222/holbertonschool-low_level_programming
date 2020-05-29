#include "hash_tables.h"

/**
 * hash_table_create - creates a hash
 * @size: size of the array
 *
 * Return:  a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new = NULL;
hash_node_t **head = NULL;

new = malloc(sizeof(hash_table_t));
if (new == NULL)
return (NULL);
new->size = size;
head = malloc(sizeof(hash_node_t *) * size);
if (head == NULL)
return (NULL);
new->array = head;
return (new);
}
