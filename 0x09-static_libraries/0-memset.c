#include "main.h"

/**
 * *_memset - fills the first n bytes to memory area pointed to by s with
 * constant byte b
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 *
 * Return: pointer to the memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
