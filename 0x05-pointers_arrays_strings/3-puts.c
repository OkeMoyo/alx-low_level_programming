#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string to stdout
 * Return: 1
 */

void _puts(char *str)
{
	write(1, str, _strlen(str));
}
