#include <stdio.h>

/**
 * main - entry point into the program
 *
 * Return: prints the alphabet in lower case
 */

int main(void)
{
	int x = 'a';

	if (x <= 'z')
		putchar (x++);

	return (0);
}
