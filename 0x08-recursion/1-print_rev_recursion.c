#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	char *p = s;

	if (*p != '\0')
		_print_rev_recursion(p + 1);
	if (*p != '\0')
		_putchar(*p);
}
