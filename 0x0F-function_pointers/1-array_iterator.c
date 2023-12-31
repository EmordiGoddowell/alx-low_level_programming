#include "function_pointers.h"

/**
 * array_iterator - takes an array, size, and a function pointer as arguments
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @action: the function pointer that returns void
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
