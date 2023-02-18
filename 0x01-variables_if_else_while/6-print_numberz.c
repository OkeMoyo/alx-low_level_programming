#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: prints all single digit base 10 numbers
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
