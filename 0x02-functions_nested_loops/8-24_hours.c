#include "main.h"

/**
 * jack_bauer - This is a user defined function for the code
 *
 * Description: This code prints every minute of the day of Jack Bauer
 *
 * Return: 0 (Success)
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m <= 60; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
