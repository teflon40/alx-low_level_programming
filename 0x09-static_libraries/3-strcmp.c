#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if they're the same,
 * else s1 - s2.
 */
int _strcmp(char *s1, char *s2)
{
	int dif = 0;

	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		dif = *s1 - *s2;
		if (!dif)
			continue;
		return (dif);
	}
	return (dif);
}
