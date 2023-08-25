#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
	char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_shift = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rot13_shift[j];
				break;
			}
		}
	}

	return (str);
}
