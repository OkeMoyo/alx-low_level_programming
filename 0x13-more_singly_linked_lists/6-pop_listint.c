#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	while (head != NULL)
	{
		head = head->next;
		temp = head;
		free(head);
	}
}
