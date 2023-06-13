#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @str: the string
 * Return: the length of the str
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: array of pointers to the arguments
 * Return: a pointer to the resulting memory
 * or NULL if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int tot_len, i, j;
	char *s;

	tot_len = 0;
	if (!ac || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
		tot_len += _strlen(av[i]);
	s = (char *) malloc(sizeof(char) * tot_len + i + 1);
	if (s == NULL)
		return (NULL);

	i = 0;
	for (j = 1; j < ac; j++)
	{
		char *p;

		for (p = av[j]; *p != '\0'; p++)
			s[i++] = *p;
		s[i++] = '\n';
	}
	s[i] = '\0';
	return (s);
}
