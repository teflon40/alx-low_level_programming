#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @str: a pointer to the string to be printed between strings
 * @n: the number of strings passed
 */
void print_strings(const char *str, const unsigned int n, ...)
{
	unsigned int i = 1;
	char *s;
	va_list arg_l;

	if (n)
	{
		va_start(arg_l, n);
		while (i <= n)
		{
			s = va_arg(arg_l, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			if (str && i != n)
				printf("%s", str);
			i++;
		}
	}
	putchar('\n');
	va_end(arg_l);
}
