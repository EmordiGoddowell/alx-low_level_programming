#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void multiply(char num1[], char num2[]);

/**
 * main - entry point for the program.
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: 1 if error is encountered, and 0 otherwise.
**/

int main(int argc, char *argv[])
{
	int i;
	char *num1;
	char *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]; i++)
		if (num1[i] < '0' || num1[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	for (i = 0; num2[i]; i++)
		if (num2[i] < '0' || num2[i] > '9')
		{
			printf("Error\n");
			return (1);
		}

	multiply(num1, num2);

	return (0);
}

/**
 *  multiply - multiplies two arrays of integers.
 *  @num1: the first string of integers.
 *  @num2: the second string of integers.
 *
 *  Return: the multiplicated results.
**/

void multiply(char num1[], char num2[])
{
	int i = 0;
	int j;
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result;

	result = (int *)calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}

	while (i < len1 + len2 && result[i] == 0)
		i++;
	if (i == len1 + len2)
		printf("0");
	else
		for (; i < len1 + len2; i++)
			printf("%d", result[i]);
	printf("\n");
	free(result);
}
