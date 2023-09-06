#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - function that returns newly alloc pointer
 * @str: character to be initialized
 *
 * Return: the new pointer
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length;
	unsigned int i;

	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc(sizeof(char) * 2);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}

