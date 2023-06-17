#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the previous allocated memory
 * @old_size: the number of bytes already allocated
 *
 * Author: teflon40
 *
 * @new_size: the number of bytes to be allocated
 * Return: a pointer to the newly allocated memory
 * or NULL if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem, *temp_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)

	{
		new_mem = (char *) malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		return (new_mem);
	}

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	temp_ptr = ptr;
	for (; i < new_size; i++)
	{
		if (i == old_size)
			break;
		new_mem[i] = temp_ptr[i];
	}

	free(ptr);
	return (new_mem);
}
