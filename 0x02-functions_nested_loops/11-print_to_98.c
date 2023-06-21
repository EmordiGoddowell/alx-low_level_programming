#include "main.h"
/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: The starting number
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			_putchar((n / 100) + '0'); /* Print hundreds digit */
			_putchar(((n / 10) % 10) + '0'); /* Print tens digit */
			_putchar((n % 10) + '0'); /* Print ones digit */
						_putchar(',');
						_putchar(' ');
						n--;
		}
			else
			{
						_putchar((n / 100) + '0');
						_putchar(((n / 10) % 10) + '0');
						_putchar((n % 10) + '0');
						_putchar(',');
						_putchar(' ');
						n++;
					}
		}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
