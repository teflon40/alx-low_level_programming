#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string which receives another
 * @src: the string to be appended to dest
 * @n: the maximum number of bytes that can be appended
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (*dest != '\0')
		len++, dest++;

	while (i < n)
	{
		if (*src == '\0')
			break;
		*dest = *src;
		dest++, i++, len++, src++;
	}
	if (i < n)
		*dest = '\0';
	dest -= len;
	return (dest);
}


