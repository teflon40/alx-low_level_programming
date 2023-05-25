#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i = 1;

		for (; i <= size; i++)
		{
			int j = 1;

			for (; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

