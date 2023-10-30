#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
**/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
		write_count = write(fd, text_content, text_len);
		if (write_count == -1 || write_count != (ssize_t)text_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
