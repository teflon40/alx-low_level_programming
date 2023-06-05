#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 * Return: a pointer to the first occurrence of c
 * return NULL if the c is not found.
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (NULL);
}
