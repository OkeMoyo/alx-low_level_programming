#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: a list of the types of all arguments supplied
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	double d;
	char *s;
	va_list (my_list);
	const char *p = format;

	va_start(my_list, format);

	while (*p)
	{
		if (*p == 'c')
		{
			c = va_arg(my_list, int);
			printf("%c", c);
		}
		else if (*p == 'i')
		{
			i = va_arg(my_list, int);
			printf("%d", i);
		}
		else if (*p == 'f')
		{
			d = va_arg(my_list, double);
			printf("%f", d);
		}
		else if (*p == 's')
		{
			s = va_arg(my_list, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}

		if (*(++p))
			printf(", ");
	}

	va_end(my_list);
	printf("\n");
}
