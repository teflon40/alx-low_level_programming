#include "main.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n);
int get_bin_len(unsigned long int);

/**
 * get_bit - gets the value of a bit at a given index
 * @n: an integer
 * @index: the index of the bit to find.
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	uint8_t num_of_bits = Bit_Width(n);

	if (index >= num_of_bits)
		return (-1);
	return (Bit_Value(n, index));
}
