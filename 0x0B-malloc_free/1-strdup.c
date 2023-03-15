#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new string, duplicate of str
 * @str: the string
 * Return: the string being pointed to.
 */

char *_strdup(char *str)
{
	size_t i;
	char *s;

	s = malloc(sizeof(char) * (strlen(str) + 1));

	if (str == NULL)
		return (NULL);

	if (sizeof(s) < sizeof(str))
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		s[i] = *(str + i);
	}
	return (s);
	free(s);
}
