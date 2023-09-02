#include <stdio.h>
#include "main.h"
/**
 * main - This is the entry point.
 * @argc: this is the argument count.
 * @argv: this is an array of pointers to string.
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
