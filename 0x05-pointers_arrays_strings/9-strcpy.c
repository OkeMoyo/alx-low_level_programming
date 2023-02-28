#include "main.h"

/**
 * *_strcpy - copies the string of a pointer to another pointer
 * @dest: destination of the copy command
 * @src: source of the copy
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
