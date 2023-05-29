#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char *p = s;

	for (; *s != '\0'; s++)
		i++;
	for (; j < i / 2; j++)
	{
		char hold;

		hold = *--s;
		*s = *p;
		*p++ = hold;
	}
}
