#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
**/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	char buffer[1024];

	while (h != NULL)
	{
		fputs("[0] (nil)\n", stdout);
        else
        {
		snprintf(buffer, sizeof(buffer), "[%u] %s", h->len, h->str);
		fputs(buffer, stdout);
		putchar('\n');
	}

	return (count);
}
