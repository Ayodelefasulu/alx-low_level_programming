#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this function adds up all arguments specified
 * @n: number of arguments
 * @...: ellipses, all arguments to be added
 *
 * Return: returns the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int addition;

	va_start(list, n);

	addition = 0;
	for (i = 0; i < n; i++)
	{
		addition += va_arg(list, int);
	}

	va_end(list);

	return (addition);
}
