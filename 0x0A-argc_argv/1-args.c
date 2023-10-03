#include <stdio.h>

/**
 * main - Entry point for the execution to be carried out.
 * @argc: the arguement count.
 * @argv: the arguement vector.
 *
 * Return: 0 for a successful execution.
**/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
