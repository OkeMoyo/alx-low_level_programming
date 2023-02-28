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
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		printf(s[i]);
		i--;
	}
}
