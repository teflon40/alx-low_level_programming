#include "hash_tables.h"

typedef enum {EMPTY, NOT_EMPTY} htMode;
/**
 * print_list - prints a list.
 *
 * @head: a pointer to the head of the list.
 */
void print_list(const hash_node_t *head)
{
	while (head != NULL)
	{
		printf("'%s': '%s', ", head->key, head->value);
		head = head->next;
	}
}

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	htMode mode = EMPTY;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		print_list(ht->array[i]);
		mode = NOT_EMPTY;
	}
	if (mode == NOT_EMPTY)
		printf("\b\b");
	printf("}\n");
}
