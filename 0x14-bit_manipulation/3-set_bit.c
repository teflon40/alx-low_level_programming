#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: a pointer to the number to manipulate.
 * @index: Bit to be set.
 *
 * Return: 1 if bit is set, else -1 (when index is out of range)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	uint8_t bit_len = Bit_Width(unsigned long int);

	if (index >= bit_len)
		return (-1);
	*n = Set_Bit(*n, index);
	return (1);
}
