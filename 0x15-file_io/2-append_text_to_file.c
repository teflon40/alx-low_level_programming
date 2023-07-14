#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: a pointer to a string (the name of the file).
 * @text_content: a pointer to a string (text content).
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, open_flags;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	open_flags = O_APPEND | O_WRONLY;
	fd = open(filename, open_flags);
	if (fd < 0)
		return (FAILURE);
	if (write(fd, text_content, _strlen(text_content)) < 0)
		return (FAILURE);
	close(fd);
	return (SUCCESS);
}

/**
 * _strlen - calculates the length of a string.
 * @s: the string whose length is to be calculated.
 * Return: the length of the string (s).
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
