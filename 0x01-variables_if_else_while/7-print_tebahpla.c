#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: prints the lower case alphabet in reverse
 */
int main(void)
{
	int c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
