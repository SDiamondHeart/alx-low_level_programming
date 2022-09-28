#include "main.h"

/**
 * _sqrt2 - makes possible to calculate from 1 to n
 * @r: same as number n
 * @s: number that iterates from 1 to n
 *
 * Return: On success, 1
 * On error, -1 is returned, and the errno is set appropriately
 */

int sqrt2(int r, int s)
{
	if (s * s == r)
	{
		return (s);
	}
	else if (s * s > r)
	{
		return (-1);
	}

	return (sqrt2(r, s + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number integer
 *
 * Return: On success, 1
 * On error, -1 is returned, and the errno is set appropriately
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
