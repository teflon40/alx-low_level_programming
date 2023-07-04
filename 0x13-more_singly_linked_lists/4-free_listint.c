#include "lists.h"

/**
 * free_listint - frees a linked list
 * @h: a pointer to the first node in the list.
 */
void free_listint(listint_t *h)
{
	listint_t *temp_p;

	temp_p = NULL;
	for (; h;)
	{
		temp_p = h;
		h = h->next;
		free(temp_p);
	}
}
