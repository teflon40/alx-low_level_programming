#include <stdio.h>

int main(void)
{
	for (int a = 0; a <= 2; a++)
	{
		for (int b = 0; b <= 3; b++)
		{
			for (int c = 0; c <= 5; c++)
			{
				for (int d = 0; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(':');
					putchar(c + '0');
					putchar(d + '0');
					putchar('\n');
				}
			}
		}
	}
}
