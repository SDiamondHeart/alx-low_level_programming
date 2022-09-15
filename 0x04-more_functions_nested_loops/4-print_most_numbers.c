#include "main.h"

/**
 * print_most_numbers - this is a user defined function
 *
 * Description: this code prints most of the numbers from 0 to 9
 *
 * Return: 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
