#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: an array of integers
 * @size: size of the array
 *
 * @action: a pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size > 0 && action)
		for (; i < size; i++)
			(*action)(array[i]);
}
