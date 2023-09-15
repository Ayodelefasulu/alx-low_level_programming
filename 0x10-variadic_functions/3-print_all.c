#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - this prints any argument given to it
 * @format: a list of specifiers
 *
 * Return: returns nothing.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char c;
	char *s;

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
