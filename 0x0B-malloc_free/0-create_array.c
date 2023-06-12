#include "main.h"

/**
 * create_array - creates an array of characters and initializes it
 * @size: size of the array
 * @c: the character to be to initialize the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (!size)
		return (NULL);
	array = (char *) malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (; i < size; i++)
		array[i] = c;

	return (array);
}
