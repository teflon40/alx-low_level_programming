#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: points to an integer variable
 * @b: points to an integer variable
 */
void swap_int(int *a, int *b)
{
	int hold = *a;

	*a = *b;
	*b = hold;
}
