#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @str: a pointer to a string to be printed between numbers
 * @n: the number of integers passed
 */
void print_numbers(const char *str, unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_l;

	va_start(arg_l, n);
	if (n)
	{
		while (i < n)
		{
			printf("%d", va_arg(arg_l, int));
			if (str && i != n - 1)
				printf("%s", str);
			i++;
		}
	}
	putchar('\n');
	va_end(arg_l);
}
