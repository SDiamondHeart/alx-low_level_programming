#include "main.h"

/**
 * print_triangle - this is the user defined function for the code
 * @size: size of the triangle
 *
 * Description: this code prints a traingle followed by a new line
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int t;
	int u;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (t = 1; t <= size; t++)
	{
		for (u = 1; u <= size; u++)
		{
			if (u <= (size - t))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}

		_putchar('\n');
	}
}
