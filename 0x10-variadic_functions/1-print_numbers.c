#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers to stdout
 * @separator: separates each number printed
 * @n: amount of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_numbers;

	va_start(my_numbers, n);

	if (separator == NULL)
		exit(EXIT_SUCCESS);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_numbers, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(my_numbers);
	printf("\n");
}
