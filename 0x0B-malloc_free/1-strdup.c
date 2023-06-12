#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 * Return: a pointer to the duplicated string when successful
 * if insufficient memory was available, return NULL.
 */
char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}

