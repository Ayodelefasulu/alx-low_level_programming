#include <stddef.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if the string contains invalid characters
 *         or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;
		result |= (*b - '0');
		b++;
	}

	return (result);
}
