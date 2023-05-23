#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: a parameter of _isalpha
 *
 * Return: 1 if an alphabet is seen and 0 is otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
