#include "main.h"
#include <stdio.h>

/**
 * _abs - This is the user defined function for the code
 * @n: This is the character to print
 *
 * Description: This code computes the absolute value of an integer
 *
 * Return: 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
