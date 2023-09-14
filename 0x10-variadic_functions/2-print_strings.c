#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this function prints strings
 * @separator: separates the arguments
 * @n: number of arguments
 * @...: ellipses
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		char *pstr;

		pstr = va_arg(list, char *);
		printf("%s", pstr);
		if (separator == NULL)
		{
			continue;
		}
		if (pstr == NULL)
		{
			printf(" ");
		}
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
