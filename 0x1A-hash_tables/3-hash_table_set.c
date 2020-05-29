#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
unsigned long int idx = 0;
idx = key_index((const unsigned char *)key, ht->size);
if (ht == NULL || key == NULL)
{
return (0);
}
if (ht->array[idx] != NULL)
{
if (strcmp(ht->array[idx]->key, key) == 0)
{
ht->array[idx]->value = strdup(value);
return (1);
}
}
new = malloc(sizeof(hash_node_t *));
if (new == NULL)
return (0);
new->key = strdup(key);
new->value = strdup(value);
new->next = ht->array[idx];
ht->array[idx] = new;
return (1);
}
