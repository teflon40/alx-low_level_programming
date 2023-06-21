#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: the size of array
 *
 * @cmp: pointer to the function that will perform the search
 * Return: -1 if no element matches or size <= 0
 * else return the index of the first element that met the search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0)
		return (-1);

	if (cmp)
		for (; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	return (-1);
}
