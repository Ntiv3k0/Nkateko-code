#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT
 * @filename: The file that is being read
 * @letters: amount of letters to be read
 * Return: W - The amount of bytes read and printed
 *     0 when the function fails of filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
