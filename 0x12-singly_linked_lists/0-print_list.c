#include "lists.h"
#include <stdio.h>
#include <string.h>

size_t print_list(const list_t *h)
{
	size_t count = 0;
	char buffer[1024];
	
	while (h != NULL)
	{
		if (h->str == NULL)
			fputs("[0] (nil)\n", stdout);
		else
		{
			snprintf(buffer, sizeof(buffer), "[%u] %s", h->len, h->str);
			fputs(buffer, stdout);
			putchar('\n');
		}
		h = h->next;
		count++;
	}

	return (count);
}
