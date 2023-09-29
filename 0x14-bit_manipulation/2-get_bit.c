#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at the specified index (1 or 0), or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	/* Ensure index is within valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with the bit at the specified index */
	mask = 1UL << index;

	/* Use bitwise AND to check if the bit is set */
	if (n & mask)
		return (1);  /* Bit is set, return 1 */
	else
		return (0);  /* Bit is not set, return 0 */
}
