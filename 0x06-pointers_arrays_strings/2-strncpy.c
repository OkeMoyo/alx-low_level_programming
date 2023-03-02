#include "main.h"

/**
 * _strncpy - copies the string in src to dest
 * @dest: destination of string
 * @src: source string
 * @n: number of bytes of src string
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
