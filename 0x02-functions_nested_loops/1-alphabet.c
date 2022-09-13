#include "main.h"

/**
 * print_alphabet - This is a user defined function for the code
 *
 * Description: This code prints alphabets in lowercase followed by a new line
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
