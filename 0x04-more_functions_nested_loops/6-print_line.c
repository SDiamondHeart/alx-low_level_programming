#include "main.h"

/**
 * print_line - this is a user defined function
 * @n: the character to print
 *
 * Description: this code is to draw a straight line in the terminal
 *
 * Return: 0
 */

void print_line(int n)
{
	int cor;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cor = 1; cor <= n; cor++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
