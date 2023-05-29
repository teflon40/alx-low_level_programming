#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
		i++;
	for (; i > 0; --i)
		_putchar(*--s);
	_putchar('\n');
}
