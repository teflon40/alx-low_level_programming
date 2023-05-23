#include <stdio.h>

long multiples(int n);
/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;
	long sum = 0;

	for (i = 1; i < 1024; i++)
	{
		sum += multiples(i);
	}
	printf("%ld\n", sum);

	return (0);
}

/**
 * multiples - checks if a number is a multiple of 3 or 5
 * @n: a parameter of int type
 *
 * Return: the number if it a multiple of 3 or 5.
 *		0 if otherwise
 */

long multiples(int n)
{
	if (n % 3 == 0 || n % 5 == 0)
		return (n);
	return (0);
}

