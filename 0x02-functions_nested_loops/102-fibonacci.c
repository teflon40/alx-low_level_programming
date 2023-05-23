#include <stdio.h>

/**
 * main - Program starting point
 * prints the first 50 fibonacci numbers
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;
	unsigned long a = 1, b = 2, sum = 0;

	for (i = 1; i <= 50; i++)
	{
		if (i == 50)
			printf("%lu", a);
		else
			printf("%lu, ", a);
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("\n");

	return (0);
}
