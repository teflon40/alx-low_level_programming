#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: a parameter in _islower
 *
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
