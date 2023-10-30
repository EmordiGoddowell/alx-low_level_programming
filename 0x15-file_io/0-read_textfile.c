#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to
 *		POSIX standard output (STDOUT).
 * @filename: The name of the text file to be read.
 * @letters: The number of letters it should read and print.
 *
 * Return: Actual number of letters it could read and print.
 * If the file cannot be opened or read, return 0.
 * If filename is NULL, return 0.
 * If write fails or does not write the expected
 *	amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (write_count);
}
