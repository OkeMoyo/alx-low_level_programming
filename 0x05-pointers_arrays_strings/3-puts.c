#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * Return: 1
 */

void _puts(char *str)
{
	write(1, str, strlen(str));
	write(1, "\n", 1);
}
