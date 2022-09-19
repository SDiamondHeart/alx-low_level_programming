#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * followed by a new line
 * @a: pointer to string to print
 * @n: number of elements of the array to be printed
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
