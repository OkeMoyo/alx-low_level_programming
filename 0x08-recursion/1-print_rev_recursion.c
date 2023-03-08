#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be reverse-printed
 */

void _print_rev_recursion(char *s)
{
	int len = 0;

	if (len == 0)
		return;
	else
	{
		printf("%c", s[len - 1]);
		len--;
		_print_rev_recursion(s);
	}
}
