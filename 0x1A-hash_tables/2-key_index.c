#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: the size of the array
 *
 * Return: index at which the key/value will be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = hash_djb2(key);
return (index % size);
}
