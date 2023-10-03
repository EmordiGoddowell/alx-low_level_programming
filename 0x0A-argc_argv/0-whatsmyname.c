#include <stdio.h>

/**
 * main - Entry point for the program to ve executed.
 * @argc: the arguement count.
 * @argv: the arguement vector.
 *
 * Return: 0 for a successful execution.
**/

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
