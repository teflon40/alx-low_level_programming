#include "lists.h"

/**
 * sum_dlistint - Sum up all the data (n) of a dlistint_t linked list.
 * @head: a pointer to the head node
 *
 * Return: 0 if the list is empty, else the sum of all the data of the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n; head = head->next)
		;
	return (sum);
}
