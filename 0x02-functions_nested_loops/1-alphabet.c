#include "main.h"
/**
 *print-alphabet: 'prints alphabet in lowercase'
 *
 * return: 0 (successful execution)
 */
void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n')
}
