#include "main.h"
#include <unistd.h>
/**
 * print_sign - prints the sign of a number
 * @n: the number whose sign is to be printed
 * Return: 1 & + if n > 0; 0 if n is 0; -1 & - if n < 0
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = n / n;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = n * 0;
		_putchar('0');
	}
	else
	{
		r = (n / n) * -1;
		_putchar('-');
	}
	return (r);
	write(1, "\n", 1);
}
