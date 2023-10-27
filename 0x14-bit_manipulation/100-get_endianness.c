#include <stddef.h>

/** 
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *)&num;

	/* Check the byte order by examining the least significant byte */
	if (*endian == 1)
		return 1; /* Little endian */
	else
		return 0; /* Big endian */
}
