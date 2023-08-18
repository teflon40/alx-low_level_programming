#ifndef LISTS_H
#define LISTS_H


/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points the the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list mode structure
 *
 */
typedef strut dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlintint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

#endif
