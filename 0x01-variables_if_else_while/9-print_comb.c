#include <stdio.h>

/**
 * main - This is the main entry point of the code
 *
 * Description: This program prints all combinations of single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');

			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
