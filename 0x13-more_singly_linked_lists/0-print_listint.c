#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list.
 * @h: a pointer to the first node in a linked list.
 * Return: the number of nodes in a list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next, num++)
		printf("%d\n", h->n);
	return (num);
}
