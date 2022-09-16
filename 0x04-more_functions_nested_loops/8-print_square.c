#include "main.h"

/**
 * print_square - user defined function for the code
 * @size: size of the square
 *
 * Description: prints square followed by a new line
 *
 * Return: 0
 */

void print_square(int size)
{
	int s;
	int t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (s = 1; s <= size; s++)
	{
		for (t = 1; t <= (size); t++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
