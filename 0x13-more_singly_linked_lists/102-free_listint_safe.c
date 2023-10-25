#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the start of the list
 *
 * Return: size of the list that was freed
**/

size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	long int diff;
	listint_t *temp;

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;

	return (num);
}
