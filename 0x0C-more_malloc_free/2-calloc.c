#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: the size in bytes of the elements
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if ((nmemb * size) > *ptr)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ptr = 0;
	return (ptr);
}
