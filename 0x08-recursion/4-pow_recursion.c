#include "main.h"
#include <stdio.h>

/**
* _pow_recursion - calculate the value of int x raised to the power of y.
* @x: the value to be raised.
* @y: the power the int value is raised to.
*
* Return: it returns -1 if it fails
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
