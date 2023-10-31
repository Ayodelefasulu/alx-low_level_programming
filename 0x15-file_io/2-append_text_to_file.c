#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - appends to file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: returns success or failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t fw;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fw = write(fd, text_content, strlen(text_content));
		if (fw == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
