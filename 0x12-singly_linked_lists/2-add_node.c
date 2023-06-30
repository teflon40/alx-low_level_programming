#include "lists.h"

int _strlen(const char *);
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to the address of the first node
 * @s: a string to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *s)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (s == NULL)
		s = "";
	new_node->str = strdup(s);
	new_node->len = _strlen(s);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - calculates the length of a string
 * @s: a pointer to the string to be calculated
 * Return: the length of the string.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
