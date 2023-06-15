#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each member
 * Return: a pointer to the array
 * returns NULL if malloc fails
 * returns NULL if size or nmemb is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (!nmemb || !size)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	return (array);
}
