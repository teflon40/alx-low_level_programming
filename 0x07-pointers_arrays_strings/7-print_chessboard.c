#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: points to the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	char *p;
	int i = 0;

	for (; i < 8; i++)
	{
		for (p = a[i]; p < a[i] + 8; p++)
			_putchar(*p);
		_putchar('\n');
	}
}
