#include <stdio.h>

/**
 * main - This is the entry code of the point
 *
 * Description: This program prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;


	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
