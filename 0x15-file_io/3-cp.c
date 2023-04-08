#include "main.h"

#define BUF_SIZE 1024

/**
 * copy_file - copies the contents of one file to another
 * @file_from: name of the source file
 * @file_to: name of the destination file
 * Return: 0 on success, or an error code on failure
*/
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, n_read, n_write;
	char buf[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		return (99);
	}
	while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		n_write = write(fd_to, buf, n_read);
		if (n_write != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (98);
	}
	close(fd_from);
	close(fd_to);
	return (0);
}

/**
 * main - entry point for the program
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 * Return: 0 on success, or an error code on failure
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	return (copy_file(argv[1], argv[2]));
}
