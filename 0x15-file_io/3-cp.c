#include "main.h"
#include <stdarg.h>

void print_error(int status, const char *format, ...);
/**
 * main - copies the content of a file to another file.
 * @av: an array of pointers to CLI arguments
 * @ac: the number of CLI arguments
 * Return: always 0 on success
 */
int main(int ac, char *av[])
{
	int in_fd, out_fd, open_flags;
	char buf[BUFFSIZE];
	mode_t file_perms;
	ssize_t num_read;

	if (ac != 3)
		print_error(97, "Usage: cp file_from file_to\n");
	in_fd = open(av[1], O_RDONLY);
	if (in_fd < 0)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	/* Setting open flags and file permissions */
	open_flags = O_CREAT | O_TRUNC | O_WRONLY;
	file_perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	out_fd = open(av[2], open_flags, file_perms);
	if (out_fd < 0)
		print_error(99, "Error: Can't write to %s\n", av[2]);
	while ((num_read = read(in_fd, buf, BUFFSIZE)) > 0)
		if (write(out_fd, buf, num_read) != num_read)
			print_error(99, "Error: Can't write to %s\n", av[2]);

	if (num_read < 0)
		print_error(98, "Error: Can't read from file %s\n", av[1]);
	if (close(in_fd) < 0)
		print_error(100, "Error: Can't close fd %d\n", in_fd);
	if (close(out_fd) < 0)
		print_error(100, "Error: Can't close fd %d\n", out_fd);
	return (0);
}

/**
 * print_error - prints error and exit
 * @format: string to be printed.
 * @status: exit code
 */
void print_error(int status, const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	if (status == 97)
		dprintf(STDERR_FILENO, "%s", format);
	else if (status == 100)
		dprintf(STDERR_FILENO, format, va_arg(ap, int));
	else
		dprintf(STDERR_FILENO, format, va_arg(ap, char *));
	va_end(ap);
	exit(status);
}
