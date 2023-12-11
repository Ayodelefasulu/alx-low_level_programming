#include "main.h"

/**
 * _strncpy - Copies a string using at most n characters from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy from src.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy up to n characters from source to destination */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If n is greater than src length, fill the rest with null bytes */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
