#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: True if the character is a separator, otherwise false.
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (separators[i] == c)
		{
			return (true);
		}
	}

	return (false);
}

/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	bool new_word = true;

	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
		{
			new_word = true;
		}
		else if (new_word)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
			new_word = false;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + ('a' - 'A');
			}
		}
		i++;
	}

	return (str);
}

