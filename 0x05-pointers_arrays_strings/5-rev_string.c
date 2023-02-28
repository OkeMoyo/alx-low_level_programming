#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: string to be printed in reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}
