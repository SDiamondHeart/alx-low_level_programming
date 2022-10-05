#include "main.h"

/**
 * _islower - This is the user defined function for the code
 * @c: This is the character to print
 *
 * Description: This code writes a function to check for lower case characters
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
