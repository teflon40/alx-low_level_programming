#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: points to the receiving string
 * @src: points to the string to be copied
 * @n: the number of bytes to be copied
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (len < n)
	{
		if (*src == '\0')
			break;
		*dest = *src;
		len++, src++, dest++;
	}
	if (len < n)
	{
		while (len <= n)
		{
			*dest = '\0';
			dest++, len++;
		}
	}
	dest -= len;
	return (dest);
}
