#include "main.h"

/**
 * puts_half - print the seconf half of the string, if odd
 * print the last character of the string
 * @str: char array string type
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
