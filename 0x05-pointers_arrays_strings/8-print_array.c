#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: array pointer
 * @n: size of the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *a++);
		else
			printf("%d\n", *a);
	}
}
