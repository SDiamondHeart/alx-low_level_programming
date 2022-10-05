#include "main.h"

/**
 * _isalpha - This is the user defined function for this code
 * @c: This is the character to print
 *
 * Description: This code writes a function that checks for alphabets
 * Return: 1 if c is either an uppercase or lowercase letter otherwise 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
