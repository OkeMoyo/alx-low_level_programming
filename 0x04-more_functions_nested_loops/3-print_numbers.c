#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_numbers - prints all single digits
 */

void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
}
