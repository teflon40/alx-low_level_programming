#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: a string
 */
void puts2(char *str)
{
	char *p = str;
	int len = 0, i;

	while (*p != '\0')
		len++, p++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
