#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a position of a linked list.
 * @head: a pointer to a pointer pointing to the first node of a list.
 * @index: the index of the node to be deleted.
 * Return: 1 if it succeeds, otherwise -1;
 */
int delete_nodeint_at_index(listint_t **head,
			unsigned int index)
{
	listint_t **temp_p;
	listint_t *p;
	unsigned int pos = 0;

	temp_p = head;
	for (p = *temp_p; *temp_p; temp_p = &(**temp_p).next)
	{
		if (pos == index)
		{
			*temp_p = (**temp_p).next;
			free(p);
			return (1);
		}
		pos++;
		p = p->next;
	}
	return (-1);
}
