#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: length of the line
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i = 1;

		for (; i <= n; i++)
		{
			int j = 1;

			for (; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
