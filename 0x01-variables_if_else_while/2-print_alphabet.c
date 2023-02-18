#include <stdio.h>

/**
 * main - entry point into the program
 *
 * Return: prints the alphabet in lower case
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c+1;
	}
	return (0);
}
