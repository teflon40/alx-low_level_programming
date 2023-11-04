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
	unsigned long int hash;
	hash_node_t *bucket;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	if (value == NULL)
		return (0);

	bucket = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (bucket == NULL)
		return (0);
	bucket->key = strdup(key);
	if (bucket->key == NULL)
		return (0);
	bucket->value = strdup(value);
	if (bucket->value == NULL)
		return (0);
	bucket->next = NULL;

	hash = key_index((unsigned char *) key, ht->size);
	if (ht->array[hash] == NULL)
		ht->array[hash] = bucket;
	else
	{
		bucket->next = ht->array[hash];
		ht->array[hash] = bucket;
	}
	return (1);
}
