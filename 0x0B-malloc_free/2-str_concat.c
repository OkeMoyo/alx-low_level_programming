#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	size_t i;
	size_t j;
	char *ptr;
	size_t n1;
	size_t n2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n1 = strlen(s1);
	n2 = strlen(s2);

	ptr = malloc(sizeof(char) * (n1 + n2 + 1));

	if (ptr == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++, j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
