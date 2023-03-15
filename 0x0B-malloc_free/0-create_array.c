#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: the size of the array
 * @c: the chars to add to the array
 * Return: array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (i == size)
			str[i] = '\0';
		else
		{
			str[i] = c;
		}
	}
	return (str);
	free(str);
}
