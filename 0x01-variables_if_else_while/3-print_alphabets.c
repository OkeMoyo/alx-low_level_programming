#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: prints the alphabet in lower and upper case
 */
int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x = x + 1;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y = y + 1;
	}
	putchar('\n');

	return (0);
}
