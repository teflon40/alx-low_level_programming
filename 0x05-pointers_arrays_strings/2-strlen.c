#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: a pointer to a string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; i++)
		s++;
	return (i);
}
