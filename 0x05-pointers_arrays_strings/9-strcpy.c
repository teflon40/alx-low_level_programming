#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: pointer to the buffer
 * @src: pointer to a string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	do {
		*dest = *src;
		dest++, src++;
	} while (*src != '\0');

	return p;
}
