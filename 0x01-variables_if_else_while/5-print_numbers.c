#include <stdio.h>

/**
 * main - Print the numbers since 0 to 9
 *
 * Return : Always 0 (Success)
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
