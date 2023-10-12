#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints out a name with a pointer to a function in memory
 * @name: pointer to a string holding the names to print
 * @f: the function pointer that takes a char*
 *
 * Return: void
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
