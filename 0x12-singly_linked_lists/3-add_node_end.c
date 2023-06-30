#include "lists.h"

int _strlen(const char *);
/**
 * add_node_end - adds a new node at the end of a list.
 * @head: a pointer to a pointer to the first node in the list
 * @s: a string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *s)
{
	list_t **p;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (s == NULL)
		s = "";
	new_node->str = strdup(s);
	new_node->len = _strlen(s);

	for (p = head; *p != NULL; p = &(**p).next)
		;
	*p = new_node;
	new_node->next = NULL;

	return (new_node);
}

/**
 * _strlen - calculates the length of a string
 * @s: a pointer to the string whose length is to be calculated
 * Return: the calculated length.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
