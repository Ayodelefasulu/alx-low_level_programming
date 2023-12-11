#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the byte in `s` that
 * matches one of the bytes in `accept`,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *acc = accept;

		while (*acc)
		{
			if (*s == *acc)
			{
				return (s);
			}

			acc++;
		}

		s++;
	}

	return (NULL);
}
