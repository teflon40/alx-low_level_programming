#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the smallest value in the array
 * @max: the largest value in the array
 * Return: a pointer to the newly created array
 * Or NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	array = (int *) malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
