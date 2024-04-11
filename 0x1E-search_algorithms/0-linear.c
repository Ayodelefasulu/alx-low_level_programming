#include "search_algos.h"

/**
 * linear_search - function performs linear search
 * @array: pointer to the array to search
 * @size: size of array
 * @value: value to look at
 *
 * Return: Returns an integer
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld]\n", i);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

