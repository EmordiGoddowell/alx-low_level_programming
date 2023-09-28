#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursive - Recursive function to find the square root of a number.
* @n: The number for which to find the square root.
* @approximation: The current approximation for the square root.
*
* Return: The square root if found, otherwise -1.
*/

int _sqrt_recursive(int n, int approximation);

/**
* _sqrt_recursion - Find the square root of a non-negative integer.
* @n: The non-negative integer for which to find the square root.
*
* Return: The square root of n, or -1 if n is negative.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursive(n, n / 2));
	}
}

int _sqrt_recursive(int n, int approximation)
{
	if (approximation * approximation == n)
	{
		return (approximation);
	}
	else if (approximation == 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursive(n, approximation - 1));
	}
}
