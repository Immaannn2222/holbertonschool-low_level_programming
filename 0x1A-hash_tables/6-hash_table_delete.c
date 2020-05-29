#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */


void hash_table_delete(hash_table_t *ht)
{
hash_node_t *t = NULL, *ch = NULL;
unsigned long int i;

if (!ht)
return;

for (i = 0; i < ht->size ; i++)
{
ch = ht->array[i];
while (ch)
{
t = ch;
ch = ch->next;
free(t->key);
free(t->value);
free(t);
}
}
free(ht->array);
free(ht);
return;
}
