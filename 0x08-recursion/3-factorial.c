#include "main.h"
#include <stdio.h>

/**
 * factorial - Calculates the factorial of a non-negative integer.
 * @n: The integer for which the factorial is calculated.
 *
 * Return: The factorial of @n, or -1 if @n is negative (error condition).
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
