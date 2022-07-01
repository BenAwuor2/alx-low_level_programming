#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The table to be added to
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: Either 1 on Success or 0 on Fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_i;
	hash_node_t *new_key = NULL;

	if (ht == NULL || (key == NULL || value == NULL))
		return (0);

	key_i = key_index((const unsigned char *)key, ht->size);
	new_key = malloc(sizeof(hash_node_t));
	if (new_key == NULL)
		return (0);

	new_key->key = strdup(key);
	new_key->value = strdup(value);
	new_key->next = ht->array[key_i];
	ht->array[key_i] = new_key;

	return (1);
}
