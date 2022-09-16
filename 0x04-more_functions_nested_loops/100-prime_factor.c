#include <stdio.h>

/**
 * main - this is the entry point of the code
 *
 * Description: this code prints the largest prime factor of the number
 *
 * Return: 0
 */

int main(void)
{
	long int x = 612852475143;
	long int pf;

	for (pf = 2; pf <= x; pf++)
	{
		if (x % pf == 0)
		{
			x = x / pf;
			pf--;
		}
	}
	printf("%ld\n", pf);

	return (0);
}
