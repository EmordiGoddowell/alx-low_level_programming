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
		if (h->str == NULL)
			puts("[0] (nil)");
		else
		snprintf(buffer, sizeof(buffer), "[%u] %s\n", h->len, h->str);
		puts(buffer);
		h = h->next;
		count++;
	}

	return (count);
}
