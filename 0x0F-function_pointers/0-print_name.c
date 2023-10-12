#include "function_pointers.h"

/**
 * print_name - prints out a name with a pointer to a function in memory
 * @name: pointer to a string holding the names to print
 * @f: the function pointer that takes a char*
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	f(name);
}
