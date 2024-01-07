#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: a pointer to the number to manipulate.
 * @index: Bit to be set.
 *
 * Return: 1 if bit is set, else -1 (when index is out of range)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	uint8_t bit_len = Bit_Width(unsigned long int);

	if (index >= bit_len)
		return (-1);
	*n = Bit_OFF(*n, index);
	return (1);
}
