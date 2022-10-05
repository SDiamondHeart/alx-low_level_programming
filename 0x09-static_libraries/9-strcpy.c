#include "main.h"

/**
 * _strcpy - copies the string copied by src, including
 * terminating null byte (\0), to the buffer pointed to by the dest
 * @dest: char type string
 * @src: char type string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

