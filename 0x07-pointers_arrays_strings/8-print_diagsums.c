#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	b = 0;
	while (b < size)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];

		b++;
	}

	printf("%d, %d\n", sum1, sum2);
}
