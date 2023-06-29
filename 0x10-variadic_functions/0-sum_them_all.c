#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of all its parameters.
 * @n: the number of parameters
 * Return: the sum of all its parameters
 * or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list arg_l;

	if (n == 0)
		return (0);
	va_start(arg_l, n);
	for (; i < n; i++)
		sum += va_arg(arg_l, int);

	va_end(arg_l);
	return (sum);
}
