#include "main.h"

/**
* _memcpy - a function that copies memory area
* @dest: memory where is stored
* @src: memory where is copies
* @n: member of bytes
*
* Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + 1) = *(src + 1);
	}
	return (dest);
}

