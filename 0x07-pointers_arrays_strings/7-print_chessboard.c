#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array of pieces
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	b = 0;
	while (b < 8)
	{
		b++;

		c = 0;
		while (c < 8)
		{
			_putchar(a[b][c]);
			c++;
		}

		_putchar('\n');
	}
}
