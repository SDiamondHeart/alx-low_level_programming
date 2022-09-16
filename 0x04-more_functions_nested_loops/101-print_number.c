#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - this is a user defined function for the code
 * @n: character to print
 *
 * Description: this code prints an integer
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1 = 0;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
