#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates the factorial of integer n.
 * @n: the integer whose factorial is to be computed.
 *
 * Return: the factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
