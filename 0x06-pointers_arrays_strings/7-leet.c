#include "main.h"
#include <stdbool.h>

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *leet_replace = "aAeEoOtTlL";
	char *leet_with = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_replace[j] != '\0'; j++)
		{
			if (str[i] == leet_replace[j])
			{
				str[i] = leet_with[j];
				break;
			}
		}
	}

	return (str);
}
