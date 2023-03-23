#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the separator betweene each string
 * @n: the number of strings to print
 */

void print_string(const char *separator, const unsigned int n, ...)
{
	char a;
	unsigned int i;
	va_list my_strings;

	va_start(my_strings, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(my_strings, int);
		if (a == NULL)
			printf("(nil)");
		printf("%d", a);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(my_strings);
	printf("\n");
}
