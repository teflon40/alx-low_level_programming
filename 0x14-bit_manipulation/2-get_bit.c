#include "main.h"

char *create_num_str(unsigned long int, int *);
/**
 * get_bit - gets the value of a bit at a given index
 * @n: an integer
 * @index: the index of the bit to find.
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *s;
	int len, i;

	i = 0;
	s = create_num_str(n, &len);
	for (len--; len >= 0; i++, len--)
		if (i == (int) index)
		{
			i = s[len];
			free(s);
			return (i - '0');
		}
	free(s);
	return (-1);
}

/**
 * create_num_str - creates a string of 1 and 0 characters.
 * @n: an integer to be converted to binary.
 * @len: a pointer to the length of the string.
 * Return: a pointer to the string created.
 */
char *create_num_str(unsigned long int n, int *len)
{
	char *num_str;
	unsigned long num = n;
	int pos;
	*len = 1;

	while (num / 2)
	{
		num /= 2;
		*len += 1;
	}
	pos = *len;
	num_str = malloc(sizeof(char) * (*len + 1));
	if (num_str == NULL)
		return (NULL);

	num_str[pos--] = '\0';
	while (n / 2)
	{
		num_str[pos--] = n % 2 + '0';
		n /= 2;
	}
	num_str[pos] = n % 2 + '0';
	return (num_str);
}
