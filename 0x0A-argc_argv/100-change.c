#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc:arguement count.
 * @argv: arguement vector.
 *
 * Return: 0 for a successful execution, 1 otherwise.
**/

int main(int argc, char *argv[])
{
	int i;
	int cents = atoi(argv[1]);
	int num_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
