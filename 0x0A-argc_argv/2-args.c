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
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
