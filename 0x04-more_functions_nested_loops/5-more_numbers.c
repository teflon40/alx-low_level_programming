#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i = 1;

	for (; i <= 10; i++)
	{
		int num = 0;

		for (; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
