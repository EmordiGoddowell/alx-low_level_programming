#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

/**
 * main - entry point for our program/
 * @argc: arguement count.
 * @argv: arguement vector
 *
 * Return: 1 and 2 if failed, and 0 for successfuk execution.
**/

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes(num_bytes);

	return (0);
}

/**
 * print_opcodes - prints the opcode of an integer.
 * @num_bytes: The number of bytes to print from the opcode
**/

void print_opcodes(int num_bytes)
{
	unsigned char *opcode_start;
	int i;

	opcode_start = (unsigned char *)print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		if (i > 0)
		{
			printf(" ");
		}

		if (i >= sizeof(print_opcodes))
		{
			break;
		}

		printf("%02hhx", opcode_start[i]);
	}
	printf("\n");
}
