#include <stddef.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Ensure index is within valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with the bit at the specified index */
	mask = 1UL << index;

	/* Use bitwise OR to set the bit to 1 */
	*n |= mask;

	/* Return 1 to indicate success */
	return (1);
}
