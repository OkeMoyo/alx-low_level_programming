#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: a 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int *ptr;

	ptr = malloc(sizeof(int * (width * height)));

	if (width <= 0 || height <= 0)
		return (NULL);

	while (i < width)
	{
		while (j < height)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
