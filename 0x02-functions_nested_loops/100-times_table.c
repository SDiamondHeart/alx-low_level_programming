#include "main.h"

/**
 * print_times_table - This is the user defined function for this code
 * @n: This is the character to print
 *
 * Description: This code prints the n times table from 0
 *
 * Return: 0 (Success)
 */

void print_times_table(int n)
{
	int i;
	int j;
	int res;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= 0; i++)
		{
			for (j = 0; j <= 0; j++)
			{
				res = (i * j);

				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && j != 0)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar((res % 10) + '0');
				}
				else
				{
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
