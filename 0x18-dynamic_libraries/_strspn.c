#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: Number of bytes in the initial segment of `s` consisting only of
 *         bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int match;
	char *acc = accept;

	while (*s)
	{
		match = 0;

		for (acc = accept; *acc; acc++)
		{
			if (*s == *acc)
			{
				length++;
				match = 1;
				break;
			}
		}

		if (!match)
		{
			break;
		}
		s++;
	}

	return (length);
}
