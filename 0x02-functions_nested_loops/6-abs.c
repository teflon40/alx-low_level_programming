#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: a parameter of type int
 *
 * Return: the absolute value of an integer
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
