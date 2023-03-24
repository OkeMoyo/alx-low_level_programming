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
	va_list(my_list);

	format[0] = c;
	format[1] = i;
	format[2] = f;
	format[3] = s;
	va_start(my_list, format);
}
