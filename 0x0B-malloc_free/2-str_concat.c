#include "main.h"

/**
 * concatenates two strings
 * @s1: points to the first string.
 * @s2: points to the second string.
 * Return: a pointer to the newly allocated space
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *str;

	if (s1 == NULL)
		;
	else
		while (s1[len1] != '\0')
			len1++;
	if (s2 == NULL)
		;
	else
		while (s2[len2] != '\0')
			len2++;
	str = malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
