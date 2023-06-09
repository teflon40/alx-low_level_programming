#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments
 * @argv: array of pointers to the CL arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
