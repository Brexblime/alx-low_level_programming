#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to a string containing the name of the file to read.
 * @letters: The number of letters it should read and print.
 * Return: The number of letters it could read and print, or 0 if the file
 *	could not be opened or read, if filename is NULL or if write fails
 *	or does not write the expected amount of bytes.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *Buff;
	ssize_t num_read, num_written;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	Buff = malloc(sizeof(char) * letters);
	num_read = read(fp, Buff, letters);
	num_written = write(STDOUT_FILENO, Buff, num_read);

	free(Buff);
	close(fp);
	return (num_written);
}
