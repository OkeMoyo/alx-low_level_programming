#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the input
 * Return: should be void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int));

	if (ptr == NULL)
	{
		exit (98);
	}
	*ptr = b;
	return (ptr);
}
