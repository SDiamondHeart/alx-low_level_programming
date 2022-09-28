#include "main.h"

/**
 * prime_check - checks to see if a number is prime
 * @c: factor check
 * @p: possible prime number
 *
 * Return: 1, if prime, else 0
 */

int prime_check(int c, int p)
{
	if (p < 2 || p % c == 0)
	{
		return (0);
	}
	else if (c > p / 2)
	{
		return (1);
	}
	else
		return (prime_check(c + 1, p));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if it is a prime number, else 0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (prime_check(2, n));
}
