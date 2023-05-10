#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

/**
 * create_file - Create a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write the file
 * Return: If the function fails --1.
 * Otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	chmod(filename, S_IRUSR | S_IWUSR);

	if (text_content != NULL)
{
	size_t len = strlen(text_content);

	if ((ssize_t)write(fd, text_content, len) != (ssize_t)len)
	{
	close(fd);
	return (-1);
	}
}
	close(fd);
	return (1);
	}
