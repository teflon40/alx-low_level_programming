#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: number of CL arguments
 * @argv: array of pointers to the CL arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
