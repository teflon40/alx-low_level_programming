#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0;

	for (; *str != '\0'; str++)
		i++;
	if (i % 2 != 0)
		i = (i - 1) / 2;
	else
		i /= 2;
	str -= i;

	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
