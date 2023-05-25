#include "main.h"

/**
 * main - prints prime factors
 * Return: 0 when successful
 */
int main(void)
{
	unsigned long num =  612852475143, max = 0, i = 2;

	do {
		if (num % i == 0)
		{
			max = i;
			num /= i;
		}
		else
			i++;
	} while (num > i * i);

	printf("%lu\n", max);
	return (0);
}
