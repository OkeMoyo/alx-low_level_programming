#include "main.h"
#include <unistd.h>

/**
 * print_line - draws a straight line in the terminal
 */

void print_line(int n)
{
	char c;
	char result;

	c = 95;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		result = c * n;
		_putchar(result);
	}
}
