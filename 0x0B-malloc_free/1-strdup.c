#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string in a new memory space.
 * @str: The input string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL on failure.
**/

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length;

	if (str == NULL)
		return (NULL);

	length = strlen(str) + 1;
	dup = malloc(sizeof(char) * length);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup[i] = str[i];

	return (dup);
}
