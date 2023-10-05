#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: Array of argument strings.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
**/

char *argstostr(int ac, char **av)
{
	int i;
	int k = 0;
	char *result;

        int total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			result[k++] = av[i][j++];
		}
		result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}
