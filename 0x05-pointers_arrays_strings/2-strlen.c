#include "main.h"
#include <unistd.h>

/**
 * _strlen - prints the length of a string
 * @s: the string whose length will be printed
 * Return: 1
 */

int _strlen(char *s)
{
	int i = 0;
	int n;

	if (s[i] == '\0')
	{
		n = 0;
	}
	else
	{
		while (s[i] != '\0')
		{
			n = i++;
			i++;
		}
	}
	return (n);
}
