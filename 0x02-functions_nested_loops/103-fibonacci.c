#include <stdio.h>

/**
 * main - This is the entry point of the code
 *
 * Description: This code prints the sum of even valued terms
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long count, i, j, k, sums;

	i = sums = 0;
	j = 1;

	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;

		if (k % 2 == 0 && k, 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);

	return (0);
}
