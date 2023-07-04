#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list.
 * @h: a pointer to the first node in a list.
 * Return: the number of nodes in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	for (; h; h = h->next, num_nodes++)
		;
	return (num_nodes);
}
