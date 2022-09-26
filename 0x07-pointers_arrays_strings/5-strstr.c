#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: the string to searc
 * @needle: the string to find
 *
 * Return: pointer to the beginning of located string else Null
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
