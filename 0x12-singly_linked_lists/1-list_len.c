#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the first node
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
