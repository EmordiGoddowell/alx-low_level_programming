#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - Prints the string of text in reverse using recursion.
* @s: The string pointed to.
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		if (*(s + 1))
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
