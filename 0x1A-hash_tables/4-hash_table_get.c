#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with the key
 * @ht: The hash table
 * @key: The associated key
 *
 * Return: Either the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_i;

	if (ht == NULL || key == NULL)
		return (NULL);

	key_i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[key_i] != NULL)
		return (ht->array[key_i]->value);

	return (NULL);
}
