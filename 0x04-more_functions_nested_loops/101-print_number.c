#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	int count = 0, number = n;
	do {
		count++;
		number /= 10;
	} while (number);

	int i = 1;

	for (; i <= count; i++)
	{
		_putchar

