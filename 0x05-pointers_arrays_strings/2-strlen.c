#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: the string whose length will be printed
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
