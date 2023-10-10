#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the string to stdout
 * @str: The string to print
 * Return: On success, the number of characters written.
 * On error, -1 is returned, and errno is set appropriately.
**/

int _putchar(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (write(1, &str[len], 1) == -1)
			return (-1);
		len++;
	}
	return (len);
}
