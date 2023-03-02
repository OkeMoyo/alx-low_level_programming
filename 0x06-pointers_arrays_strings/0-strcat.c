#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int lens = 0;
	int lend = 0;
	char *ptr;

	while (dest[i] != '\0')
	{
		lend++;
		dest++;
	}
	while (src[j] != '\0')
	{
		lens++;
		src++;
	}
	for (i = 0; i <= lend; i++)
	{
		if (dest[i] == '\0')
		{
			dest[i] = src[j];
			for (; j <= lens; j++)
			{
				*(dest + (i + 1)) = *(src + j);
			}
		}
		ptr = dest;
	}
	return (ptr);
}
