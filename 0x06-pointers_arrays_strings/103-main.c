#include "main.h"
#include <stdio.h>

/**
 * printResult - Prints the addition result
 * @n: The first number
 * @m: The second number
 * @res: The result of the addition
 *
 * This function prints the result of the addition operation in the format:
 * <n> + <m> = <res>
 */
void printResult(const char *n, const char *m, const char *res);

/**
 * main - Entry point of the program
 *
 * This function performs addition on different number pairs using
 * the infinite_add function and prints the result.
 *
 * Return: Always 0
 */
int main(void)
{
	char n1[] = "123456789243457436782357457567847768578564568587687
		6774586734734563456453743756756784458";
	char m1[] = "90347906634706972346829145693462596349586932
		46597324659762347956349265983465962349569346";
	char res1[100];

	char *result1 = infinite_add(n1, m1, res1, 100);

	if (result1 == 0)
	{
	printf("Error\n");
	}
	else
	{
	printResult(n1, m1, result1);
	}

	char n2[] = "1234567890";
	char m2[] = "1";
	char res2[10];

	char *result2 = infinite_add(n2, m2, res2, 10);

	if (result2 == 0)
	{
	printf("Error\n");
	}
	else
	{
	printResult(n2, m2, result2);
	}

	char n3[] = "999999999";
	char m3[] = "1";
	char res3[10];

	char *result3 = infinite_add(n3, m3, res3, 10);

	if (result3 == 0)
	{
	printf("Error\n");
	}
	else
	{
	printResult(n3, m3, result3);
	}

	char res4[11];

	char *result4 = infinite_add(n3, m3, res4, 11);

	if (result4 == 0)
	{
	printf("Error\n");
	}
	else
	{
	printResult(n3, m3, result4);
	}
	return (0);
}

void printResult(const char *n, const char *m, const char *res)
{
	printf("%s + %s = %s\n", n, m, res);
}
