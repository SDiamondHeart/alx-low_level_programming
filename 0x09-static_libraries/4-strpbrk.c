#include "main.h"

/**
 * *_strpbrk - searches the string for sny set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: pointer to a byte in s, that matches a byte in accept else null
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
