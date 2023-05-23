#include <stdio.h>

unsigned long even_terms(unsigned long n);
/**
 * main - Program's starting point
 * prints the sum of all even-valued fibonacci terms less that 4,000,000
 *
 * Return: 0 when successful
 */

int main(void)
{
	unsigned long a = 1, b = 2, sum = 0, total = 0;

	for (; a <= 4000000; )
	{
		total += even_terms(a);
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%lu\n", total);

	return (0);
}

/**
 * even_terms - checks for even-valued fibonacci terms
 * @n: a parameter of type long int
 *
 * Return: number if it is even, otherwise 0
 */

unsigned long even_terms(unsigned long n)
{
	if (n % 2 == 0)
		return (n);
	return (0);
}


