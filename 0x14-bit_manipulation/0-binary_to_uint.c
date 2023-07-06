#include "main.h"

#define FALSE 0
#define BIN 2

/**
 * get_pow - calculates the value of x to the power y
 * @x: an integer.
 * @y: the exponent of x.
 * Return: x to the power y.
 */
unsigned long int get_pow(int x, int y)
{
	if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return (x * get_pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 characters.
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	const char *ptr = b;
	int bit_set = FALSE, len;
	int expo = 0;			/* The position of a bit */
	int number = 0;			/* Holds the converted binary conversion */

	if (b == NULL)
		return (0);
	for (len = 0; ptr[len]; len++)
	{
		if (ptr[len] != '0' && ptr[len] != '1')
			return (0);
		if (ptr[len] == '1' && !bit_set)
			bit_set = len + 1;
	}
	expo = len - bit_set;
	ptr += (bit_set - 1);

	for (; *ptr; expo--, ptr++)
		if (*ptr == '1')
			number += get_pow(BIN, expo);
	return (number);
}
