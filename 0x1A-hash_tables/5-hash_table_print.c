#include "hash_tables.h"

/**
 * print_list - prints a list.
 *
 * @head: a pointer to the head of the list.
 */
void print_list(const hash_node_t *head)
{
	static printMode mode = NOT_PRINTED;

	while (head != NULL)
	{
		if (mode == PRINTED)
			printf(", ");
		printf("'%s': '%s'", head->key, head->value);
		mode = PRINTED;
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
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		print_list(ht->array[i]);
	}
	printf("}\n");
}
