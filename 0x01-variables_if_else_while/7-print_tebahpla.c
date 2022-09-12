#include <stdio.h>

/**
 * main - This is the entry point of the code
 *
 * Description: This program prints the lowercase alphabets in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
