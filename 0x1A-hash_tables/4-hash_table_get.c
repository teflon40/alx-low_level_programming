#include "hash_tables.h"

/**
 * search_list - searches a list for a key
 *
 * @head: the list to be searched.
 * @key: the key to be searched for.
 *
 * Return: the value associated with the key, or NULL if key couldn't be found.
 */
char *search_list(const hash_node_t *head, const char *key)
{
	if (key == NULL || head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (strcmp(key, head->key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: the hash table to be searched.
 * @key: the key to be searched for.
 *
 * Return: the value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;

	if (key == NULL || ht == NULL)
		return (NULL);
	hash = key_index((unsigned char *) key, ht->size);
	if (ht->array[hash] == NULL)
		return (NULL);

	return (search_list(ht->array[hash], key));
}
