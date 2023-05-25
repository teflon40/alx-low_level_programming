#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i = 1, space = size;

		for (; i <= size; i++)
		{
			int k = 1, j = 1;

			for (; k < space; k++)
				_putchar(' ');
			--space;
			for (; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

