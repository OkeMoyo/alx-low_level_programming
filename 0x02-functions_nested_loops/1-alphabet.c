#include <unistd.h>
/**
 * main - entry point of the program
 *
 * Return: prints the alphabet in lowercase
 */
int alphabet()
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
