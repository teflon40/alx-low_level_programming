#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to a string (name of a file)
 * @text_content: a pointer to a string(text contents)
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, open_flags;
	mode_t f_perms;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	open_flags = O_CREAT | O_TRUNC | O_WRONLY;	/* adding open flags */
	f_perms = S_IRUSR | S_IWUSR;			/* Giving read and write permissions to user */

	fd = open(filename, open_flags, f_perms);
	if (fd < 0)
		return (FAILURE);
	if (write(fd, text_content, _strlen(text_content)) < 0)
		return (FAILURE);
	close(fd);
	return (SUCCESS);
}

/**
 * _strlen - calculates the length of a string.
 * @s: a pointer to the string whose length is to be calculated.
 * Return: the length of the string.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
