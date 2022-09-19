#include "main.h"

/**
 * print_rev - function prints a string in reverse followed by a new line
 * @s: pointer to the string to print
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
