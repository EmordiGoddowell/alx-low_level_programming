#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);  /*Uppercase character*/
	}
	else
	{
	return (0);  /* Not an uppercase character*/
	}
}
