#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array
 * @a: array
 * @n: n elements of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
