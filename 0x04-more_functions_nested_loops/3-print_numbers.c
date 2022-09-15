#include "main.h"

/**
 * print_numbers - this is a user defined function
 *
 * Description: this code prints numbers from 0 to 9
 *
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
