#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: a pointer to a pointer pointing to the first node in a list.
 * @num: an integer
 * Return: a pointer to the new node if success; otherwise NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int num)
{
	listint_t *new_node, **temp_p = head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	for (; *temp_p; temp_p = &(**temp_p).next)
		;
	new_node->n = num;
	new_node->next = *temp_p;
	*temp_p = new_node;

	return (new_node);
}
