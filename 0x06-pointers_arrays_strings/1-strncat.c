#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes from src
 * Return: a pointer to the resulting string in dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lend;

	lend = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lend + i] = src[i];
	}
	dest[lend + i] = '\0';

	return (dest);
}
