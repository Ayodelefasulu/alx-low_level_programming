#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Positive if s1 > s2, negative if s1 < s2, 0 if s1 == s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare characters until a difference is found or both strings end */
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	/* Return the ASCII difference of the differing characters */
	return (s1[i] - s2[i]);
}
