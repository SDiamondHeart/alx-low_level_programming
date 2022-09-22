#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: string to append src
 * @src: string to append dest
 * @n: largest number of bytes to append
 *
 * Return: address to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);

	return (dest);
}
