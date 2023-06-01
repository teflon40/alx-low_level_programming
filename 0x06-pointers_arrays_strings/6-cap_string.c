#include "main.h"

int _islower(int c);
int check_symbol(int c);

/**
 * cap_string - capitalizes all words of a string
 * @s: the string whose words are to be capitalized
 * Return: a pointer to the resulting string
 */
char *cap_string(char *s)
{
	int a, len = 0;
	char *p = s;

	while (s[len] != '\0')
		len++;

	for (a = 0; a < len; a++, p++)
	{
		if (a == 0)
		{
			if (_islower(*p))
				*p -= ' ';
		}
		else
		{
			if (_islower(*p))
			{
				if (check_symbol(*(p - 1)))
					*p -= ' ';
			}
		}
	}
	return (s);
}

/**
 * _islower - checks for lowercases
 * @c: the character to be checked
 * Return: 1 if c is a lowercase
 * else, 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/**
 * check_symbol - check for separators
 * @c: character to be checked.
 * Return: 1 if c is a separator
 * else, 0.
 */
int check_symbol(int c)
{
	switch (c)
	{
		case ' ': case '\n': case '\t': case ',':
		case ';': case '.': case '?': case '"':
		case '(': case ')': case '{': case '}': case '!':
			return (1);
		default:
			return (0);
	}
}
