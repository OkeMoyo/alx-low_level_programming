#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name to the screen as is or in uppercase
 * @name: the name to be printed
 * @f: a pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
