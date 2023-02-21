#include "main.h"
/**
 * print_alphabet - entry point of the program
 *
 * Return: prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return (0);
}
