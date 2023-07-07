#include "main.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n);
int get_bin_len(unsigned long int);

/**
 * get_bit - gets the value of a bit at a given index
 * @n: an integer
 * @index: the index of the bit to find.
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *num_str;
	int len = get_bin_len(n);
	int pos = len, i = 0;

	if(len <= (int) index)
		pos = len = index + 1;
	num_str = malloc(sizeof(char) * (len + 1));
	if (num_str == NULL)
		return (-1);
	num_str = _memset(num_str, '0', len);

	num_str[pos--] = '\0';
	while (n / 2)
	{
		num_str[pos--] = n % 2 + '0';
		n /= 2;
	}
	num_str[pos] = n % 2 + '0';

	for (len--; len >= 0; i++, len--)
		if (i == (int) index)
		{
			i = num_str[len];
			free(num_str);
			return (i - '0');
		}
	free(num_str);

	return (-1);
}

/**
 * create_num_str - creates a string of 1 and 0 characters.
 * @n: an integer to be converted to binary.
 * @len: a pointer to the length of the string.
 * Return: a pointer to the string created.
 */
int get_bin_len(unsigned long int num)
{
	int len = 1;

	while (num / 2)
	{
		num /= 2;
		len++;
	}
	return (len);
}

/**
 * _memset - fills the first n bytes of
 * memory area pointed to by s with a constant byte.
 * @s: points to a memory area.
 * @n: the number of bytes of s to be filled.
 * @b: the constant byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i = 0;

	while (i < n)
	{
		*p = b;
		i++, p++;
	}
	return (s);
}
