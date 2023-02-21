#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char alp;

	alp = 'a';
	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	return (0);
}
