#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: a parameter of _isalpha
 *
 * Return: 1 if an alphabet is seen and 0 is otherwise
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) ? 1 : 0);
}
