#include "main.h"

int is_prime_recursive(int n, int divisor);

/**
 * is_prime_number - Determines if a integer is a prime number or not.
 * @n: The integer to be checked if its a prime number.
 *
 * Return: 1 if a number is a prime number, and 0 if otherwise.
**/

int is_prime_number(int n)
{
	return is_prime_recursive(n, 2);
}

/**
 * is_prime_recursive - Checks if a number is prime recursively.
 * @n: The number to be checked.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
**/

int is_prime_recursive(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	if (divisor >= n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor + 1));
}
