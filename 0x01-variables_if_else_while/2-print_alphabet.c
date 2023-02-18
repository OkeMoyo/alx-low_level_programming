#include <stdio.h>

/**
 * main - entry point into the program
 *
 * Return: prints the alphabet in lower case
 */

int main(void)
{
	char c;
	char x;

	c = 'a';
	x = "\n";
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar(x);

	return (0);
}
