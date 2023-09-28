#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - Prints a string of text using recursion.
* @s: The string pointed to.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
