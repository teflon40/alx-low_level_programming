#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: the string to be encoded.
 * Return: pointer to the encoded string.
 */
char *rot13(char *s)
{
	char f[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int a = 0, b;

	for (; *(s + a) != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (*(s + a) == f[b])
			{
				*(s + a) = e[b];
				break;
			}
		}
	}
	return (s);
}

