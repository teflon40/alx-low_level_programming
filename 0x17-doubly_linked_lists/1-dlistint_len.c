#include "lists.h"

/**
 * dlistint_len - calculates the number of elements in a linked dlistint_t list
 * @h: a pointer to the head node
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		++num;
		h = h->next;
	}
	return (num);
}
