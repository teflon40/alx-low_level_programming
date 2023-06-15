#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes of memory to allocate
 * Return: a pointer to the allocated memory
 * Exit: 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
