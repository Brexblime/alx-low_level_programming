#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename:  is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fp, numbytes_written, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length])
		length++;
	}

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
	{
		return (-1);
	}

	numbytes_written = write(fp, text_content, length);

	if (numbytes_written == -1)
	{
		return (-1);
	}
	close(fp);

	return (1);
}
