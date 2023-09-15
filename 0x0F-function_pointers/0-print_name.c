#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function pointer that prints name
 * @name: what to be printed
 * @f: function that contain other's address
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
