#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point of the program
 *
 * Return: prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	write(1, "\n", 1);
}
