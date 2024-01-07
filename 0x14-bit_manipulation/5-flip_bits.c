#include "main.h"

/**
 * flip_bits - Counts the number of unequal bits in two numbers.
 *
 * @n: first number.
 * @m: second number.
 *
 * Return: the number of unequal bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	uint8_t bit_len = Bit_Width(unsigned long int);
	uint8_t not_same_bits = 0, i;

	for (i = 0; i < bit_len; i++)
		not_same_bits += (Bit_Value(n, i) != Bit_Value(m, i));
	return (not_same_bits);
}
