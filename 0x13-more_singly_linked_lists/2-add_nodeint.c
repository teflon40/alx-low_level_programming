#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 * @head: a pointer to a pointer pointing to the first node.
 * @num: an integer.
 * Return: a pointer to the new node if it's successful;
 * otherwise NULL.
 */
listint_t *add_nodeint(listint_t **head, const int num)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = num;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
