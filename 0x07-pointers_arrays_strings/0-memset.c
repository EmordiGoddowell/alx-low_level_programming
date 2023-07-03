#include "main.h"

/**
* _memset - fill a block of memory.
*
* @s: A pointer to the memory area to be filled.
* @b: The constant byte to be used to fill the memory area.
* @n: The number of bytes to be filled.
*
* Return: The pointer to the memory that was filled.
* This pointer can be used to continue working with the memory after
* it has been filled.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

		while (i < n)
		{
			*(s + i) = b;
			i++;
		}
		return (s);
}
