#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: the first node
 * @n:the integer to be added to the new node
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}

	return (&(**head));
}
