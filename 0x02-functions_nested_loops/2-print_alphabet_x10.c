#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 * Return: function return_type is void
*/

void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		write(1, "\n", 1);
		i++;
	}
}
