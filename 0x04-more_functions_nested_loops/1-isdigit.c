#include "main.h"
/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1); /* c is a digit */
	}
	else
	{
		return (0); /* c is not a digit */
	}
}

