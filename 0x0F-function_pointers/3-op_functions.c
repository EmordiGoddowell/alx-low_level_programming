#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b.
**/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract an int from another
 * @a: the first integer
 * @b: the second integer
 *
 * Return: The difference of a from b.
**/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two int
 * @a: the first integer
 * @b: the second integer
 *
 * Return: The product of a and b.
**/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides an int from with another
 * @a: the first integer
 * @b: the second integer
 *
 * Return: The quotient of a by b.
**/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: The remainder from the quotient of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
