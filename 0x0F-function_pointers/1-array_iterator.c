#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as parameter
 * @array: pointer to the array
 * @size: size of the array
 * @action: function pointer that does the work
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
