#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(product + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
