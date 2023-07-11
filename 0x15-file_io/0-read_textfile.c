#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @letters: the number of letters it should read and print.
 * @filename: the name of the file to be read from.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, n_read, n_print;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * (letters + 1));

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	n_read = read(fd, buff, letters);
	if (n_read < 0)
		return (0);

	n_print = write(STDOUT_FILENO, buff, n_read);
	if (n_print < 0 || n_print != n_read)
		return (0);
	free(buff);
	close(fd);

	return (n_print);
}
