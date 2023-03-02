#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	j = n - 1;
	while (i <= j)
	{
		if (i != n)
		{
			printf(", ");
		}
		printf("%d", a[j]);
		j--;
	}
	printf("\n");
}
