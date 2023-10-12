#include "function_pointers.h"

/**
 * int_index - Returns the index of the first element
 * for which the comparison is true
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @cmp: Pointer to a function for comparison
 *
 * Return: Index of the first matching element,
 * or -1 if no match is found
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
