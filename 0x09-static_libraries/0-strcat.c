#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int lend;

	lend = strlen(dest);
	for (i = 0; i < lend && src[i] != '\0'; i++)
	{
		dest[lend + i] = src[i];
	}
	dest[lend + i] = '\0';
	return (dest);
	write(1, "\n", 1);
}
