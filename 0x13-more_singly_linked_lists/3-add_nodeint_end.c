#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to the head of the list
 * @n: integer to be added in new node
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{

	}
	return (&(**head));
}
