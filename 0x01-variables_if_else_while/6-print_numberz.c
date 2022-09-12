#include <stdio.h>

/**
 * main - This is the main entry point of the code
 *
 * Description: This program prints all single digitd numbers of base 10 from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
