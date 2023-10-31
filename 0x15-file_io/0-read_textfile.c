#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads and writes to stdout
 * @filename: name of file
 * @letters: number of file
 *
 * Return: returns no of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters);
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer;
	ssize_t fr;
	ssize_t fw;

	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDWR);

	if (fp == -1)
	{
		return (0);
		/* close(fp); */
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
		close(fp);
	}
	fr = read(fp, buffer, letters);
	if (fr < 0)
	{
		close(fp);
		return (0);
	}
	/* buffer[fr] = '\0'; */
	fw = write(STDOUT_FILENO, buffer, letters);
	if (fw < 0 || fr == fw)
	{
		close(fp);
		return (0);
	}
	close(fp);
	return (fr);
}
