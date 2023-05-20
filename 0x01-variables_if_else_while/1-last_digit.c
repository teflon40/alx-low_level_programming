#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: 0 is always success
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	i = n % 10;
	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5", n, i);
	else if (i == 0)
		printf("Last digit of %d is %d and is 0", n, i);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, i);

	printf("\n");
	return (0);
}
