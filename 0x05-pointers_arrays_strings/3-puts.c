#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * Return: 1
 */

void _puts(char *str)
{
	write(1, str, strlen(str));
	write(1, "\n", 1);
}
