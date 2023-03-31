#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end of the list
 * @head: pointer to a pointer to the head of the list
 * @str: data in the new node to be added
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;

	if (*head == NULL)
		return (NULL);

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	current->next = new_node;

	return (new_node);
}
