#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory to an array.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory if successful.
 * NULL if `nmemb` or `size` is 0, or if allocation fails.
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	array = malloc(total_size);
	if (array == NULL)
		return (NULL);

	memset(array, 0, total_size);

	return (array);
}
