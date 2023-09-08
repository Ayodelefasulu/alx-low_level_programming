#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc and terminates on failure.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(98);
	}
	return (ptr);
}
