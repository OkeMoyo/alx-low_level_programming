#include "main.h"
#include <unistd.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: input parameter
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int r;

	if (n > 0)
	{
		r = n % 10;
	}
	return (r);
}
