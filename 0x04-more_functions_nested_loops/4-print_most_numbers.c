#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_most_numbers - prints all digits from 0 to 9 except 2 and 4
 * Return: no return value
 */

void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n != 2 || n != 4)
		{
			printf("%d", n);
		}
		n++;
	}
	printf("\n");
}
