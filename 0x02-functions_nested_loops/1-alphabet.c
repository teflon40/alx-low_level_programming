#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
}
