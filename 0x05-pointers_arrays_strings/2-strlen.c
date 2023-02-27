#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
/**
 * _strlen - prints the length of a string
 * @s: the string whose length will be printed
 * Return: 1
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
	{
		len++;
	}
	write(1, "\n", 1);
	return (len);
}
