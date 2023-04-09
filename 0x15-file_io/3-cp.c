#include "main.h"

/**
 * main - Entry point function
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 * Return: 0 on success, 97-100 on error
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buf[1024];

	/* Check for correct number of arguments */
	if (argc != 3) {
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);}
	/* Open source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);}
	/* Open destination file for writing */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1) {
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);}
	/* Copy data from source file to destination file */
	do {
		rd = read(fd_from, buf, 1024);
		if (rd == -1) {
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);}
		wr = write(fd_to, buf, rd);
		if (wr == -1) {
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);}
	} while (rd == 1024);
	/* Close file descriptors */
	if (fd_from == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);}
	if (fd_to == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);}

	return (0);
}
