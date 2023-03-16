#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t x;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = strlen(s1) + strlen(s2);

	ptr = malloc(sizeof(char) * x);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0' && j <= n)
	{
		ptr[i] = s2[j];
		i++, j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
