#include <stdio.h>

/**
 * main - This is the entry point of the the code
 *
 * Description: This program prints all single digit numbers of base 10 from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
