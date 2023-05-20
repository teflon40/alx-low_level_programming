#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 is always success
 */

int main(void)
{
int i;

for (i = 97; i <= 122; i++)
if (i != 113 && i != 101)
putchar(i);
putchar('\n');
return (0);
}
