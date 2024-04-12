#include "search_algos.h"
/**
 * binary_search - function performs linear search
 * @array: pointer to the array to search
 * @size: size of array
 * @value: value to look at
 *
 * Return: Returns an integer
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, i;
	size_t high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array:");

		for (i = low; i <= high; i++)
		{
			printf(" %d", array[i]);
			if (i < high)
			{
				printf(",");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
