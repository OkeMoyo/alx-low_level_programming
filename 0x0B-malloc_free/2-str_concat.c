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
	char *ptr;

	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));

	for (i = 0; i < strlen(s1) && s1[i] != '\0'; i++)
		*(ptr + i) = s1[i];
	for (i = 0; i < strlen(s2) && s2[i] != '\0'; i++)
		ptr[strlen(ptr) + i] = s2[i];
	ptr[strlen(ptr) + i] = '\0';
	return (ptr);
}
