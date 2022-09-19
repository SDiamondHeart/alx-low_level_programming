#include "main.h"

/**
 * _strlen - function that returns the length of the string
 * @s: pointer to the string to check
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}
