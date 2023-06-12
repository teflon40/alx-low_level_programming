#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of 0s
 * @width: array width or number of columns
 * @height: array height or number of rows
 * Return: a pointer to 2D array
 * or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **array, i = 0, *p;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			while (i)
				free(array[i--]);
			free(array);
			return (NULL);
		}
		for (p = array[i]; p < array[i] + width; p++)
			*p = 0;
	}
	return (array);
}
