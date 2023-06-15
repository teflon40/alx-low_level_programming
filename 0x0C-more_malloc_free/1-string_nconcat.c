#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @s: the string whose length is to be calculated
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	if (s == NULL)
		return (len);
	while (*s != '\0')
		len++, s++;
	return (len);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: points to the first string
 * @s2: points to the second string
 * @n: the number of bytes to copy from s2
 * Return: a pointer to the allocated memory containing
 * the concatenated string
 * Or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, len2 = 0, tot_len = 0;
	int i = 0, j = 0;
	char *str;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if ((int) n >= len2)
		n = len2;
	tot_len = len1 + n;

	str = (char *) malloc(sizeof(char) * tot_len + 1);
	if (str == NULL)
		return (NULL);
	for (; i < len1; i++)
		str[i] = s1[i];
	for (; j < (int) n; j++)
		str[i++] = s2[j];
	str[i] = '\0';

	return (str);
}
