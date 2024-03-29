#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list & sets head to NULL
 * @head: double pointer to the head of the list
*/

void free_listint2(listint_t **head)
{
    listint_t *temp;

    while ((*head)->next != NULL)
    {
        temp = *head;
        free(head);
        head = (*head)->next;
    }
    head = NULL;
    free(head);
}