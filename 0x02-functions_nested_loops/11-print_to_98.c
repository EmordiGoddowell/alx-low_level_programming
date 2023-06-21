#include "main.h"
/**
* print_number - Prints an integer using putchar
* @n: The number to be printed
*/
void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);
	if (n < 0)
	n = -n;

	_putchar('0' + (n % 10));
}

/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: The starting number
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}

	print_number(n);
	_putchar('\n');
}
