#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point of the program
 *
 * Return: prints the alphabet in lowercase
 */
int _putchar(char c);

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return;
}