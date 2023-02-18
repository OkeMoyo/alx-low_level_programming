#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: prints all single digit base 10 numbers
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar("%d", c);
		c++;
	}
	putchar('\n');

	return (0);
}
