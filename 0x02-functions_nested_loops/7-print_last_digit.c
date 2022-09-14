#include "main.h"

/**
 * print_last_digit - This is the user defined function of the code
 * @n: This is the character to print
 *
 * Description: This code writes a function to print the last digit of a number
 *
 * Return: 0 (Success)
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = (-1 * (n % 10));
		_putchar(lastdigit + '0');

		return (lastdigit);
	}
	else
	{
		lastdigit = (n % 10);
		_putchar(lastdigit + '0');

		return (lastdigit);
	}
}
