#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list.
 * @head: a pointer to the first node in the list.
 * @index: the index of the node.
 * Return: the nth node of the list if it exists; otherwise NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head,
				unsigned int index)
{
	unsigned int pos = 0;

	while (head)
	{
		if (pos == index)
			return (head);
		head = head->next;
		pos++;
	}
	return (NULL);
}
