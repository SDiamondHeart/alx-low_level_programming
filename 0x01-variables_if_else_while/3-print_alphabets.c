#include <stdio.h>

/**
 * main - This is the main entry point of the code
 *
 * Description: This program prints the alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
