#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: a pointer to the head node.
 * @index: the position of a node.
 *
 * Return: the nth node, or NULL if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos;

	/* Loop through list */
	for (pos = 0; head != NULL && pos != index; head = head->next)
		++pos;
	return (head);
}
