#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
<<<<<<< HEAD
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
=======
*/

void free_listint(listint_t *head)
{
    listint_t *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
>>>>>>> 9cb3389564307b07650169d520cfa416a7987492
