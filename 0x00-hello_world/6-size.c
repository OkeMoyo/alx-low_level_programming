#include <stdio.h>

/**
 * main - description
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %c byte(s)", sizeof(c));
	printf("Size of an int: %d byte(s)", sizeof(i));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(i));
	printf("Size of a long long int: %llu byte(s)", (unsigned long)sizeof(i));
	printf("Size of a float: %d byte(s)", (unsigned long)sizeof(f));

	return (0);
}
