#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: a pointer to a pointer pointing to the first node of a list.
 * Return: the data of the head node; or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_p;
	int data;

	if (!head || !*head)
		return (0);
	temp_p = *head;
	data = temp_p->n;
	*head = (**head).next;
	free(temp_p);

	return (data);
}
