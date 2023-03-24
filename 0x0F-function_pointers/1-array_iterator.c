#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to be worked on
 * @size: the size of the array
 * @action: pointer to an array which takes an action
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0)
		exit(0);

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
