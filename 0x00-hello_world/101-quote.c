#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - the entry point of the code
 *
 * Return: 0 on success, otherwise 1 exactly to standard error
 */
int main(void)
{
	write(STDOUT_FILENO, "and that price of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
