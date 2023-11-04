#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: the hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *bucket;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx])
		{
			bucket = ht->array[idx];
			ht->array[idx] = ht->array[idx]->next;
			free(bucket->key);
			free(bucket->value);
			free(bucket);
		}
	}
	free(ht->array);
	free(ht);
}
