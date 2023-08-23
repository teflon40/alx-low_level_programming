#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: A pointer to the address of the head node
 * @n: an element to be added
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
