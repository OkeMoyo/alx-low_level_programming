#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - frees a list
 * @head: pointer to the struct
 * Return: void
 */

void free_list(list_t *head)
{
	head = NULL;

	head = malloc(sizeof(list_t));

	head->str = "";
	head->len = 0;

	free(head);
}
