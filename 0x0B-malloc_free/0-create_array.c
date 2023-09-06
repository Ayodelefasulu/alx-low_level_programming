#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates array of char
 * @size: sizeof char
 * @c: character to be create
 *
 * Return: character pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
	free(str);
}
