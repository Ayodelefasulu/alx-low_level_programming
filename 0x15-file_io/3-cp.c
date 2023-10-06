#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *message, const char *arg);

/**
 * print_error - Print an error message and exit with the given code.
 * @code: The exit code.
 * @message: The error message format.
 * @arg: The argument to include in the error message.
 */
void print_error(int code, const char *message, const char *arg)
{
	dprintf(2, message, arg);
	exit(code);
}

/**
 * main - Copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to\n", "");
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to %s\n", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		char fd_str[12];
		snprintf(fd_str, sizeof(fd_str), "%d", fd_from);
		print_error(100, "Error: Can't close fd %s\n", fd_str);
	}

	return (0);
}
