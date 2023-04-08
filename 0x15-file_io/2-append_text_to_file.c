#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
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

	fp = open(filename, O_WRONLY | O_APPEND);

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
