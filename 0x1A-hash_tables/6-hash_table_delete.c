#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current = NULL, *next = NULL;

	if (ht)
	{
		while (i < ht->size)
		{
			current = ht->array[i];
			while (current)
			{
				next = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = next;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
