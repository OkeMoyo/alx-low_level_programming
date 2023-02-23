#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_numbers - prints all single digits
 *
 * Return: all the numbers from 0 to 9
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
	write(1, "\n", 1);
}
