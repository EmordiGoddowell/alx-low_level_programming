#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted to binary
 *
 * This function works by shifting the bits of the number to the right
 * and printing the least significant bit until all bits have been printed.
**/

void print_binary(unsigned long int n)
{
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1ul << ((sizeof(n) * 8) - 1);

	while ((n & mask) == 0)
		mask >>= 1;

	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
