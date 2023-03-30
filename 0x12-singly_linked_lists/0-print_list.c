#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the elements in the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
