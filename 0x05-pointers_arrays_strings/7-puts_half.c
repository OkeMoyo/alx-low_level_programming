#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int i;

	n = strlen(str);
	if ((n % 2) == 0)
		i = n / 2;
	else
		i = (n - 1) / 2;

	for (; i <= n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
