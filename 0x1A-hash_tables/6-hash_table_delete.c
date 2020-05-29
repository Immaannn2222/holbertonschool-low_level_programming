#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *tmp = NULL, *new = NULL;
unsigned long int i = 0;

if (ht == NULL)
return;

for (i = 0; i < ht->size ; i++)
{
new = ht->array[i];
while (new != NULL)
{
tmp = new;
new = new->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
}
free(ht->array);
free(ht);
}
