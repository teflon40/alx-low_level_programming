#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: a pointer to the address of the head node.
 * @idx: an index of a list.
 * @n: element to be added.
 *
 * Return: the address of the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
			unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int pos = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*head != NULL)
			(*head)->prev = new;
		*h = new;
		return (new);
	}
	for (tmp = *h; tmp != NULL; tmp = tmp->next)
	{
		if (pos == idx)
		{
			tmp->prev->next = new;
			new->prev = tmp->prev;
			new->next = tmp;
			tmp->prev = new;
			return (new);
		}
		pos++;
	}
	return (NULL);
}
