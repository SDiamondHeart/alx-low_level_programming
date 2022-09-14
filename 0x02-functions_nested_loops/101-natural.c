#include "main.h"
#include <stdio.h>

/**
 * main - This is the entry point of the code
 *
 * Description: This code prints the multiples of 3 0r 5 below 1024
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; 1++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
