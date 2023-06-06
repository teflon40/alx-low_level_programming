#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any bytes in the string accept
 * @s: a string
 * @accept: a string
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept
 * OR return NULL if such no byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int len = 0, j = 0;
	char *p = s, *q;

	while (*p != '\0')
		len++, p++;
	for (; j < len; j++)
	{
		for (q = accept; *q != '\0'; q++)
		{
			if (s[j] == *q)
				return (s + j);
		}
	}
	return (NULL);
}
