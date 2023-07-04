#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/***********************
 * function prototypes *
 ***********************/
/* Prints all the elements of a linked list */
size_t print_listint(const listint_t *h);

/* returns the number of elements in a linked list */
size_t listint_len(const listint_t *h);

/* adds a new node at the beginning of linked list */
listint_t *add_nodeint(listint_t **head, const int n);

/* adds a new node at the end of a linked list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* frees a linked list */
void free_listint(listint_t *head);

/* frees a linked list */
void free_listint2(listint_t **head);

/* deletes the head node of a linked list */
int pop_listint(listint_t **head);

/* returns the nth node of a linked list */
listint_t *get_nodeint_at_index(listint_t *head,
			unsigned int index);

/* returns the sum of all the data of a linked list */
int sum_listint(listint_t *head);

/* inserts a node at a given position */
listint_t *insert_nodeint_at_index(listint_t **head,
			unsigned int index, int n);

/* deletes a node at a specific index of an linked list */
int delete_nodeint_at_index(listint_t **head,
			unsigned int index);

/* reverses a linked list */
listint_t *reverse_listint(listint_t **head);

/* prints a linked list */
size_t print_listint_safe(const listint_t *head);

/* frees a linked list */
size_t free_listint_safe(listint_t **h);

/* finds a loop in a linked list */
listint_t *find_listint_loop(listint_t *head);

#endif
