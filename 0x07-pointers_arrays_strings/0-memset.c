#include <stdio.h>
#include "main.h"

/**
* _memset() - fills memory with a constant byte.
*
* @s: A pointer to the memory area to be filled.
* @b: The constant byte to be used to fill the memory area.
* @n: The number of bytes to be filled.
*
* Returns: A pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

		while (n--)
		{
			*p = b;
		}
		return (s);
}
