#include <stdlib.h>

/**
 * malloc_checked - Allocates memory to an element.
 * @b: a positive value of memory to be allocated.
 *
 * Return: 98 if malloc fails, and the pointer for a successful execution.
**/

void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
