#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to a string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
