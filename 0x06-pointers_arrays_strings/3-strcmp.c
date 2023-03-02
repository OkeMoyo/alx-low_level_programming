#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	signed int i;

	if (s1 < s2)
		i = -15;
	else if (s1 == s2)
		i = 0;
	else
		i = 15;
	return (i);
}
