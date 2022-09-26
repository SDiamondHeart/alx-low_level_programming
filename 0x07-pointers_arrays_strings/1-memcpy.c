#include "main.h"

/**
 * *_memcpy - copies n bytres from memory area src to dest
 * @dest: dest memory area
 * @src: src memory area
 * @n: bytes from memory area to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
