#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t len;

	if (filename == NULL)
	return (-1);

	fp = fopen(filename, "a");

	if (fp == NULL)
	return (-1);

	if (text_content != NULL)
	{
	len = strlen(text_content);

	if (fwrite(text_content, sizeof(char), len, fp) != len)
	{

	fclose(fp);
	return (-1);
	}
	}

	fclose(fp);
	return (1);
}
