#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a list to be printed
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i, num = 0;
	const list_t *p;

	for (p = h; p != NULL; p = p->next)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			i = p->len;
			printf("[%d] %s\n", i, p->str);
		}
		num++;
	}
	return (num);
}
