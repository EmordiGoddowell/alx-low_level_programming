#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters.
 * @size: The size of the array to be created.
 * @c: The character used for initialization.
 *
 * Return: Pointer to the allocated and initialized array, or NULL on failure.
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
