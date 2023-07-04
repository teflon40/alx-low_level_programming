#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: a pointer to a pointer pointing to the first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_p;

	temp_p = NULL;
	while (*head)
	{
		temp_p = *head;
		*head = (**head).next;
		free(temp_p);
	}
}
