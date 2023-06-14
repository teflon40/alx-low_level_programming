#include "main.h"
#include <stdio.h>
/**
 * words_count - counts the number of words in a string
 * @s: a pointer to the string
 * Return: the number of words in the string
 */
int words_count(const char *s)
{
	int space = True;
	int num_words = 0;

	while (*s != '\0')
	{
		if (*s == ' ')
			space = True;
		else
		{
			if (space)
				num_words++;
			space = False;
		}
		s++;
	}
	return (num_words);
}
/**
 * strtow - splits a string into words
 * @str: a pointer to the string to splitted
 * Return: a pointer to an array of strings
 * or NULL if malloc fails
 */
char **strtow(char *str)
{
	char **words, *p;
	int numOfwords = words_count(str);
	int len, i;

	if (str == NULL || *str == '\0')
		return (NULL);
	if (!numOfwords)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (numOfwords + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < numOfwords; i++)
	{
		while (*str == ' ' && *str != '\0')
			str++;

		len = 0;
		while (str[len] != ' ' && str[len] != '\0')
			len++;
		words[i] = (char *) malloc(sizeof(char) * len + 1);
		if (words[i] == NULL)
		{
			while (i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (p = words[i]; p < words[i] + len; p++)
			*p = *str++;
		*p = '\0';
	}
	words[i] = NULL;
	return (words);
}
