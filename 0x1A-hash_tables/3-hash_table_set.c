#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: a pointer to the hash table
 * @key: key
 * @value: value associated with the key.
 *
 * Return: 1 on success, 0 on failue.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash = 0;
	hash_node_t *bucket;

	if (ht == NULL || key == NULL)
		return (0);

	hash = key_index((unsigned char *) key, ht->size);

	bucket = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (bucket == NULL)
		return (0);
	bucket->key = strdup(key);
	bucket->value = strdup(value);
	bucket->next = NULL;

	if (ht->array[hash] == NULL)
		ht->array[hash] = bucket;
	else
	{
		bucket->next = ht->array[hash];
		ht->array[hash] = bucket;
	}
	return (1);
}
