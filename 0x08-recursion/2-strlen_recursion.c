#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string whose length is to be returned
 * Return: integer value of string length
 */

int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
