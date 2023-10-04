#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point for the program.
 * @argc: argument count
 * @argv: argument vector.
 *
 * Return: 0 for a successful execution, 1 otherwise.
**/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg)
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
