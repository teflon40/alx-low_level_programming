#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of CL arguments
 * @argv: array of pointers to the CL arguments
 * Return: 0 when it prints the product, otherwise 1
 */
int main(int argc, char *argv[])
{
	long a, b;

	if (argc == 3)
	{
		a = atol(argv[1]);
		b = atol(argv[2]);
		printf("%ld\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
