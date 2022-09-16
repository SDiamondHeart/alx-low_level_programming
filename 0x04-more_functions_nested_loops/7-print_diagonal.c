#include "main.h"

/**
 * print_diagonal - this is the user defined function for the code
 * @n: number of times the character should be printed
 *
 * Description: this code draws a diagonal line in the terminal
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int d;
	int e;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (d = 0; d < n; d++)
	{
		for (e = 0; e < d; e++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
