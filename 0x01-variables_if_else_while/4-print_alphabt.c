#include <stdio.h>
/**
 * main - entry point into the program
 *
 * Return: prints the alphabet in lower case except e & q
 */
int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	c = c + 1;
	}
	putchar('\n');

	return (0);
}
