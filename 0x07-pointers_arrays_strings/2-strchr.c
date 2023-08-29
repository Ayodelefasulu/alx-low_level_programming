#include <stddef.h>
#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of character `c` in string `s`,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
