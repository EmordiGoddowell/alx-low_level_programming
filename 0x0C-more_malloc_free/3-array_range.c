#include <stdlib.h>

/**
 * array_range - creates an array and allocates memory.
 * @min: the minimun value in the array.
 * @max: the maximum value in the array.
 *
 * Return: NULL if min os greater thyan max,
 * and NULL is array is Null.
**/

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
