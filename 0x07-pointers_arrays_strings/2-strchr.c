#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: the identified character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
