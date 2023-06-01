#include "main.h"

/**
 * leet - encodes a string into leet(1337).
 * @s: the string to encode
 * Return: a pointer to the resulting string
 */
char *leet(char *s)
{
	char low[5] = {'a', 'e', 'o', 't', 'l'};
	char upp[5] = {'A', 'E', 'O', 'T', 'L'};
	char lt[5] = {'4', '3', '0', '7', '1'};
	int a = 0, b;

	for (; *(s + a) != '\0'; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if ((*(s + a) == low[b]) || (*(s + a) == upp[b]))
				*(s + a) = lt[b];
		}
	}
	return (s);
}
