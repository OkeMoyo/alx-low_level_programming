#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: prints the sizes of different types
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %d byte(s)", sizeof(c));
	printf("Size of an int: %d byte(s)", sizeof(i));
	printf("Size of a long int: %d byte(s)", (unsigned long)sizeof(i));
	printf("Size of a long long int: %d byte(s)", (unsigned long)sizeof(i));
	printf("Size of a float: %d byte(s)", (unsigned long)sizeof(f));

	return (0);
}
