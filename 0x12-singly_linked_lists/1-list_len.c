#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list_t list.
 * @h: a list whose elements are to be counted
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;		/* the number of elements in a list */

	for (; h != NULL; h = h->next)
		num++;

	return (num);
}
