#include "main.h"

void print_product(int n);
/**
 * print_times_table - prints n times table
 * @n: int type parameter
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		int j = 0;

		for (; j <= n; j++)
		{
			int product = i * j;

			if (product > 9)
				print_product(product);
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * print_product - prints product greater than 9
 * @n: parameter of int type
 *
 * Return: void
 */

void print_product(int n)
{
	if (n > 99)
	{
		_putchar(((n / 10) / 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
