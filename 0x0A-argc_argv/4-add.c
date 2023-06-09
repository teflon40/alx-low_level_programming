#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of CL arguments
 * @argv: array of pointers to the CL arguments
 * Return: 0 when successful, 1 when error.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		char *p;
		int i = 1, sum = 0;

		while (i < argc)
		{
			for (p = argv[i]; *p != '\0'; p++)
			{
				if (isdigit(*p))
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			i++;
		}
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

