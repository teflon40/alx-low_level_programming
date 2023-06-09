#include <stddef.h>

/**
 * _strcmp - compares two strings
 * @s1: points to the first string
 * @s2: points to the second string
 * @n: length of s1
 * Return: 1 if the strings are equal, else s1 - s2
 */
int _strcmp(const char *s1, const char *s2, int n)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (!--n)
			break;
		if (!*s1)
			return (0);
	}
	return (*s1 - *s2);
}

/**
 * _strstr - locates a substring
 * @haystack: the full string from where substring will be searched
 * @needle: It represents the substring to be searched in the full string
 * Return: pointer to the first occurrence of the matched string.
 * Else, NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int len = 0;
	char *p = haystack, *q = needle;

	if (!*needle)
		return (haystack);
	while (*q)
		len++, q++;
	for (; *p ; p++)
	{
		if (*p == *needle)
		{
			if (!_strcmp(p, needle, len))
				return (p);
		}
	}
	return (NULL);
}
