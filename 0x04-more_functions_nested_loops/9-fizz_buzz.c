#include "main.h"

/**
 * main - calls print_fizzbuzz
 *
 * Return: 0 when successful
 */

int main(void)
{
	int num = 1;

	for (; num <= 100; num++)
		print_fizzbuzz(num);
	putchar('\n');
	return (0);
}

/**
 * print_fizzbuzz - prints fizz, buzz or fizzbuzz
 *		when n is a multiple of 3 or a multiple of 5 or both multiple of 3 and 5
 *		respectively
 * @n: takes an integer
 */
void print_fizzbuzz(int n)
{
	if ((n % 3 == 0) && (n % 5 == 0))
		printf("FizzBuzz");
	else if (n % 5 == 0)
		printf("Buzz");
	else if (n % 3 == 0)
		printf("Fizz");
	else
		printf("%d", n);
	if (n != 100)
		putchar(' ');
}
