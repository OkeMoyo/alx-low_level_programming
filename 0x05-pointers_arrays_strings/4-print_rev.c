#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
