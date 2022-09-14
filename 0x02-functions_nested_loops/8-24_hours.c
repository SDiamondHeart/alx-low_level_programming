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
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 23; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
