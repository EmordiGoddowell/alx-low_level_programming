#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry proin for this program.
 * @argc: arguement count.
 * @argv: argurment vector.
 *
 * Return: error if argc is equals to 0
 * and 1 for a successful execution.
**/

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);

		printf("%d\n", n1 * n2);
	}
	return (0);
}
