#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	char *p = s;

	if (*p)
	{
		_putchar(*p++);
		_puts_recursion(p);
	}
	else
		_putchar('\n');
}

