#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer value to swap
 * @b: second integer value to swap
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
