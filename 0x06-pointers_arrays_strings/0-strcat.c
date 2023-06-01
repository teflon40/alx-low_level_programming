#include "main.h"

/**
 * _strcat - appends one string to another
 * @dest: the receiving string
 * @src: the string to be appended to dest
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;

	while (*dest != '\0')
		dest++, len++;

	while (*src != '\0')
	{
		*dest = *src;
		len++, src++, dest++;
	}
	dest[len] = '\0';
	dest -= len;
	return (dest);
}
