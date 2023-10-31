#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * check_argc - Checks if the number of arguments is correct.
 * @argc: The number of arguments.
 *
 * Return: Nothing.
 * Exits with code 97 if the number of arguments is incorrect.
**/

void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_files - Opens the source and destination files.
 * @argv: An array of pointers to the arguments.
 * @fd_from: A pointer to the file descriptor of the source file.
 * @fd_to: A pointer to the file descriptor of the destination file.
 *
 * Return: Nothing.
 * Exits with code 98 if the source file cannot be read,
 * Or with code 99 if the destination file cannot be created or written to.
**/

void open_files(char *argv[], int *fd_from, int *fd_to)
{
	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	*fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*fd_from);
		exit(99);
	}
}

/**
 * copy_files - Copies the content of one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Nothing.
 * Exits with code 98 if the source file cannot be read,
 * or with code 99 if the destination file cannot be written to.
**/

void copy_files(int fd_from, int fd_to, char *argv[])
{
	int read_count, write_count;
	char buffer[BUFFER_SIZE];

	while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * close_files - Closes two files.
 * @fd_from: The file descriptor of the first file.
 * @fd_to: The file descriptor of the second file.
 *
 * Return: Nothing.
 * Exits with code 100 if a file descriptor cannot be closed.
**/

void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success. Various exit codes on failure.
**/

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_argc(argc);

	open_files(argv, &fd_from, &fd_to);

	copy_files(fd_from, fd_to, argv);

	close_files(fd_from, fd_to);

	return (0);
}
