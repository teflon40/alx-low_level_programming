#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data(n) of a linked list.
 * @head: a pointer to the first node in the list.
 * Return: the sum of all the data,
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; head; sum += head->n, head = head->next)
		;
	return (sum);
}
