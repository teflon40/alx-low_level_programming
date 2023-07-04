#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to a pointer pointing to the first node.
 * @idx: the index of the list where the new node should be added.
 * @num: an integer.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head,
				unsigned int idx, int num)
{
	listint_t *new_node, **temp_p;
	unsigned int pos = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = num;

	temp_p = head;
	for (; *temp_p; temp_p = &(**temp_p).next)
	{
		if (pos == idx - 1)
		{
			new_node->next = (**temp_p).next;
			*temp_p = new_node;
			return (new_node);
		}
		pos++;
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
