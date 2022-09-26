#include "main.h"

/**
 * *_strchr - locates a character in the string
 * @s: source string
 * @c: charactter to find
 *
 * Return: pointer to the first occurence of c in s else Null
 */

char *_strchr(char *s, char c)
{
	int a, b;

	a = 0;
	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
