#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic sum function
 * @n: mandatory argument
 * Return: the sum of all mandatory and optional arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int result;
	va_list my_numbers;
	va_start(my_numbers, n);

	result = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		result += va_arg(my_numbers, int);
	}
	va_end(my_numbers);
	return (result);
}
