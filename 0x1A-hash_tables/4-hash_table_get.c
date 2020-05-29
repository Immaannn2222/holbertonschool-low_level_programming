#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value associated with the element, or NULL if key no found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx = 0;
hash_node_t *tmp = NULL;

if (ht == NULL || key == NULL)
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[idx];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
return (tmp->value);
}
tmp = tmp->next;
}
return (NULL);
}
