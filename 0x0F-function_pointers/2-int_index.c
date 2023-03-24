#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: pointer to a comparison function to find the integer
 * Return: the integer being searched for
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int a;

	if (array == NULL)
		exit(0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		a = (*cmp)(array[i]);
		if (a)
			return (i);
	}
	return (-1);
}
