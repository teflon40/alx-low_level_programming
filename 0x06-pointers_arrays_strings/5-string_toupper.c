#include "main.h"

int _islower(int c);

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: a string
 * Return: a pointer to the modified string.
 */
char *string_toupper(char *s)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (_islower(*p))
			*p -= ' ';
	}
	return (s);
}

/**
 * _islower - checks for alphabets
 * @c: the character to be checked
 * Return: 1 if c is an alphabet else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
