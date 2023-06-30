#include "lists.h"

/**
 * free_list - frees a list
 * @head: a pointer to the first node in the list.
 */
void free_list(list_t *head)
{
	list_t *cur, *prev;

	for (cur = head, prev = NULL; cur != NULL;)
	{
		prev = cur;
		cur = cur->next;
		free(prev->str);
		free(prev);
	}
}
