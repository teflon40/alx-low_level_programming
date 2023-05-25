#include "main.h"

/**
 * print_line - draws a straight line
 * @n: takes in the number of lines to be printed
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
	}
}



