#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: int
 * @argv: lists
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%d\n", argv[i]);
		i++;
	}

	return (0);
}
