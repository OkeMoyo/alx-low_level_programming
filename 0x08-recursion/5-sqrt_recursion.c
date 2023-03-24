#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root will be returned
 * Return: the square root of the n
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	{
		if (i * i != n)
			return (i * _sqrt_recursion(i + 1));
	}
	return (i);
}
