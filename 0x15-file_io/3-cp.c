#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

void print_error(const char* format, ...)
{
	va_list args;

	va_start(args, format);
	fprintf(stderr, format, args);
	fprintf(stderr, "\n");
	va_end(args);
}

void copy_file(const char* file_from, const char* file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (file_from == NULL || file_to == NULL)
	{
	print_error("Usage: cp file_from file_to");
	exit(97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
	print_error("Error: no read from file %s", file_from);
	exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	print_error("Error: Can't write to %s", file_to);
	close(fd_from);
	exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1)
	{
	print_error("Error: Can't write to %s", file_to);
	close(fd_from);
	close(fd_to);
	exit(99);
	}
	}

	if (bytes_read == -1) 
	{
	print_error("Error: Can't read from file %s", file_from);
	{
	close(fd_from);
	close(fd_to);
	exit(98);
	}
	}

    	if (close(fd_from) == -1)
	{
	print_error("Error: Can't close fd %d", fd_from);
	exit(100);
	}
	if (close(fd_to) == -1)
	{
	print_error("Error: Can't close fd %d", fd_to);
	exit(100);
	}
}

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
	print_error("Usage: cp file_from file_to");
	exit(97);
	}

    	copy_file(argv[1], argv[2]);

	return 0;
}
