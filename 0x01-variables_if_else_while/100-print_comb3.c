#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 is always success
 */

int main(void)
{
	int a;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (c = 1; c < 10; c++)
		{
			if (a < c && a != c)
			{
				putchar(a + '0');
				putchar(c + '0');
				if (a + c != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
