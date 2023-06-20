#include "main.h"
/**
 * print_alphabet_x10 - 'prints alphabet 10 times'
 * return: 0 (successful execution)
 */
void print_alphabet_x10(void)
	{
		int i;
		int j;

		for (i = 1; i <= 10; i++)
		{
			for (j = 97; i <= 122; j++)
			{
				_putchar(j);
			}
			_putchar('\n');
		}
	}
