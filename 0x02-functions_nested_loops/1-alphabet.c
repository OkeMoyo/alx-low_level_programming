#include <unistd.h>
/**
 * main - entry point of the program
 *
 * Return: prints the alphabet in lowercase
 */
int alphabet(char c)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	return (0);
}
