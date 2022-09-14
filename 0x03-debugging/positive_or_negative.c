#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - This is the user defined function for this code
 * @i: This is the character to print
 *
 * Description: This code is to test an original code
 * Return: 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive \n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative \n", i);
	}
	else
	{
		printf("%d is zero \n", i);
	}
}
