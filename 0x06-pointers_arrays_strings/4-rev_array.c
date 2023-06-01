#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to be reversed
 * @n: the size of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (; i < n / 2; i++)
	{
		int hold = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = hold;
	}
}
