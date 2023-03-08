#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return ('\n');

	_putchar(*s);
	s++;

	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
