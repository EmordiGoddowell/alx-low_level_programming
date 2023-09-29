#include "main.h"

int _sqrt_recursive(int n, int i);

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to calculate the square root of.
*
* Return: The resulting square root.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursive(n, 0));
	}
}

/**
*  _sqrt_recursive - Recursively calculates the square root of a number.
*  @n: The number for which to find the square root.
*   @i: Iterator used in the recursive process.
*
*   Return: The resulting square root.
*/
int _sqrt_recursive(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_recursive(n, i + 1));
	}
}
