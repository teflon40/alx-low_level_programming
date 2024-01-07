#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 *	using, shift and logical AND operators.
 *
 * @n: number to be printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 0;
	int i = 0, j = 0;

	do {
		num = (num << 1) + (n & 0x1);
		n >>= 1;
		i++;
	} while (n != 0);
	for (j = 0; j < i; j++)
		putchar(Bit_Value(num, j) + '0');
}
